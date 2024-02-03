class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        stack<int>st;
        st.push(nums[nums.size()-1]);
        ans[nums.size()-1]=0;
        for(int i=nums.size()-2;i>=0;i--){
            int count=0;
        while(st.size()>0 && nums[i]>st.top()){
          st.pop();
          count++;
        }
        if(st.size()!=0)count++;
        ans[i]=count;
        st.push(nums[i]);
        }
        return ans;
    }
};
