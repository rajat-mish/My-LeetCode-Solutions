class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>mp;
        vector<string>ans;
            for (char c = 'a'; c <= 'z'; ++c) {
        mp[c] = INT_MAX;
    }
            
        for(int i=0;i<words.size();i++){
            string str=words[i];
            unordered_map<char,int>mp1;
           for(int j=0;j<str.size();j++){
              mp1[str[j]]++;
           }
           for(char ch='a';ch<='z';ch++){
          
               mp[ch]=min(mp[ch],mp1[ch]);
            
           }

        }
       
            for(char ch='a';ch<='z';ch++){
                while(mp[ch]>0){
                    
                ans.push_back(string(1,ch));
                mp[ch]--;
                }
            }
            
        
        return ans;
    }
};
