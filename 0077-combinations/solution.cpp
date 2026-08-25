class Solution {
public:

vector<vector<int>>ans;
set<vector<int>>st;

void fun(int i,int k,int n,vector<int>&temp){
    if(temp.size()==k){
        //ans.push_back(temp);
        //sort(temp.begin(),temp.end());
        if(st.find(temp)==st.end())st.insert(temp);
       
        return;
    }

    for(int val=i;val<=n;val++){
        temp.push_back(val);
        fun(val+1,k,n,temp);
        temp.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
           vector<int>temp;
       fun(1,k,n,temp);
        for(auto ele:st)ans.push_back(ele);
        return ans;
    }
};


