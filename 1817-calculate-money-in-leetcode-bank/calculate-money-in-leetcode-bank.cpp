class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        int monday=1;
        for(int i=0;i<n;i++){
            total=total+ monday +i%7;
            if((i+1)%7==0){
            monday++;
        }
        }
        return total;
    }
};