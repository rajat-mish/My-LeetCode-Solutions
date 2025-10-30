class Solution {
public:
    int minNumberOperations(vector<int>& tar) {
        int ans = tar[0];
        for(int i = 1; i < tar.size(); i++){
            if(tar[i] > tar[i-1]){
                ans += tar[i] - tar[i-1];
            }
        }
        return ans;
    }
};

