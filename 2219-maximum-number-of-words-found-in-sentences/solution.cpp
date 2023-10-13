class Solution {
public:
    int mostWordsFound(vector<string>& sentences) { int ans=0;
    int c=0;
        for(int i=0;i<sentences.size();i++){
            stringstream ss(sentences[i]);
            string s;
            vector<string>v;
            while(ss>>s){
               v.push_back(s);
            }
             c=v.size();
        
             ans=max(c,ans);
            
            
        }
        
        return ans;
    }
};
