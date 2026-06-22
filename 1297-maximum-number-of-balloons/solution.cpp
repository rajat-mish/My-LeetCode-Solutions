class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(auto ele:text){
            mp[ele]++;
        }
      if(mp.find('l')!=mp.end()){
        int f=mp['l'];
        if(f%2==0){
            mp['l']=f/2;
        }
        else{
            f--;
            mp['l']=f/2;
        }
      }

         if(mp.find('o')!=mp.end()){
        int f=mp['o'];
        if(f%2==0){
            mp['o']=f/2;
        }
        else{
            f--;
            mp['o']=f/2;
        }
      }
        string s="balon";
        int ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end())return 0;
            else{
                ans=min(ans,mp[s[i]]);
              
               // if(mp[s[i]]==0)mp.erase(s[i]);
            }
        }
        return ans;
    }
};
