class Solution {
public:
    vector<int>all ;
    int sum = 0  ;
    Solution( vector< int > & w) {
        sum = w[0] ;
        all.push_back(sum) ;
        for(int i = 1 ; i < w.size() ; i ++ ){
            sum += w[i] ;
            all.push_back(sum) ;
        }
    }
    int pickIndex() {
        int L = 0 , R = all.size() - 1 ;
        int val = rand() % sum ;
        ++val ;
        int ans = 0 ;
        while( L <= R )
        {
            int mid = ( L + R ) / 2 ;
            if( all[mid] >= val )
            {
                ans = mid     ;
                R = mid - 1   ;
            }
            else L = mid + 1  ;

        }
        return ans ;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
