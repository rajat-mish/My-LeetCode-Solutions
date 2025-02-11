// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         stack<char>st;
//         int n=part.size();
//         for(int i=0;i<s.size();i++){
//             if(st.size()>0 && st.top()==part[part.size()-1]){
//                 while(n-- && st.size()>0){
//                    st.pop();
//                 }
//                 st.push(s[i]);
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//              if(st.size()>0 && st.top()==part[part.size()-1]){
//                 while(n--){
//                    if(st.size()>0) st.pop();
//                 }}
//         string ans="";
//         while(st.size()>0){
//             ans.push_back(st.top());
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };


class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.find(part) != string::npos) {
            s.erase(s.find(part), part.size());
        }
        return s;
    }
};

