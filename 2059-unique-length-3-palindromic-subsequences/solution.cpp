class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        vector<int>f(26,-1);
        vector<int>l(26,-1);

        for(int i=0;i<n;i++){
            int pos=s[i]-'a';
            if(f[pos]==-1)f[pos]=i;
            l[pos]=i;
        }
        int ans=0;
        for(int i=0;i<26;i++){
          
            if(f[i]==-1)continue;
            unordered_set<int>st;
            for(int j=f[i]+1;j<l[i];j++){
                st.insert(s[j]);
            }
            ans+=st.size();
        }
        return ans;

    }
};
