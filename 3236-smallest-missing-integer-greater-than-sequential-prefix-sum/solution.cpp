class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
       // sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int maxi=INT_MIN;
        int ans=0;
        int mv=*max_element(nums.begin(),nums.end());
        for(auto ele:nums)mp[ele]++;
         
           int sum=nums[0];
        for(int i=1;i<n;i++){
          if(nums[i]==nums[i-1]+1){
        
            sum+=nums[i];
          }
          else{
            // if(cnt>maxi){
            //    maxi=cnt;
               cout<<"sum "<<sum<<endl;
               if(mp.find(sum)==mp.end())return sum;
               else{
                 for(int ele=sum;ele<=mv+sum;ele++){
                    if(mp.find(ele)==mp.end()){
                        ans=ele;
                        return ans;
                    }
                 }
               }

            }
            // sum=nums[i];
            // cnt=1;
          
        }


               if(mp.find(sum)==mp.end())return sum;
               else{
                 for(int ele=sum;ele<=mv+sum;ele++){
                    if(mp.find(ele)==mp.end()){
                        ans=ele;
                        break;
                    }
                 }
               

            }

        return ans;
    }
};
