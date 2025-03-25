class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rect) {
   vector<pair<int, int>> xd, yd;

     
        for(int i=0;i<rect.size();i++){


            xd.push_back({rect[i][0],rect[i][2]});
        }

             for(int i=0;i<rect.size();i++){
        
            yd.push_back({rect[i][1],rect[i][3]});
        }

        sort(xd.begin(),xd.end());
        sort(yd.begin(),yd.end());
          int endx=xd[0].second;
          int cutx=0;
        for(int i=1;i<xd.size();i++){
            if(xd[i].first>=endx){
                endx=max(endx,xd[i].second);
                cutx++;
            }
            else{
                endx=max(endx,xd[i].second);
            }
        }
        if(cutx>=2)return true;
        int cuty=0;
         int endy=yd[0].second;
              for(int i=1;i<yd.size();i++){
            if(yd[i].first>=endy){
                endy=max(endy,yd[i].second);
                cuty++;
            }
            else{
                endy=max(endy,yd[i].second);
            }
        }
        if(cuty>=2)return true;
        return false;
        
    }
};







// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     bool checkValidCuts(int n, vector<vector<int>>& rect) {
//         vector<pair<int, int>> xd, yd;

//         int m = rect.size();
//         if (m == 0) return false; // Handle edge case

//         // Use rect.size() instead of n to avoid out-of-bounds
//         for (int i = 0; i < m; i++) {
//             xd.push_back({rect[i][0], rect[i][2]});
//             yd.push_back({rect[i][1], rect[i][3]});
//         }

//         sort(xd.begin(), xd.end());
//         sort(yd.begin(), yd.end());

//         if (xd.empty() || yd.empty()) return false; // Additional safety check

//         int endx = xd[0].second;
//         int cutx = 0;

//         for (int i = 1; i < xd.size(); i++) {
//             if (xd[i].first >= endx) {
//                 cutx++;
//                 endx = xd[i].second;
//             } else {
//                 endx = max(endx, xd[i].second);
//             }
//         }
//         if (cutx >= 2) return true;

//         int cuty = 0;
//         int endy = yd[0].second;
//         for (int i = 1; i < yd.size(); i++) {
//             if (yd[i].first >= endy) {
//                 cuty++;
//                 endy = yd[i].second;
//             } else {
//                 endy = max(endy, yd[i].second);
//             }
//         }

//         return cuty >= 2;
//     }
// };

