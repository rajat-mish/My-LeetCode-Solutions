class Solution {
public:
void lpsfind(vector<int>&lps,string s){
    int pre=0,suf=1;
    while(suf<s.size()){
        if(s[pre]==s[suf]){
            lps[suf]=pre+1;
            pre++;suf++;
        }
        else{
            if(pre==0){
                lps[suf]=0;
                suf++;
            }
            else{
                pre=lps[pre-1];

            }
        }
    }
}
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        s+=s;
         vector<int>lps(goal.size(),0);
        lpsfind(lps,goal);
        int first=0,sec=0;
        while(first<s.size() && sec<goal.size()){
            if(s[first]==goal[sec]){
                first++;sec++;
            }
            else{
               if(sec==0){
                first++;
               }
               else  sec=lps[sec-1];
            }
        }
        if(sec==goal.size())return true;
        return false;
    }
};
