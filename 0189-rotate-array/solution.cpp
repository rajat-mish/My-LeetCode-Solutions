class Solution {
public:
void reversepart(int i,int j,vector<int> &c){
    while(i<=j){
        // int t=c[i];
        // c[i]=c[j];
        // c[j]=t;
          swap(c[i],c[j]);


        i++;
        j--;
    }return;
}
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        if(k>n){
            k=k%n;
        }
        reversepart(0,n-k-1,nums);
  reversepart(n-k,n-1,nums);
  reversepart(0,n-1,nums);
    }
};
