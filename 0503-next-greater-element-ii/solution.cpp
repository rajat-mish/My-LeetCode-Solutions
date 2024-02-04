class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      vector<int>v(2*nums.size()-1,0);
        for(int i=0;i<nums.size();i++){
            v[i]=nums[i];
        }
        for(int i=0;i<v.size()-1;i++){
            v.pop_back();
        }
         for(int i=0;i<nums.size()-1;i++){
            v.push_back(nums[i]);
        }

       

        int n=v.size();
        vector<int>ans(n,0);
       
        stack<int>st;
        ans[n-1]=-1;
        st.push(v[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()<=v[i]){
                st.pop();
            }
            if(st.size()==0)ans[i]=-1;
            else{
                ans[i]=st.top();
               
            }
             st.push(v[i]);
        }
         for(int i=0;i<ans.size()-1;i++){
            ans.pop_back();
        }
  
    return ans;

    }
};
