class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string,int>mp;
        set<string>vis;
        for(auto ele:wordList)mp[ele]++;
        if(mp.find(endWord)==mp.end())return 0;
     
        queue<pair<int,string>>q;
        int ans=0;
        q.push({0,beginWord});
        vis.insert(beginWord);
        while(!q.empty()){
            int count=q.front().first;
            string temp=q.front().second;
            q.pop();
            if(temp==endWord)return count+1;
          
          for(int i=0;i<temp.size();i++){
            string tp=temp;
              for(char ch='a';ch<='z';ch++){
                tp[i]=ch;
                if(mp.find(tp)!=mp.end() && vis.find(tp)==vis.end()){
                    vis.insert(tp);
                    q.push({count+1,tp});
                }
            }
          }
        }
        return 0;
    }
};
