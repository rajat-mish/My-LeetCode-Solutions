class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans=s;
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<n && j>=0){
            if(((ans[i]>=65 && ans[i]<=90)||(ans[i]>=97 && ans[i]<=122))&&((ans[j]>=65 && ans[j]<=90)||(ans[j]>=97 && ans[j]<=122))){
                if(i<j){
                    int tmp=ans[i];
                ans[i]=ans[j];
                ans[j]=tmp;
                }
                i++;
                j--;
            }
           else if((ans[i]>=65 && ans[i]<=90)||(ans[i]>=97 && ans[i]<=122)){
                j--;
            }else if((ans[j]>=65 && ans[j]<=90)||(ans[j]>=97 && ans[j]<=122)){
                i++;
            }
            else{
                i++;j--;
            }
    
        }return ans;
    }
};
