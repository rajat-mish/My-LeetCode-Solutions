class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1);
      v.push_back(0);
for(int i=1;i<=n;i++){
    int ele=i/2;
    if(i%2!=0){
        
        v[i]=v[ele]+1;
    }
    else{
        v[i]=v[ele];
    }
    // int ele=i;
    // int count=0;
    //         while(ele){
    //       int  bit=ele&1;
    //         if(bit==1)count++;
    //         ele=ele>>1;
    //     }
    //     v.push_back(count);
}
    v.pop_back();
        return v;
    }
};
