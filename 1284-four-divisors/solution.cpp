class Solution {
public:
int fun(int n){
    int ans=0;
    for(int i=1;i<=n/2;i++){
      if(n%i==0)ans+=i;
    }
    return ans+n;
}
    int sumFourDivisors(vector<int>& nums) {
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        int n=nums[i];
        int c=1;
        for(int j=1;j<=n/2;j++){
            if(n%j==0)c++;
            if(c>4)break;
        }
        if(c==4)cnt+=fun(n);

    }
    return cnt;
    }
};
