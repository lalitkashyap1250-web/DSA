class Solution {
public:
    int countLargestGroup(int n) {
       int arr[37]={0};
       for(int i=1;i<=n;i++){
            int x = i;
            int sum=0;
            while(x>0){
                int digit = x%10;
                sum = sum+digit;
                x =x/10;
            }
            arr[sum]++;
       } 
       int mx = 0;
       for(int i=1;i<=36;i++){
           mx = max(mx,arr[i]);
       }

       int a = 0;
       for(int i=1;i<=36;i++){
        if(arr[i]==mx){
            a++;
        }
       }
       return a;

    }
};