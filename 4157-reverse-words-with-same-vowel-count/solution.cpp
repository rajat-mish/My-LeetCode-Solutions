class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        stringstream ss(s);
        string temp;

        while(ss>>temp){
            v.push_back(temp);
        }
        string tp=v[0];
        int cnt=0;
        for(int i=0;i<tp.size();i++){
            if(tp[i]=='a'||tp[i]=='e'||tp[i]=='i'||tp[i]=='o'||tp[i]=='u')cnt++;
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            if(i==0){
                ans+=v[i]+" ";
            }
            else{
                string tp=v[i];
                  int ct=0;
        for(int i=0;i<tp.size();i++){
            if(tp[i]=='a'||tp[i]=='e'||tp[i]=='i'||tp[i]=='o'||tp[i]=='u')ct++;
        }
        if(ct==cnt){
            reverse(v[i].begin(),v[i].end());
            ans+=v[i]+" ";
        }
        else{
              ans+=v[i]+" ";
        }
            }
        }
        ans.pop_back();
        return ans;
    }
};
