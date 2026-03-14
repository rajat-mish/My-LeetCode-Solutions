class Solution {
public:
vector<string>ans;
void fun(int i,int n,string &s){
    if(i>=n){
        ans.push_back(s);
        return ;
    }

    if(i==0){
        s.push_back('a');
        fun(i+1,n,s);
        s.pop_back();

          s.push_back('b');
        fun(i+1,n,s);
        s.pop_back();

          s.push_back('c');
        fun(i+1,n,s);
        s.pop_back();

    }
    else{
        if(s.back()=='a'){
            s.push_back('b');
            fun(i+1,n,s);
            s.pop_back();
            s.push_back('c');
            fun(i+1,n,s);
            s.pop_back();
        }
        else if(s.back()=='b'){
              s.push_back('a');
        fun(i+1,n,s);
        s.pop_back();

          s.push_back('c');
        fun(i+1,n,s);
        s.pop_back();
        }
        else if(s.back()=='c'){
              s.push_back('a');
        fun(i+1,n,s);
        s.pop_back();

          s.push_back('b');
        fun(i+1,n,s);
        s.pop_back();
        }
    }
}
    string getHappyString(int n, int k) {
        sort(ans.begin(),ans.end());
           string s="";
          fun(0,n,s);
        if(k>ans.size())return "";
     
        fun(0,n,s);
        return ans[k-1];
    }
};
