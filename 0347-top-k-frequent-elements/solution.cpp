class Solution {
public:typedef pair<int,int>pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>v;
        priority_queue<pi,vector<pi>,greater<pi>>pq;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            pq.push({x.second,x.first});
            if(pq.size()>k)pq.pop();
        }
        while(pq.size()>0){
            int ele=pq.top().second;
            v.push_back(ele);
            pq.pop();
        }
return v;
     
    }
};
