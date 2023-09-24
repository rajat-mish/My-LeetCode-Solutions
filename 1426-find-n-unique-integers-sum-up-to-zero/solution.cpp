class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n,0);
        int a=1;
        if(n%2!=0){
            n--;
        }
        for(int i=0;i<n;i+=2){
            ans[i]=a;
            ans[i+1]=-a;
            a++;
        }
        return ans;
    }
};
