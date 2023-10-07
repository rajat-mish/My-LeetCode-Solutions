class Solution {
public:
    string finalString(string s) {
        string ans="";
        // for(int i=0;i<s.size();i++){
            int i=0;
          while(i<s.size()){
            if(s[i]=='i'){
                reverse(ans.begin(),ans.end());
                //i++;
            }
            if(s[i]!='i'){
              ans.push_back(s[i]);}
         i++;   }
     return ans;   }
        
    };

