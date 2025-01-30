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
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int first=0,sec=0;
        while(first<haystack.size() && sec<needle.size()){
            if(haystack[first]==needle[sec]){
                first++;sec++;
            }
            else{
               if(sec==0){
                first++;
               }
               else  sec=lps[sec-1];
            }
        }
        if(sec==needle.size())return first-sec;
        return -1;
    }
};
