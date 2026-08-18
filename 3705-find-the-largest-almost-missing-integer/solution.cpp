class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
     
      unordered_map<int,int>mp;
      for(auto ele:nums)mp[ele]++;
       int mx=*max_element(nums.begin(),nums.end());
         if(k==1 && mp[mx]==1)return mx;

         if(k==1){
            int m=-1;
            for(auto ele:mp){
                if(ele.second==1)m=max(m,ele.first);
            }
            return m;
         }

         if(k==n)return mx;

      int first=nums[0];
      int last=nums[n-1];

      int maxi=max(first,last);

      if(maxi==first){
        if(mp[first]>1){

            if(mp[last]>1){
                if(last==first && k==n)return first;
                return -1;
            }
            else return last;
        }
        return first;
      }
      else if(maxi==last){
        if(mp[last]>1){
            if(mp[first]>1)return -1;
            else return first;
        }
        return last;
      }

      return -1;


    }
};
