class Solution {
public:
    string processStr(string s) {
        string res="";
        for(auto ele:s){
            if(ele>=97 && ele<=122){
                res+=ele;
            }
            else if(ele=='*'){
                if(res.size()>0)res.pop_back();
            }
            else if(ele=='#'){
                res+=res;
            }
            else if(ele=='%')reverse(res.begin(),res.end());
        }
        return res;
    }
};
