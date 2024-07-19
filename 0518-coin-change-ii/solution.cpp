class Solution {
public:
vector<int>v;
  vector<vector<int>> dp;
int fun(int x,int startindex){
    if(x==0)return 1;
    if(x<0)return 0;
    if(dp[x][startindex]!=-1)return dp[x][startindex];
     int count=0;
   
    for(int i=startindex;i<v.size();i++){
        
       count+=fun(x-v[i],i);
      
    }
    dp[x][startindex]=count;
    
    return count;

}

    int change(int amount, vector<int>& coins) {
        dp.clear();
         dp.resize(amount + 1, vector<int>(coins.size(), -1)); 
        v=coins;
        return fun(amount,0);
    }
};


