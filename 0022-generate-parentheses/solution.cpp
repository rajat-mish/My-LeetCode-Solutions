class Solution {
public:
void helper(string s,vector<string>&v,int open,int close,int n){
    if(close==n){
        v.push_back(s);
        return;
    }
    if(open>close){
        helper(s+')',v,open,close+1,n);
    }
   if(open<n){
        helper(s+'(',v,open+1,close,n);
   }
}
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        helper("",v,0,0,n);
        return v;
    }
};
