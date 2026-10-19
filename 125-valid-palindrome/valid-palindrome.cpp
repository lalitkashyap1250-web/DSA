class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
            }
            else if(!isalnum(s[j])){
                j--;
            }
            else if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
        // stack<int>st;
        // for(int i=0;i<s.size();i++){
        //     if(s[i] != " " && s[i] !="," && s[i] != ":"){
        //         st.push(s[i]);
        //     }
        // }
        // int i=0;
        // while(!st.empty()){
        //     if(st.top() != s[i]){
        //         return false;
        //     }
        //     s.pop();
        //     i++;
        // }
        // return true;
    }
};