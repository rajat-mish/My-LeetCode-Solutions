class Solution {
public:
vector<int>dp1;
vector<int>dp2;
int fun1(vector<int>&v,int i){
    if(i==v.size()-2)return v[i];
    if(i==v.size()-3)return max(v[i],v[i+1]);
    if(dp1[i]!=-1)return dp1[i];
    return dp1[i]=max((v[i]+fun1(v,i+2)),0+fun1(v,i+1));
}

int fun2(vector<int>&v,int i){
   if(i==v.size()-1)return v[i];
    if(i==v.size()-2)return max(v[i],v[i+1]);
    if(dp2[i]!=-1)return dp2[i];
    return dp2[i]=max((v[i]+fun2(v,i+2)),0+fun2(v,i+1));
}


    int rob(vector<int>& nums) {
        dp1.clear();
        dp1.resize(105,-1);
         dp2.clear();
        dp2.resize(105,-1);
        if(nums.size()==1){
           return nums[0];
        }
       else return max(fun1(nums,0),fun2(nums,1));
    }
};
