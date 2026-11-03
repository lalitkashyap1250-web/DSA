class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int step=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]!=nums[n-1]){
                nums[i] = nums[i] + 1;
                step++;
            }
        }
        return step;
    }
};