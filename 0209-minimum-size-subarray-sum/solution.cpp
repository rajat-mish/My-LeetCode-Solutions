class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        // 2,5,6,8,12,15
        int n=nums.size();
        vector<int>v(n,0);
        v[0]=nums[0];
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+nums[i];
        }
        for(auto ele:v)cout<<ele<<" ";
        cout<<endl;
        int i=0,j=0;
        int ans=INT_MAX;
        while(j<n){

           if(i>0){
             while((v[j]-v[i-1])>=tar){
                ans=min(ans,j-i+1);
                i++;
            }
           }
           else{
            int t=v[j];
            while(t>=tar){
                ans=min(ans,j-i+1);
                  t=v[j]-v[i];
                i++;
              
            }
           }
           j++;
        }
        // if(i<j && j<n){
        //       while(i<n && (v[j]-v[i-1])>=tar){
        //         ans=min(ans,j-i+1);
        //         i++;
        //     }
        // }
        return (ans==INT_MAX)?0:ans;
    }
};
