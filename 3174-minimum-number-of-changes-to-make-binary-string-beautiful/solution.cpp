class Solution {
public:
    int minChanges(string s) {
        int count=0;
        int i=0,j=i+1;
        int n=s.size();
        while(j<n){
            if(s[i]!=s[j]){
              count++;
            }
            i=j+1;
            j=i+1;
        }
        return count;
    }
};
