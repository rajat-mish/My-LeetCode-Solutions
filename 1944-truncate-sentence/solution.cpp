class Solution {
public:
    string truncateSentence(string s, int k) {
    int t=0;
    string ans;
    int count=1;

for(int i=0;i<s.size();i++){
    if(s[i]%32==0){
        count++;
    }
}
int c=0;
for(int i=s.size()-1;i>=0;i--){
    if(s[i]%32==0){
       c++;
        
    }
    if(c!=0 &&(c==count-k) ){
        t=i;
        break;
    }
    else t=s.size();
}
for(int i=s.size()-1;i>=t;i--){
   s.pop_back();
}
return s;
    }
};
