class Solution {
public:
    string reverseVowels(string s) {
        string ans=s;
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if((ans[i]=='a'||ans[i]=='e'||ans[i]=='i'||ans[i]=='o'||ans[i]=='u'||ans[i]=='A'||ans[i]=='E'||ans[i]=='I'||ans[i]=='O'||ans[i]=='U')&&(ans[j]=='a'||ans[j]=='e'||ans[j]=='i'||ans[j]=='o'||ans[j]=='u'||ans[j]=='A'||ans[j]=='E'||ans[j]=='I'||ans[j]=='O'||ans[j]=='U')){
                int t=ans[i];
                ans[i]=ans[j];
                ans[j]=t;
 i++;
                j--;
               
            }
            else if((ans[i]=='a'||ans[i]=='e'||ans[i]=='i'||ans[i]=='o'||ans[i]=='u'||ans[i]=='A'||ans[i]=='E'||ans[i]=='I'||ans[i]=='O'||ans[i]=='U')){
   j--;
            }
            else if((ans[j]=='a'||ans[j]=='e'||ans[j]=='i'||ans[j]=='o'||ans[j]=='u'||ans[j]=='A'||ans[j]=='E'||ans[j]=='I'||ans[j]=='O'||ans[j]=='U')){
                i++;
            }
            else{
                i++;
                j--;
            }

            
        }
        return ans;
    }
};
