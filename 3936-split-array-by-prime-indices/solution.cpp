class Solution {
public:
     int N=1e5 +1;
    vector<bool>isp;

    Solution(){
        isp.resize(N,true);
        sieve();
    }
 void sieve(){
     isp[0]=isp[1]=false;
     for(int i=2;i*i<N;i++){
         if(isp[i]){
             for(int j=i*i;j<N;j+=i){
                 isp[j]=false;
             }
         }
     }
     
 }
    long long splitArray(vector<int>& nums) {
        long long sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++){
            if(i>=2 && isp[i]){
                sum1+=nums[i];
            }
            else{
                sum2+=nums[i];
            }
        }
        //cout<<isp(13)<<isp(6)<<isp(2)<<endl;
        return abs(sum1-sum2);
    }
};
