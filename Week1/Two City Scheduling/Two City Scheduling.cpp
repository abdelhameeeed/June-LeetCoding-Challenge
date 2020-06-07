class Solution {
public:
    static bool comp(vector<int>&a , vector<int>&b)
    {
        return a[1] - a[0] >  b[1] - b[0] ;
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort( costs.begin() , costs.end() , comp ) ;
        int n = costs.size() ;
        int all_ = 0 ;
        for(int i = 0 ; i < n / 2 ; i ++ )
        {
            all_ += costs[i][0] ;
        }
        for(int i = n / 2 ; i < n ; i ++ )
        {
            all_ += costs[i][1] ;
        }
        return all_ ;
    }
};
