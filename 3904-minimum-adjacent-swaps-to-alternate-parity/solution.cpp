class Solution {
public:
int fun(vector<int>v){
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans+=abs(v[i]-2*i);

    }
    return ans;
}
    int minSwaps(vector<int>& nums) {
        vector<int>even,odd;
        int ans=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(i);
            }
          else{
            odd.push_back(i);
          }
        }
    int n1=even.size();
    int n2=odd.size();
    if(abs(n1-n2)>1)return -1;
    if(n1>=n2)ans=min(ans,fun(even));
    if(n2>=n1)ans=min(ans,fun(odd));

        return ans;
    }
};
