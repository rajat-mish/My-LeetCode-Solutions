class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<string>ans;
        int count=0;
        for(auto ele:mp){
            if(ele.second==1){
             ans.push_back(ele.first);
             count++;
            }
        }
        vector<string>v;
        if(k>count)return "";
        for(int i=0;i<arr.size();i++){
            bool flag=false;
            for(int j=0;j<ans.size();j++){
                if(arr[i]==ans[j]){
                    flag=true;
                }
            }
            if(flag==true){
              v.push_back(arr[i]);
            }
        }
        return v[k-1];

        
    }
};
