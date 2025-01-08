class Solution {
public:
bool fun(string s1,string s2){
    bool flag=false;
    
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                return false;
            }
            else{
                flag=true;
            }
        }

        if(flag==true){
            reverse(s2.begin(),s2.end());
             reverse(s1.begin(),s1.end());
            
            for(int i=0;i<s1.size();i++){
                if(s1[i]!=s2[i])return false;

            }
            
        }
   
    return true;
}
    int countPrefixSuffixPairs(vector<string>& words) {
       int count=0;
       for(int i=0;i<words.size();i++){
        for(int j=i+1;j<words.size();j++){
            if(fun(words[i],words[j])==true)count++;
        }
       }
       return count;
    }
};
