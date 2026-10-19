class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int i=0,j=n-1;
        while(i<j){
            int vol = 0; 
            if(height[i]<height[j]){
                vol = height[i] * (j-i);
                i++;
            }
            else{
                vol = height[j] * (j-i);
                j--;
            }
            area = max(area,vol);
            // int h = min(height[i],height[j]);
            // int m = j-i;

            // area = max(area,h*m);
            // if(height[i]<height[j]) i++;
            // else j--;
        }
        return area;
        // for(i=0;i<n;i++){
        //     for(j=n-1;j>i;j--){
        //         int th = min(height[i],height[j]) * (j-i);
        //         area = max(area,th);
        //     }
        // }
    }
};