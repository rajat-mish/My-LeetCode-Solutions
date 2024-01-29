class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      vector<int>v=nums;
      sort(v.begin(),v.end());
      int count=0;
      int count2=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]==v[i]){
              count++;
          }
         
           
            


            
        }
        if(count==nums.size())return true;
       else{  reverse(v.begin(),v.end());
           for(int i=0;i<nums.size();i++){
            
            if(nums[i]==v[i]){
                count2++;
        }
      }}
      if( count2==nums.size()){
          return true;
      }
      return false;

    }
};
