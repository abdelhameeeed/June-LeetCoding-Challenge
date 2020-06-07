class Solution {
public:
    int dp[(int)501][(int)5002] ;
    int change(int amount, vector<int>& coins) {
        memset(dp , -1 , sizeof(dp)) ;
        return solve( 0 , amount , coins ) ;

    }
    int solve(int ind , int cur , vector<int>& coins )
    {
        if( cur < 0 ) return 0 ;
        else if( cur == 0  ) return 1 ;
        else if( ind == coins.size()) return 0 ;
        int &ans = dp[ind][cur] ;
        if(~ans) return ans ;
        ans = solve(ind + 1 , cur , coins ) ;
        int sum = 0 ;
        while(sum <= cur )
        {
            sum += coins[ind] ;
            ans += solve(ind+1 , cur-sum , coins );
        }
        return ans ;
    }
};
