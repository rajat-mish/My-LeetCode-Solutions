class Solution {
public:
    int leastInterval(vector<char>& task, int n) {
        unordered_map<char,int>mp;
        for(auto ele:task){
         mp[ele]++;
        }
        priority_queue<int>pq;
        for(auto ele:mp){
            pq.push(ele.second);
        }
        int ans=0;
        while(!pq.empty()){
            vector<int>temp;
            int cycle=n+1;
            int i=0;
            while(i<cycle && !pq.empty()){
                int cnt=pq.top();
                pq.pop();
                cnt--;
                if(cnt>0)temp.push_back(cnt);
                i++;
                ans++;
            }
            for(auto ele:temp)pq.push(ele);
            if(pq.empty())break;
            ans+=(cycle-i);
        }
        return ans;
    }
};
