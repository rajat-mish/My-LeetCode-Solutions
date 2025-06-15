class Solution {
public:
    string generateTag(string s) {
        string ans="#";
        int var=0;
      s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
        cout<<s<<endl;
        for(int i=0;i<s.size();i++){
          if(ans.size()<100){
                if(i==0 && s[i]!=' ')ans.push_back(tolower(s[i]));
                else if(s[i]==' ')continue;
            else if(s[i-1]==' ' ) ans.push_back(toupper(s[i]));
            else ans.push_back(tolower(s[i]));
          }
        }
        
        return ans;
    }
};
