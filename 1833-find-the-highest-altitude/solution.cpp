class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v(gain.size()+1);
        v[0]=0;
        for(int i=0;i<gain.size();i++){
           // v.push_back(v[i]+gain[i]);
           v[i+1]=v[i]+gain[i];
        }
       int max=v[0];
        for(int i=0;i<v.size();i++){
                   if(v[i]>max){
                       max=v[i];
                   }
        }
        return max;
    }
};
