class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=i+2;
        int count=0;
        while(j<n){
          while(i<n && nums[i]==1){
            i++;
           if(j<n) j=i+2;
          }

        
       if(j<n){
                  for(int k=i;k<=j;k++){
                    if(nums[k]==0)nums[k]=1;
                    else nums[k]=0;
                }
                count++;
            
            i++;
            j=i+2;
       }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum==n)return count;
        return -1;
    }
};
