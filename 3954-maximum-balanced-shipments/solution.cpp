class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int prev=0;
        int res=0;
        for(auto ele:weight){
            if(ele<prev){
                res++;
                prev=0;
            }
            else {
                prev=ele;
            }
        }
        return res;
    }
};
