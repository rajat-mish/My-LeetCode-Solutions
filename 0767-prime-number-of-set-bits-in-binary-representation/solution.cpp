class Solution {
public:
int helper(string s){ int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            count++;
        }
    }
    return count;
}

bool isp(int n){
    if(n==1)return false;
    for(int i=2;i<(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
    int countPrimeSetBits(int left, int right) { int count=0;
        for(int i=left;i<=right;i++){
            string s="";
            int n=i;
            while(n>0){
                int x=n%2;
               string e=to_string(x);
                s+=e;
                n=n/2;
            }
           int a=helper(s);
           if(isp(a))count++;
        }
        return count;
    }
};
