class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<char, int>> vec(mp.begin(), mp.end());

   
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
        string ans="";
       for(auto ele:vec){
        cout<<ele.first<<" "<<ele.second;
        int val=ele.second;
        for(int i=0;i<val;i++){
            ans.push_back(ele.first);
        }
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
