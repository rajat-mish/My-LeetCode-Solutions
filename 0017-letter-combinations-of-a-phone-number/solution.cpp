class Solution {
public:
vector<string>ans;
 void fun(int i,string&digits,map<char,string>&mp,string &curr){
    if(i==digits.size()){
       ans.push_back(curr);
        return;
    }

    char ch=digits[i];
    for(auto ele:mp[ch]){
        curr+=ele;
        fun(i+1,digits,mp,curr);
        curr.pop_back();
    }
 }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return ans;
        map<char,string>mp;
        mp['2']={"abc"};
         mp['3']={"def"};
          mp['4']={"ghi"};
           mp['5']={"jkl"};
            mp['6']={"mno"};
             mp['7']={"pqrs"};
              mp['8']={"tuv"};
               mp['9']={"wxyz"};
string curr;
               fun(0,digits,mp,curr);
               return ans;

    }
};
