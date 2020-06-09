/*
Binary Search Solution
class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<vector<int>>all_( 30 ) ;
        for( int i = 0 ; i < t.size() ; i ++ ) all_[t[i]-'a'].push_back(i);
        int so_far = -1 ;
        for( auto j : s )
        {
            int L = 0 ,  R = all_[j-'a'].size() - 1 , mid = 0 ;
            int ans = -1 ;
            while( L <= R )
            {
                mid = ( L + R ) / 2 ;
                if( all_[j-'a'][mid] <= so_far )
                {
                    L = mid + 1 ;
                }
                else
                {
                    ans = all_[j-'a'][mid] ;
                    R = mid - 1 ;
                }
            }
            if( ~ans  )
            {
                so_far = ans ;
                //cout<<so_far<<endl;
            }
            else return 0 ;
        }
        return 1 ;
    }
};
*/




/*

Two pointers

class Solution {
public:
    bool isSubsequence(string s, string t) {
      int p1 = 0 ;
      for(int i = 0 ; i < t.size() ; i ++ )
      {
          if(t[i] == s[p1] ) ++p1 ;
      }
        return p1 == s.size() ;
    }
};
*/
