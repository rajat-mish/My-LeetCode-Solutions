class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<A.size();i++){
            mp[A[i]]++;
            mp[B[i]]++;
            for(auto ele:mp){
                if(ele.second ==2){
                    count++;
                }
            }
            ans.push_back(count);
            count=0;

        }
        return ans;
    }
};
