class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
         int first=0,sec=0;
         int fsum=0,ssum=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?')first++;
            else{
                fsum+=(num[i]-'0');
            }
        }

        for(int i=n/2;i<n;i++){
            if(num[i]=='?')sec++;
            else{
                ssum+=(num[i]-'0');
            }
        }

     
        if((first+sec)%2!=0)return true;



       

       return (fsum - ssum) * 2 != (sec - first) * 9;


    }
};
