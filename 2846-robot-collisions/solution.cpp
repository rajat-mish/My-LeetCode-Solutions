class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& pos, vector<int>& hel, string dir) {
        vector<pair<int,pair<char,pair<int,int>>>>v;
        for(int i=0;i<dir.size();i++){
            v.push_back({pos[i],{dir[i],{hel[i],i}}});
        }
        sort(v.begin(),v.end());
        stack<pair<int,pair<char,pair<int,int>>>>st;

        for(int i=0;i<dir.size();i++){
            auto cur=v[i];
            if(cur.second.first=='R')st.push(cur);
            else{
               
            while(!st.empty()&& st.top().second.first=='R' ){
               auto top=st.top();
                 //int rpos=st.top().first;
                 int  rh=top.second.second.first;
                 int ch=cur.second.second.first;
                 //int  rc=st.top().second.second;
                 st.pop();

                 if(rh==ch){
                top.second.second.first=0;
                cur.second.second.first=0;
                break;

                 }
                 else if(rh>ch){
                     top.second.second.first--;
                     st.push(top);
                cur.second.second.first=0;
             break;

                 }
                 else{
                  cur.second.second.first--;
                 }
            }
          if( cur.second.second.first>0){
            st.push(cur);
          }
            }
        }

vector<int>ans;
vector<pair<int,int>>tp;
        while(!st.empty()){
            int idx=st.top().second.second.second;
            int hel=st.top().second.second.first;
            tp.push_back({idx,hel});
            st.pop();
        }
        sort(tp.begin(),tp.end());
        for(auto ele:tp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};
