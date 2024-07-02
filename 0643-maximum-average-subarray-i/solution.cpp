class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=1, j=k+i-1;;
        int n=nums.size();
        double sum=0;
        double ans=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;
        ans=avg;
        while(j<n){
        //  for(int l=i;l<=j;l++){
        //     sum+=nums[i];
        //  }
      
        sum=sum-nums[i-1]+nums[j];
       double av=sum/k;
         
         ans=max(av,ans);
         i++,j++;
          
        }
        return ans;
    }
};
