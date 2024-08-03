class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        int maxpro=0;
        int profit=0;
        for(int price:prices){
            minp=min(minp,price);
            profit=price-minp;
            maxpro=max(maxpro,profit);
        }
        return maxpro;
    }
};
