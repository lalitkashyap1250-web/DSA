class Solution {
public:

    long long calculate_hrs(vector<int>&v,int k){
        long long t = 0;
        for(int i=0;i<v.size();i++){
            t += ceil((double)v[i] / (double)k);
            //t+= (v[i] + k-1)/k;
        }
        return t;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long totalH = calculate_hrs(piles,mid);
            
            if(totalH<=h){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};