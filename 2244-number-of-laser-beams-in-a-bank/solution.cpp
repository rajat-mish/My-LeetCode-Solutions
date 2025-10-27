class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        for(int i=0;i<bank.size();i++){
            string temp=bank[i];
           int cnt=count(temp.begin(),temp.end(),'1');
         if(cnt)  v.push_back(cnt);
        }
        int ans=0;
        if(v.size()==0)return ans;
        for(int i=0;i<v.size()-1;i++){
            ans+=v[i]*v[i+1];
        }
        return ans;
    }
};
