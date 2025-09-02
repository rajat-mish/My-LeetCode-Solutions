class Solution {
public:
bool isp(int r1,int c1,int r2,int c2,vector<vector<int>>& points){
    int minx = min(r1, r2);
    int maxx = max(r1, r2);
    int miny = min(c1, c2);
    int maxy = max(c1, c2);

    for(int i=0;i<points.size();i++){
        int x = points[i][0];
        int y = points[i][1];
      if((x==r1 && y==c1)||(x==r2 && y==c2))continue;
        if(x >= minx && x <= maxx && y >= miny && y <= maxy){
            return false;
        }
    }
    return true;
}


    int numberOfPairs(vector<vector<int>>& points) {
        int cnt=0;
        
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
    if(points[i][0]<=points[j][0] && points[i][1]>=points[j][1]){
        if(isp(points[i][0],points[i][1],points[j][0],points[j][1],points)){
            cnt++;
        }
      
    }
      else if(points[i][0]>=points[j][0] && points[i][1]<=points[j][1]){
            if(isp(points[i][0],points[i][1],points[j][0],points[j][1],points)){
            cnt++;
        }
        }
            }
        }
        return cnt;
    }
};
