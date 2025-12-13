class Solution {
public:
vector<bool> isp(int n){
    vector<bool>v(n+1,1);
    v[0]=0,v[1]=0;
    for(int i=2;i*i<=n;i++){
        if(v[i]){
            for(int p=i*i;p<=n;p+=i){
                v[p]=0;
            }
        }
    }
    return v;
}
    int largestPrime(int n) {
        int sum=0;
        vector<bool>v=isp(n);
    int last=-1;
    int ans=INT_MIN;
    for(int i=2;i<=n;i++){
      
         if(v[i]){
            
                if(sum+i>n)break;
                last=i;
                sum+=i;
                if(v[sum]){
                    ans=max(ans,sum);
                }
         
        }
       
    
    }
 
   return (ans==INT_MIN?0:ans);
    }
};
