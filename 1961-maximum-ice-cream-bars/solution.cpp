class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cnt=0;
        for(auto ele:costs){
            if(ele<=coins){
                cnt++;
                coins-=ele;
            }
        }
        return cnt;
    }
};
