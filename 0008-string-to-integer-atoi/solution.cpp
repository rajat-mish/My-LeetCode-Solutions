class Solution {
public:
    int myAtoi(string s) {
        if(!isdigit(s[0]) && s[0]!='-'  && s[0]!='+' && s[0]!='0' && s[0]!=' ')return 0;
        string ans="";
        bool neg=false;
        int c=0;
        for(int i=0;i<s.size();i++){

            if(s[i]=='-' && ans.size()==0){
                if(c>0)return 0;
                c++;
                neg=true;
            }
            else if((s[i]=='+') && ans.size()==0){
                 if(c>0)return 0;
                c++;
                continue;
            }
            else if(s[i]==' ' && ans.size()==0){
                if(c>0)return 0;
                continue;
            }
            else if(isdigit(s[i])){
                ans+=s[i];
            }
            else{
                break;
            }
        }
        cout<<ans;
        string str=ans;
        int a=0;
        if(ans.size()==0)return 0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0')a++;
    }
    if(a==str.size())return 0;
      str.erase(0, str.find_first_not_of('0'));
        string temp=ans;
        long long n;
        if(neg && str.size()>11)return INT_MIN;
        if(!neg && str.size()>10)return INT_MAX;
       if(neg){
        str="-"+str;
        n=stoll(str);
       }
       else n=stoll(str);
        if(n>=INT_MAX)return INT_MAX;
        if(n<=INT_MIN)return INT_MIN;
        int num=stoi(temp);
        if(neg)return -num;
        return num;
    }
};
