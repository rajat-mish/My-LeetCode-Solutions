class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string tp1="",tp2="";
        for(int i=0;i<s1.size();i++){
            if(i%2==0){
                tp1.push_back(s1[i]);
            }
            else tp2.push_back(s1[i]);
        }

          string tmp1="",tmp2="";
        for(int i=0;i<s2.size();i++){
            if(i%2==0){
                tmp1.push_back(s2[i]);
            }
            else tmp2.push_back(s2[i]);
        }
 sort(tp1.begin(),tp1.end());
 sort(tp2.begin(),tp2.end());
 sort(tmp1.begin(),tmp1.end());
  sort(tmp2.begin(),tmp2.end());
        if(tmp1==tp1 && tmp2==tp2)return true;
        return false;
    }
};
