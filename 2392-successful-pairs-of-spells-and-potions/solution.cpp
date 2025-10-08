class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& pot, long long success) {
        vector<int>ans;
        sort(pot.begin(),pot.end());

        for(int i=0;i<spells.size();i++){
            int ele=spells[i];
            int low=0,high=pot.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                
                long long mul=(long long)ele*pot[mid];
                if(mul<success){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            int n=pot.size();
            ans.push_back(n-high-1);
        }
        return ans;
    }
};
