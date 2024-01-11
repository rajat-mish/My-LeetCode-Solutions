class Solution {
public:
    int countSeniors(vector<string>& details) {vector<int>v;
        for(int i=0;i<details.size();i++){
            string s=details[i];
            s.pop_back();
s.pop_back();
int a=stoi(s.substr(11,12));
v.push_back(a);
        }
int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>60){
                count++;
            }
        }
        return count;
    }
};
