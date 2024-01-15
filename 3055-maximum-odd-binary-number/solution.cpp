class Solution {
public:
    string maximumOddBinaryNumber(string s) {
     sort(s.begin(),s.end());
     int count=0;
      for(int i=0;i<s.size();i++){
         
         if(s[i]=='1' ){
            count++;

         }
     }
     for(int i=0;i<s.size();i++){
       if(count==1){
           if(s[i]=='1'){
             s[i]='0';
             s[0]='1';
             break;

         } 
       }
         if(s[i]=='1' && i!=s.size()-1){
             s[i]='0';
             s[0]='1';
             break;

         }
     }
     reverse(s.begin(),s.end());
     return s;
    }
};
