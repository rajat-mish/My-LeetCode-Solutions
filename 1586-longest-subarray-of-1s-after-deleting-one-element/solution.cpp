class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum==n)return sum-1;
        vector<int>v(n,0);
        v[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]==0)continue;
           else v[i]=nums[i]+v[i+1];
        }
        // for(auto ele:v){
        //     cout<<ele<<" ";
        // }
        // cout<<endl;
        int maxi=v[0];
        int ans=INT_MIN;
        int cnt=0;
        for(int i=0;i<n;i++){
           if(v[i]==0){
            if(i!=n-1){
                
                 
                        ans=max(ans,maxi+v[i+1]);
                    maxi=v[i+1];
                    cnt++;
                   
                
            }
            else{
                if(cnt==0){
                     return (ans==INT_MIN)?0:ans;
                }
            }
           }
        }
        return (ans==INT_MIN)?0:ans;
    }
};
