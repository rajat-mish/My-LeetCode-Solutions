class Solution {
public:
bool static cmp(vector<int>&a,vector<int>&b){
    if(a.back()==b.back())return a.front()>b.front();
    return a.back()<b.back();
}
    int intersectionSizeTwo(vector<vector<int>>& intv) {
        sort(intv.begin(),intv.end(),cmp);
        for(auto ele:intv)cout<<ele[0]<<" "<<ele[1]<<",";
        cout<<endl;
        int ans=0;
        int mini=-1,maxi=-1;
        for(int i=0;i<intv.size();i++){
            if(intv[i][0]>maxi){
              ans+=2;
              mini=intv[i][1]-1;
              maxi=intv[i][1];
            }
            else if(intv[i][0]>mini){
                ans++;
                mini=maxi;
                maxi=intv[i][1];
            }
          
        }
        return ans;
    }
};
