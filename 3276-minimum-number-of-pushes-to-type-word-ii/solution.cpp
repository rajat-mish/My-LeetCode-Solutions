class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        unordered_map<char,int>mp;
        int cnt=1;
        for(int i=0;i<n;i++){
          mp[word[i]]++;
        }

        priority_queue<pair<int,char>>pq;
        for(auto ele:mp){
            pq.push({ele.second,ele.first});
        }

        int ucnt=0;
        int val=1;
int ans=0;
      while(!pq.empty()){
        int f=pq.top().first;
        char ele=pq.top().second;
        pq.pop();
        ucnt++;
      

        ans+=f*val;
          if(ucnt%8==0){
            val++;
        }

      }
      return ans;
       
    
    }
};
