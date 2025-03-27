class Solution {
public:
vector<string>ans;
void fun(int i,string&s,vector<string>&temp,unordered_set<string>&st){
    if(i==s.size()){
        string sentence;
        for(int j=0;j<temp.size();j++){
            sentence+=temp[j];
            if(j!=temp.size()-1){
                 sentence+=" ";
            }
        }
        ans.push_back(sentence);
        return ;
    }

    string word;
    for(int j=i;j<s.size();j++){
        word+=s[j];
        if(st.find(word)!=st.end()){
            temp.push_back(word);
            fun(j+1,s,temp,st);
            temp.pop_back();
        }
    }
}
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>temp;
        unordered_set<string>st(wordDict.begin(),wordDict.end());
        fun(0,s,temp,st);
        return ans;

    }
};
