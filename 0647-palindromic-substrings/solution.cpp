class Solution {
public:
bool isp(const string &s){
    string str=s;
    reverse(str.begin(),str.end());
    if(s==str)return true;
    return false;
}
int solve(const string &s,int i,int j){
    int count=0;
    if(i>j)return 0;
   for(int start=i;start<=j;start++){
    for(int st=start;st<=j;st++){
        if(isp(s.substr(start,st - start +1))){
            count++;
        }
    }
   }
   return count;
}
    int countSubstrings(string s) {
        return solve(s,0,s.size()-1);
    }
};




