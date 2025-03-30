class Solution {
public:
vector<vector<string>>ans;
bool isp(string &s){
    string temp=s;
    reverse(temp.begin(),temp.end());
    if(temp==s)return true;
    return false;
}
void fun(int i,vector<string>&temp,string &s){
    if(i==s.size()){
        ans.push_back(temp);
        return;
    }
    string str;
    for(int j=i;j<s.size();j++){
        str+=s[j];
        if(isp(str)){

            temp.push_back(str);
            fun(j+1,temp,s);
            temp.pop_back();

        }
       
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        fun(0,temp,s);
        return ans;
    }
};
