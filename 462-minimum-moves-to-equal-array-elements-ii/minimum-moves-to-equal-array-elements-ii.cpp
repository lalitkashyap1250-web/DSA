class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int middle = nums[n/2];
        for(int i:nums){
            cnt += abs(i-middle);
        }
        return cnt;
    }
};