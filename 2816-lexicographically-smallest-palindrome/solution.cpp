class Solution {
public:
    string makeSmallestPalindrome(string s) {
        string ans=s;
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(ans[i]==ans[j]){
                i++;
                j--;
            }else if(ans[i]!=ans[j]){
                if(ans[i]>ans[j]){
                ans[i]=ans[j];
                i++;
                j--;
            }else{
                ans[j]=ans[i];
                i++;
                j--;
            }
            }
        }
        return ans;
    }
};
