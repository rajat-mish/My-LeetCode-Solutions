class Solution {
public:
    int encript(int n){
        if(n<10)return n;
        int count=0;
       // string s=to_string(n);
        vector<int>v;
        while(n>0){
            int a=n%10;
            count++;
           v.push_back(a);
            n=n/10;
            
        }
        sort(v.begin(),v.end());
        int p=v[v.size()-1];
        string g=to_string(p);
        string s="";
        for(int i=0;i<count;i++){
            s+=g;
        }
        
        int f=stoi(s);
        return f;
        
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=encript(nums[i]);
        }
        return sum;
    }
};
