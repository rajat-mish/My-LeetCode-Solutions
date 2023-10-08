class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int n=word1.size();
       int m=word2.size();
         string ans="";
    //    int i=0;
    //    int j=0;
    //    while(i>n && j>m)
    
        
        int j=0,i=0;
        while(j<m && i<n){
            ans=ans+word1[i];
            ans=ans+word2[j];
            i++;j++;
        }
        while(i<n){
            ans=ans+word1[i];
            i++;
        }while(j<m){
            ans=ans+word2[j];
            j++;
        }







    
    return ans;
    }
};
