class Solution {
public:
    string sortSentence(string s) {
       
string temp;
string ans[200];

stringstream ss(s);
while(ss>>temp){int n=temp[temp.size()-1];
temp.pop_back();
   ans[n]=temp+" ";
}

string v="";
for(int i=0;i<200;i++){
    v=v+ans[i];
}
v.pop_back();
return v;
    }
};
