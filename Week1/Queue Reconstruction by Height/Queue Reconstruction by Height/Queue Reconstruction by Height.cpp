class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        if(!people.size()) return vector<vector<int>>{};
        vector < vector< int > > ans(people.size()) ;
        for(int i = 0 ; i < ans.size() ; i ++ )
        {
            ans[i].resize(2) ;
            ans[i][0] = -1 , ans[i][1] = -1 ;
        }
        sort(people.begin() , people.end());
        for( int i = 0 ; i < people.size() ; i ++ )
        {
           int till_now = 0 ;
           for( int j = 0 ; j < ans.size()  ; j ++ )
           {
               if( people[i][1] == till_now && ans[j][0] == -1 )
               {
                   ans[j] = people[i] ;
                   break ;
               }
               else if ( ans[j][0] == -1 ) ++till_now ;
               else if ( ans[j][0] >= people[i][0] ) ++till_now ;
           }
        }
        return ans ;
    }
};
