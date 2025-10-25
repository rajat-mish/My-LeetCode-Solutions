class Solution {
public:
    int characterReplacement(string s, int tot) {
        int k=tot;
        int n=s.size();
        if(n==1)return 1;
        int i=0,j=0;
        int ans=INT_MIN;
         
         unordered_map<int,int>mp;
        while(j<n){
        mp[s[j]]++;
        int maxf=max(maxf,mp[s[j]]);
        while((j-i+1)-maxf>k){
            mp[s[i]]--;
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
        }
      
        return ans;
    }
};
