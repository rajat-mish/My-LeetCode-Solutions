class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        if(n==0)return true;
          if(nums.size()==1){
            if(n>1)return false;
            
            if(nums[0]==0){
                return true;
            }
            return false;
          }

          if(nums.size()==2){
            if(n>=2)return false;
            if(n==1 ){
                if(nums[0]==0 && nums[1]==0)return true;
            }
            return false;
            
          }
          if(nums[0]==0 && nums[1]==0){
            nums[0]=1;
            n--;
          }
        for(int i=1;i<nums.size()-1;i++){
            if(n==0)return true;
                  if(n!=0 && nums[i]==0 && nums[i-1]!=1 && nums[i+1]!=1){
                    nums[i]=1;
                    n--;
                  }
        }
        if(n!=0){
            if(nums[nums.size()-1]==0 && nums[nums.size()-2]==0){
                n--;
            }
        }
        if(n==0)return true;
        return false;
    }
};
