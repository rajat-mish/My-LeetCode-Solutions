class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& s1, vector<vector<int>>& s2) {
        
    set<vector<int>>st;

        //for(auto ele:s2)st.insert(ele);
vector<vector<int>>ans;
        for(auto ele:s1){
            int ts=ele[0];
            int val=ele[1];
             vector<int>tr={ts};
            auto lb=lower_bound(s2.begin(),s2.end(),tr);
            if(lb!=s2.end()){
                vector<int>temp=*lb;
                val+=temp[1];

                //ans.push_back({ts,val});
                st.insert({ts,val});
            }
            else st.insert({ts,val});
            //else ans.push_back({ts,val});
        }

        for(int i=0;i<s2.size();i++){
            int ts=s2[i][0];
            int val=s2[i][1];
           vector<int>tr={ts};
            auto ub=lower_bound(s1.begin(),s1.end(),tr);
            if(ub!=s1.end()){
                vector<int>temp=*ub;
                val+=temp[1];
                //ans.push_back({ts,val});
            }
               //else ans.push_back({ts,val});
               st.insert({ts,val});
        }
        for(auto ele:st)ans.push_back(ele);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
