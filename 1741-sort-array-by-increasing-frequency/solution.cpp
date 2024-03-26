class Solution {
public:typedef pair<int,int>pi;

class Compare{
public:

bool operator()(const pi& a,const pi& b)const{
    if(a.second==b.second)return a.first < b.first;
    return a.second>b.second;
}


};
    vector<int> frequencySort(vector<int>& nums) {
         unordered_map<int,int>m;
        vector<int>v;
        priority_queue<pi,vector<pi>,Compare>pq;
  // map me <element,freq> hai , priority queue me <freq,element> hai
  // we use min heap here
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            pq.push({x.first,x.second});
           
        }
        while(!pq.empty()){
           int val=pq.top().first;
           int freq=pq.top().second;
            pq.pop();
            for(int i=0;i<freq;++i){
                v.push_back(val);
            }
           
        }
return v;
     
    }
};




