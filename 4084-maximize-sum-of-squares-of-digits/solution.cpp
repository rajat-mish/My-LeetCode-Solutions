class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>=10 && num<2)return "";
        string ans="";
        if(sum<10){
            ans.push_back(sum+'0');
            num--;
            while(num>0){
                ans.push_back('0');
                num--;
            }
            return ans;
        }
        else{
            while(sum>=9 && num>0){
                ans.push_back('9');
                sum-=9;
                num--;
            }
            if(sum>0 && num<=0)return "";

           if(num>0){
                  ans.push_back(sum+'0');
            num--;
            while(num>0){
                ans.push_back('0');
                num--;
            }
            return ans;
           }
        }
        return ans;
    }
};
