class Solution {
public:
    string convertToTitle(int n) {
        string ans= "";
        while(n>0){
            n--;
            int cur=n%26;
            ans.push_back(char(cur+ 'A'));
            n=n/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
