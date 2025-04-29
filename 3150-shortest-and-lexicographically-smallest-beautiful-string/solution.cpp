class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int a=count(s.begin(),s.end(),'1');
        if(a<k)return "";
        int start=0,end=0;
        int c=0;
        string ans="";
        for(int end=0;end<s.size();end++){
            if(s[end]=='1'){
                c++;
               
            }
                while (c > k) {
                if (s[start] == '1') c--;
                start++;
                    while(s[start]=='0')start++;
                
                
            }
            if(c==k){
               while(s[start]=='0')start++;
                string temp=s.substr(start,(end-start+1));
           if(ans==""|| temp.size()<ans.size()||(temp.size()==ans.size()&& temp<ans)){
            ans=temp;
           }

            }
        }
        return ans;
    }
};






