class Solution {
public:
set<vector<int>>st;
void permu(vector<vector<int>>&ans,vector<int>v,int idx){
    if(idx==v.size()){
       st.insert(v);
       return;
    }
    for(int i=idx;i<v.size();i++){
        if(i!=idx && v[i]==v[idx]){
            continue;
        }
        swap(v[i],v[idx]);
        permu(ans,v,idx+1);
        
    }
    return ;
}
    vector<vector<int>> permuteUnique(vector<int>& v) {
        //vector<int>v;
         vector<vector<int>>ans;
        
         int idx=0;
         permu(ans,v,idx);
         for(auto ele:st){
            ans.push_back(ele);
         }
         return ans;

    }
};
