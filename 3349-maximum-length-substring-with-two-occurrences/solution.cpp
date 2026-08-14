class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i=0,j=0;
        unordered_map<char,int>mp;
        int mf=0;
        int n=s.size();
        int ans=0;
        char ch;
        while(j<n){
         mp[s[j]]++;
         mf=max(mf,mp[s[j]]);
         if(mf==mp[s[j]])ch=s[j];
         if(mf<=2){
            ans=max(ans,j-i+1);
         }
         else{
            while(mp[ch]>=3){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                
         
                i++;
            }
            ans=max(ans,j-i+1);
         }
         j++;
        }
        return ans;
    }
};
