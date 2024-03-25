class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<arr1.size();i++){
            m[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            int ele=arr2[i];
            if(m.find(ele)!=m.end() && m[ele]>0){
              while(m[ele]>0){
                v.push_back(ele);
                m[ele]--;
              }
            }
        }
        vector<int>u;
        for(auto x:m){
            while(x.second>0){
                u.push_back(x.first);
                x.second--;
            }
        }
        sort(u.begin(),u.end());
        for(int i=0;i<u.size();i++){
          v.push_back(u[i]);
        }
        return v;
    }
};
