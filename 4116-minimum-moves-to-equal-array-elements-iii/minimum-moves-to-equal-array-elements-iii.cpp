class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int step=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<maxi){
                step = step+(maxi-nums[i]);
            }
        }
        return step;
    }
};