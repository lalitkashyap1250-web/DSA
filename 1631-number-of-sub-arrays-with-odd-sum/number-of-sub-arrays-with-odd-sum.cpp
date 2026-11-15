class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        
        long long odd = 0;
        long long even = 1;
        long long ans = 0;

        int prefix = 0;
        int mod = 1e9 + 7;
        for(int x : arr) {
            prefix += x;
            if(prefix % 2 == 0) {
                ans = (ans + odd) % mod;
                even++;
            }
            else {
                ans = (ans + even) % mod;
                odd++;
            }
        }

        return ans;
    }
};