class Solution {
public:

    int digitRange(int n){
        n = abs(n);
        int maxD=0,minD=9;

        if(n==0) return 0;

        while(n>0){
            int digit = n%10;
            maxD = max(maxD,digit);
            minD = min(minD,digit);
            n = n/10;
        }
        return maxD-minD;
    }
    int maxDigitRange(vector<int>& nums) {
        int maxR = -1;
        int tSum = 0;
        for(int num:nums){
            int currRange = digitRange(num);
            if(currRange>maxR){
                maxR = currRange;
                tSum = num;
            }
            else if(currRange==maxR){
                tSum+=num;
            }
        }
        return tSum;
    }
};