// class Solution {
// public:
//     vector<int> luckyNumbers (vector<vector<int>>& matrix) {
//         vector<int>ans;
//       vector<pair<int,int>>v;
//         for(int i=0;i<matrix.size();i++){
//             int mn=INT_MAX;
//           int mx=INT_MIN;
//             for(int j=0;j<matrix[i].size();j++){
//                mn=min(mn,matrix[i][j]);
//                mx=max(mx,matrix[j][i]);
//             }
//             v.push_back({mn,mx});
           
//         }

//        for(auto pair:v){
//         if(pair.first==pair.second){
//             ans.push_back(pair.first);
//         }
//        }
//        return ans;
//     }
// };


class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;

        for(int i = 0; i < matrix.size(); i++) {
            int mn = INT_MAX;
            int min_col = 0;

            // Find the minimum element in the row and its column index
            for(int j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] < mn) {
                    mn = matrix[i][j];
                    min_col = j;
                }
            }

            // Check if the minimum element in the row is the maximum in its column
            bool is_lucky = true;
            for(int k = 0; k < matrix.size(); k++) {
                if(matrix[k][min_col] > mn) {
                    is_lucky = false;
                    break;
                }
            }

            if(is_lucky) {
                ans.push_back(mn);
            }
        }

        return ans;
    }
};

