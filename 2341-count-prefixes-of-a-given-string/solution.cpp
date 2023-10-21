class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {int  count=0;
         for(int i=0;i<words.size();i++){
           int x=s.size();
         if(words[i].size()<x){
            if(words[i]== s.substr(0,words[i].size())){
                count++;
            }
         }
         //else if(words[i].size()>x){
              //if((words[i].substr(0,x))==s){
               //count++;}
           
        // }
         else{
             if(words[i]==s){
                 count++;
             }
         }
           
       } 
       return count;
    }
};
