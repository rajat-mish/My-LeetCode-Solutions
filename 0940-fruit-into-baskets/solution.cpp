class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       unordered_set<int>st;
       int n=fruits.size();
       int i=0,j=0;
       int ans=INT_MIN;
       while(j<n){
        if(st.size()<2 ){
            st.insert(fruits[j]);
            j++;
        }
        else if(st.find(fruits[j])!=st.end()){
            st.insert(fruits[j]);
            j++;
        }
        else{
            ans=max(ans,j-i);
          int ele=fruits[j-1];
          int k=j-2;
          while(k>=0){
            if(fruits[k]==ele)k--;
            else{
                st.erase(fruits[k]);
                break;
            }
          }
          i=k+1;
            st.insert(fruits[j]);
            j++;
        }
       }
       ans=max(ans,j-i);
       return ans;
    }
};
