class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low=0,mid;
        int high = n-1;

        int maxi = INT_MIN;
        while(low<high){
            mid = low+(high-low)/2;
            if(nums[mid]>nums[mid+1]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return high;
        
    }
};