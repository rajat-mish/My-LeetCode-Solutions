class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)return n;
          int msb=0;
        for(int i=0;i<=n;i++){
            if(pow(2,i)>n){
                msb=i-1;
                break;
            }
            else if(pow(2,i)==n){
                msb=i;
                break;
            }

        }
        int mx=pow(2,msb+1)-1;
        return mx+1;
    }
};
