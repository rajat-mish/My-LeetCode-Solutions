class Solution {
public:
int fun(vector<int>&nums,int i,int dir,int nz){
    vector<int>temp=nums;
    int n=temp.size();
    int cur=i;
    while(nz>0 && cur>=0 && cur<n){
        if(temp[cur]>0){
            temp[cur]--;
            dir*=-1;
            if(temp[cur]==0){
                nz--;
            }
        }
        cur+=dir;
    }
    return nz==0;
}
    int countValidSelections(vector<int>& nums) {
        int ans=0;
        int nz=0;
        for(auto ele:nums)if(ele>0)nz++;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(fun(nums,i,-1,nz))ans++;
                if(fun(nums,i,1,nz))ans++;
            }
           
        }
        return ans;
    }
};
