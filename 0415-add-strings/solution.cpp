class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int carry=0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        while(i>=0 && j>=0){
            int a=num1[i]-'0';
            int b=num2[j]-'0';
            int sum=carry+a+b;
            carry=sum/10;
            ans.push_back(sum%10+'0');
            i--;
            j--;
        }
        if(i>=0){
            while(i>=0){
                  int a=num1[i]-'0';
           
            int sum=carry+a;
            carry=sum/10;
            ans.push_back(sum%10+'0');
            i--;
           
            }
        }

           if(j>=0){
            while(j>=0){
                  int a=num2[j]-'0';
           
            int sum=carry+a;
            carry=sum/10;
            ans.push_back(sum%10+'0');
            j--;
           
            }
        }
        if(carry){
            ans.push_back(carry+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
