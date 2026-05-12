class Solution {
public:
bool static cmp(vector<int>&a,vector<int>&b){
    return a[1]-a[0]>b[1]-b[0];
}
    int minimumEffort(vector<vector<int>>& tasks) {
       sort(tasks.begin(),tasks.end(),cmp);
       int start=tasks[0][1];
       int bal=tasks[0][1]-tasks[0][0];
       int extra=0;
       for(int i=1;i<tasks.size();i++){
        int a=tasks[i][0];
        int b=tasks[i][1];
        if(bal<b){
            extra+=b-bal;
            bal=b;
        }
        bal-=a;
       }
       return start+extra;
    }
};
