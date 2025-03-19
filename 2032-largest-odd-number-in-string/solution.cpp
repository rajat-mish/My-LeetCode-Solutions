class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            int a=num[i]-'0';
            if(a%2!=0){
                string s=num.substr(0,i+1);
               
                return s;
            }
        }
        return "";
    }
};
