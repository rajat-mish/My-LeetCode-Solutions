class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int>st;
        vector<int>v;
       for(int i=0;i<s.size();i++){
           if(s[i]=="C"){
               st.pop();
           }
           else if(s[i]=="D"){
               int p=2*st.top();
               st.push(p);
           }
           else if(s[i]=="+"){
               int p=st.top();
               st.pop();
               int q=st.top();
               st.push(p);
               st.push(p+q);
           }

           else{
               st.push(stoi(s[i]));
           }
       }
       while(st.size()>0){
           v.push_back(st.top());
           st.pop();
       }
       int sum=0;
       for(int i=0;i<v.size();i++){
           sum+=v[i];
       }
       return sum;
    }
};
