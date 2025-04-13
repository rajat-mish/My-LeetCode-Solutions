class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        string ans="";
        if(n%2==0){
          ans=s.substr(0,n/2);
          sort(ans.begin(),ans.end());
          for(int i=ans.size()-1;i>=0;i--){
            ans.push_back(ans[i]);
          }
        }
        else{
            ans=s.substr(0,n/2);
            sort(ans.begin(),ans.end());
            ans.push_back(s[n/2]);
            for(int i=ans.size()-2;i>=0;i--){
                ans.push_back(ans[i]);
            }
        }
        return ans;
    }
};
