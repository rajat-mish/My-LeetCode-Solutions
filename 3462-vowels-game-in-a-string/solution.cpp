class Solution {
public:
    bool doesAliceWin(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')return true;
        }
        return false;
    }
};


// 1 1 4 6 6 8 9 10
// 8 8 11 13 13 15 16 17
/*






*/
