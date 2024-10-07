// class Solution {
// public:
//     int minLength(string s) {
//         int i=0;
//         while(i<s.size()-1){
//             if((s[i]=='A' && s[i+1]=='B')||(s[i]=='C'&&s[i+1]=='D')){
//                    s.erase(i,2);
//                    if(i>0)i--;
                 
//             }
//             else{
//                 i++;
//             }
            
//         }
//         return s.size();
//     }
// };

class Solution {
public:
    int minLength(string s) {
        stack<char> st;

       
        for (char c : s) {
         
            if (!st.empty() && ((st.top() == 'A' && c == 'B') || (st.top() == 'C' && c == 'D'))) {
                st.pop(); 
            } else {
                st.push(c);  
            }
        }

    
        return st.size();
    }
};

