class Solution {
public:
    int minInsertions(string s) {
        int cnt = 0;
        int open = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else{
                if(s[i+1] ==')' && s.size()>i){
                    i++;
                }else{
                    cnt++;
                }

                if(open>0) open--;
                else cnt++;
            }
        }
        cnt+=open*2;
        return cnt;
    }
};