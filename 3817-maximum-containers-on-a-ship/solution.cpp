class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int rem=maxWeight/w;
        if(rem<n*n)return rem;
        return n*n;
    }
};
