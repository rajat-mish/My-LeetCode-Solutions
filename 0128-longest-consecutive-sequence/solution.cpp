class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0)return 0;
     vector<int>ans;
        int count=1;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size()-1;i++){
            if((arr[i+1]-arr[i])==1){
                count++;
            }
            else if((arr[i+1]-arr[i])==0){
                continue;
            }
            else{
                ans.push_back(count);
                count=1;
            }
        }
        ans.push_back(count);
        return *max_element(ans.begin(),ans.end());
        
    }
};
