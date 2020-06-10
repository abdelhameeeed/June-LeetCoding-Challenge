class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L = 0 , R = nums.size() - 1 , mid = 0 ;
        int ind = -1 , foun = -1 ;
        while(L <= R )
        {
            mid = (L+R)/2;
            if(nums[mid]<=target)
            {
                ind = mid ;
                foun = nums[mid] ;
                L = mid+1;
            }
            else{R=mid-1;}
        }
        return foun==target?ind:ind+1;
    }
};v
