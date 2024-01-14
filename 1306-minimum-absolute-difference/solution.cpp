class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
         sort(arr.begin(),arr.end());
          vector<vector<int>>ans;
         
    int minD=INT_MAX;
    
             for(int i=1;i<arr.size();i++){
                 minD=min(minD,arr[i]-arr[i-1]);
             }
         
          for(int i=1;i<arr.size();i++){
           
                  if(abs(arr[i]-arr[i-1])==minD){
                      ans.push_back({arr[i-1],arr[i]});
                   
                  }
              
            
          }
          return ans;


        //  std::sort(arr.begin(), arr.end());
        // std::vector<std::vector<int>> ans;
        // int minDiff = INT_MAX;

        // for (int i = 1; i < arr.size(); i++) {
        //     minDiff = std::min(minDiff, arr[i] - arr[i - 1]);
        // }

        // for (int i = 1; i < arr.size(); i++) {
        //     if (arr[i] - arr[i - 1] == minDiff) {
        //         ans.push_back({arr[i - 1], arr[i]});
        //     }
        // }

        // return ans;
    }
};
