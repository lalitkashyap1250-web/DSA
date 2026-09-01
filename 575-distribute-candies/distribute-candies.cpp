class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int a=-1;
        int eat = n/2;
        int diff=0;
        sort(candyType.begin(),candyType.end());
        for(int i=0;i<n;i++){
            if(a != candyType[i]){
                a=candyType[i];
                diff++;
            }
        }
        return min(diff,eat);
    }
};