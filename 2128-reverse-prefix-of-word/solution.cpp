class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans=word;
        for(int i=0;i<word.size();i++){
            if(ans[i]==ch){
                int j=0;
                int k=i;
                while(j<k){
                    int t=ans[j];
                    ans[j]=ans[k];
                    ans[k]=t;

                    j++;
                    k--;
                }
                break;
            }
        }
        return ans;
    }
};
