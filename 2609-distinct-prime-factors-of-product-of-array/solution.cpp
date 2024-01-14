class Solution {
public:
bool isp(int n){
    if(n==1)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
    int distinctPrimeFactors(vector<int>& nums) { vector<int>v;
        int mx=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
        }
        for(int i=1;i<=mx;i++){
          if(isp(i))v.push_back(i);
        }

         int m=v[0];
        for(int i=0;i<v.size();i++){
            if(v[i]>m){
                m=v[i];
            }
        }
        vector<int>a(m+1,0);
        
        for(int i=0;i<v.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]%v[i]==0){
                    a[v[i]]++;
                }
            }
        }
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>0)count++;
        }
        return count;
    }
};
