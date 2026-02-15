class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size();
        int m=b.size();
        int i=n-1,j=m-1;
        string ans="";
        int carry=0;
        while(i>=0 && j>=0){
            int x=a[i]-'0';
            int y=b[j]-'0';
            if(x==1 && y==1){
                if(carry){
                    ans.push_back('1');
                }
                else{
                    ans.push_back('0');
                }
                carry=1;
            }
            else{
                if((x+y==1)){
                    if(carry){
                        ans.push_back('0');
                        carry=1;
                    }
                    else{
                        ans.push_back('1');
                        carry=0;
                    }
                }
                else{
                    if(carry){
                        ans.push_back('1');
                       

                    }
                    else ans.push_back('0');

                     carry=0;
                }
            }
            i--;j--;
        }
        while(i>=0){
            int x=a[i]-'0';
           if(x==1){
            if(carry){
                ans.push_back('0');
                carry=1;
            }
            else{
                ans.push_back('1');
                carry=0;
            }
           }
           else{
            if(carry){
                ans.push_back('1');
                carry=0;
            }
            else{
                ans.push_back('0');
                carry=0;
            }
           }
           i--;
        }



        while(j>=0){
            int x=b[j]-'0';
           if(x==1){
            if(carry){
                ans.push_back('0');
                carry=1;
            }
            else{
                ans.push_back('1');
                carry=0;
            }
           }
           else{
            if(carry){
                ans.push_back('1');
                carry=0;
            }
            else{
                ans.push_back('0');
                carry=0;
            }
           }
           j--;
        }
        if(carry){
            ans.push_back('1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
