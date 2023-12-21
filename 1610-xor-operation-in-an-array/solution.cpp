class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v;
        for(int i=0;i<n;i++){
            int a=start+2*i;
            v.push_back(a);
        }
        if(v.size()==1){
            return v[0];
        }
        int res=(v[0] ^ v[1]);
        for(int i=2;i<v.size();i++){
            res ^= v[i];
        }
        return res;
    }
};
