class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp,mpp;
        for(auto ele:t)mpp[ele]++;
if(s==t)return s;
        if(s.size()<t.size())return "";
       int minlen=INT_MAX;
        int i=0,j=0;
        int n=s.size();
        int m=t.size();
       int start=0;
       int formed=0;
        int req=mpp.size();
        while(j<n){
            mp[s[j]]++;

           if(mpp[s[j]]==mp[s[j]])formed++;
           while(formed==req){
            if((j-i+1)<minlen){
                minlen=j-i+1;
                start=i;
            }
            mp[s[i]]--;
            if( mp[s[i]]<mpp[s[i]])formed--;
            i++;
           }
            j++;
        }
     return minlen==INT_MAX?"":s.substr(start,minlen);
        
    }
};
