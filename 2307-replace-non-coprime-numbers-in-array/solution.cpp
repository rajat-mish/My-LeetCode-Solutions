class Solution {
public:
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            st.push(nums[i]);
            while(!st.empty()){
                int a=st.top();
                st.pop();
              if(!st.empty()) {
                 int b=st.top();
                st.pop();
                if(gcd(b,a)>1){
                    
                   
                    st.push(lcm(b,a));
                }
                else{
                      st.push(b);
                    st.push(a);
                  
                    break;
                }
              }
              else{
                st.push(a);
                break;

              }
              
             

            }
          
        }

        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
