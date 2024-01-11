class Solution {
public:
    int maxSatisfied(vector<int>& arr, vector<int>& nums, int minutes) {
        int k=minutes;
        //int maxloss=0;
        int prevloss=0;
        for(int i=0;i<k;i++){
            if(nums[i]==1){
                prevloss+=arr[i];
            }
        }
      int  maxloss=prevloss;
        int i=1;
        int j=k;
        int indx=0;

        while(j<arr.size()){
            int c=prevloss;
             if(nums[i-1]==1){
                c-=arr[i-1];
               
            }
            if(nums[j]==1){
                c+=arr[j];
            }
           if(maxloss<c){
             maxloss=c;
              indx=i;
           }
           prevloss=c;
            i++;j++;
        }
        for(int i=indx;i<indx+k;i++){
            nums[i]=0;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum+=arr[i];
            }
        }
        return sum;
    }
};
