class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0,start=0;
        int n=s.size();
        int j=0;
        unordered_map<int,int>mp;
        while(j<n){
            mp[s[j]]++;

            if(mp.size()==3){
               
                while(mp.size()==3){
                    ans+=n-j; // start se lekar n-1 tak sab kuch kaam me aa jayega
                  mp[s[start]]--;
                  if(mp[s[start]]==0)mp.erase(s[start]);
                 
                  start++;
                }
            }
         
            j++;

        }
        return ans;
    }
};
