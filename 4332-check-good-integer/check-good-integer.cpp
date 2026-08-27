class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum =0,sSum=0;
        while(n>0){
            int digit = n%10;
            digitSum += digit;
            sSum += digit*digit;
            n=n/10;
        }
        return sSum - digitSum>=50;
    }
};