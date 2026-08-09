class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& dis) {
        sort(prices.begin(),prices.end());
        sort(dis.begin(),dis.end());

        double ans=0;
     int n=prices.size();
     int m=dis.size();
        int i=n-1;
        int j=m-1;

        while(i>=0 && j>=0){
            int p=prices[i];
            int d=dis[j];
            ans+=(p*(100-d))/100.0;
         
            i--;
            j--;

           
        }
        while(i>=0){
            ans+=prices[i];
          
            i--;
        }
        return ans;
    }
};
