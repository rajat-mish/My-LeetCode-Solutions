class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            //ans.push_back(s[i]);
            if(i%2!=0){
               int v=(int)s[i] -48;
               int c=(int)s[i-1];
               int u=c+v;

                ans.push_back((char)u);
            }
            else{ans.push_back(s[i]);}
        }
        return ans;
    }
};
