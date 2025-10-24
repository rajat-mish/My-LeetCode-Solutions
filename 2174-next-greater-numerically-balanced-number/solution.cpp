class Solution {
public:
bool fun(int n){
    vector<int>arr(10);
    while(n>0){
        arr[n%10]++;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]>0 && arr[i]!=i)return false;
    }
    return true;
}
    int nextBeautifulNumber(int n) {
        if(n>=666666)return 1224444;
        for(int i=n+1;i<=666666;i++){
            if(fun(i))return i;
        }
        return -1;
    }
};
