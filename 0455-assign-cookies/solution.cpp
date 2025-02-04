class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i1=0,j1=g.size()-1,i2=0,j2=s.size()-1;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        if(s.size()==0 || s[s.size()-1]<g[0])return 0;
        int count=0;
        while(i1<=j1 && i2<=j2){
            if(g[i1]<=s[i2]){
                count++;
                i1++;
                i2++;
            }
            else{
                i2++;
            }
        }
        return count;
    }
};
