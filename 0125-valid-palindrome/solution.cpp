class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        int n=s.length();
        for(int i=0;i<n;i++){ char ch=s[i];
            if((97<=ch && ch<=122) || (48<=ch && ch<=57)){
                ans.push_back(ch);
            }else if(65<=ch && ch<=90){
                ans.push_back(ch +32);
            }else continue;
        }
        int i=0,j=ans.length()-1;
        bool flag=false;
        while(i<j){
            if(ans[i]!=ans[j]){
                flag=true;
                return false;
                break;

            }
            i++;
            j--;
            
        }
    
        return true;
    }
};
