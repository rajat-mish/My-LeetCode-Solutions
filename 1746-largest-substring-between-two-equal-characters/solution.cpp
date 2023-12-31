class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    v.push_back(j-i-1);
                }
                else{
                    v.push_back(-1);
                }
            }
        }
        int max=v[0];
        for(int i=0;i<v.size();i++){
            if(v[i]>max){
                max=v[i];
            }
        }
        return max;
    }
};
