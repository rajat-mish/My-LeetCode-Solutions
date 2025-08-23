class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(auto ch:s){
            mp[ch]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto ele:mp){
            pq.push({ele.second,ele.first});
        }

        string ans;
        pair<int,char>p={0,'#'};
        while(!pq.empty()){
            auto [count,ch]=pq.top();
            pq.pop();
            count--;
            ans.push_back(ch);
            if(p.first>0){
                pq.push(p);
            }
             p={count,ch};
        }
        return (ans.size()==s.size())?ans:"";
    }
};
