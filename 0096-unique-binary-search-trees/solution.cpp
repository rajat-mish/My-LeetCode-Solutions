class Solution {
public:
// 1 se lekr n tak har element ko root node bnakr dekhenge 
int fun(int n){
    if(n==0 or n==1 )return 1;
    if(n==2)return 2;
    int sum=0;
    for(int k=1;k<=n;k++){
        sum+=fun(k-1)*fun(n-k);
    }
    return sum;
}
    int numTrees(int n) {
        return fun(n);
    }
};
