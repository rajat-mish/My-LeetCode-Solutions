class Solution {
public:
    int prefixCount(vector<string>& words, string pref) { int count=0;
       for(int i=0;i<words.size();i++){
           int x=pref.size();
           if(words[i].substr(0,x)==pref){
               count++;
           }
           
       } 
       return count;
    }
};
