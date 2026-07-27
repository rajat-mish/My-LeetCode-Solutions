class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int smaxi=INT_MIN;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi && flag==true){
                smaxi=maxi;
                break;
            }
            else if(nums[i]==maxi && flag==false)flag=true;
            else{
                smaxi=max(smaxi,nums[i]);
            }
            
        }
        //cout<<maxi<<" "<<smaxi<<endl;
        return (maxi-1)*(smaxi-1);
    }
};
