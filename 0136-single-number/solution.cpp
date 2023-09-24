class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
        int n=nums.size();
        for(int i=0;i<n;i++){
             bool flag=true;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                else{
                    if(nums[i]==nums[j]){
                        flag=false;
                        break;
                    }
                }
            }if(flag==true)
            return nums[i];
        }
       return 9;
    }
};
