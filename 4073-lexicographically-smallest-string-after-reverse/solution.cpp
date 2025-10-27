class Solution {
public:
    string lexSmallest(string s) {
       vector<string>v;
       for(int i=1;i<=s.size();i++){
        string temp=s;
        reverse(temp.begin(),temp.begin()+i);
        v.push_back(temp);
        temp=s;
        reverse(temp.begin()+i,temp.end());
        v.push_back(temp);
       }
       sort(v.begin(),v.end());
       return v[0];
    }
};
