class Solution {
public:
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
    bool canSortArray(vector<int>& nums) {
  

     int s=countSetBits(nums[0]);
     int maxi=nums[0];
     int lmax=0;
   for(int i=1;i<nums.size();i++){
        if(s!=countSetBits(nums[i]))lmax=maxi;
            
            if(nums[i]>maxi){
             maxi=nums[i];
             s=countSetBits(maxi);
            }
            if(nums[i]<lmax)return false;
        }

   
   return true;
     

    }
};


