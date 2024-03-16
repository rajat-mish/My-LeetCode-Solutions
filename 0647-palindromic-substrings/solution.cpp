class Solution {
public:

bool isp(string r){
    string s=r;
    reverse(r.begin(),r.end());
    if(s==r)return true;
    return false;
}
    int countSubstrings(string s) {int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                string r=s.substr(i,j-i+1);
                if(isp(r)){
                    count++;
                }

            }
            
        }
        return count;
    }
};
