class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>output;
        string arr[m][n];
        for(int i=0;i<m;i++){
            string s;
            for(int j=0;j<n;j++){
                if(i==0){
                    arr[i][j] = ".";
                }
                else if(j==n-1){
                    arr[i][j] = ".";
                }
                else{
                    arr[i][j] = "#";
                }
                s = s+arr[i][j];
            }
            output.push_back(s);
        }
        return output;
    }
};