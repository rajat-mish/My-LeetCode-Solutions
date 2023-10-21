class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {int count=0;
        string ans;
        vector<string>v;
        stringstream ss(sentence);
        while(ss>>ans){
            v.push_back(ans);
        }
         for(int i=0;i<v.size();i++){
           int x=searchWord.size();
           if(v[i].substr(0,x)==searchWord){
               return i+1;
           }
           
       } 
       return -1;
         
    }
};
