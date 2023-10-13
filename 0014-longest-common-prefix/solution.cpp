class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a=strs[0];
  string b=strs[strs.size()-1];
  int i=0;
  int n=min(a.size(),b.size());
  string ans="";
  while(i<n){
    if(a[i]==b[i]){
         ans.push_back(a[i]);
    }
    else{
        break;
    }
    i++;
  }
return ans;

    }
};
