class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m)return false;
        int i=0,j=n-1;
   unordered_map<char,int>mp,mp1;
   for(int k=0;k<n;k++){
    mp1[s1[k]]++;
   }
   for(int k=i;k<=j;k++)mp[s2[k]]++;

        while(j<m){
          if(mp==mp1)return true;
          else{
            mp[s2[i]]--;
            if(mp[s2[i]]==0)mp.erase(s2[i]);
            i++;
            j++;
            mp[s2[j]]++;
          }
        }
        if(mp==mp1)return true;
        return false;
    }
};
