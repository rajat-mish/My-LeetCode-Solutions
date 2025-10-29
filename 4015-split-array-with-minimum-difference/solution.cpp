class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long>pre(n,0);
        vector<bool>inc(n,false),dec(n,false);
        inc[0]=true;
        dec[n-1]=true;
        bool flag=true;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i] && flag==true){
                inc[i]=true;
            }
            else{
                inc[i]=false;
                flag=false;
            }

        }

        flag=true;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1] && flag==true){
                dec[i]=true;

            }
            else{
                dec[i]=false;
                flag=false;
            }
        }

        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        long long ans=LLONG_MAX;
        if(inc[n-1]==true){
            ans=min(ans,abs(pre[n-2]-nums[n-1]));
        }
        for(int i=0;i<n;i++){
         if(inc[i]==true && dec[i]==true){
            ans=min(ans,abs((pre[n-1]-pre[i])-pre[i]));
         }
         else if(i!=n-1 && (inc[i]==true && dec[i+1]==true)){
           
                  ans=min(ans,abs((pre[n-1]-pre[i])-pre[i]));
            
         }
        }
        return ans==LLONG_MAX?-1:ans;
    }
};
