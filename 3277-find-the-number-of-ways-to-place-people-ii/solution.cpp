class Solution {
public:
bool static cmp(const vector<int>&a,vector<int>&b){
    return (a[0]==b[0])?a[1]<b[1]:a[0]>b[0];
}
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int ans=0;
        for(int i=0;i<points.size()-1;i++){
            int y=INT_MAX;
            for(int j=i+1;j<points.size();j++){
                if(points[i][1]<=points[j][1] && y>points[j][1]){
                    ans++;
                    y=points[j][1];
                }
            }
        }
        return ans;
    }
};
