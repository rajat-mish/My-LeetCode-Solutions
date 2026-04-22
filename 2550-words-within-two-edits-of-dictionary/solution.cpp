class Solution {
public:
    vector<string> twoEditWords(vector<string>& que, vector<string>& dict) {
        vector<string> ans;
        unordered_set<string> st;
        for (auto ele : dict) {
            st.insert(ele);
        }

        for (int i = 0; i < que.size(); i++) {
            string ele = que[i];
            if (st.find(ele) != st.end()) {
                ans.push_back(ele);
            } else {
                for (int j = 0; j < dict.size(); j++) {
                    string temp = dict[j];
                    int cnt = 0;
                    for (int k = 0; k < temp.size(); k++) {
                        if (temp[k] != ele[k])
                            cnt++;
                        if (cnt > 2)
                            break;
                    }
                    if (cnt <= 2)
                      if(ans.size()>0){
                        if(ans.back()!=ele)  ans.push_back(ele);
                      }
                      else   ans.push_back(ele);
                }
            }
        }
        return ans;
    }
};
