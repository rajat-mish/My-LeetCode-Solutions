class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())return false;
        unordered_map<char,int>m1,m2;
        for(char ch:word1){
            m1[ch]++;
        }
         for(char ch:word2){
            m2[ch]++;
        }
        // comparing map 1 and map 2 , dono map me elements same hone chahiye bhle hi unki frequencies alag alag ho
        for(auto x:m1){
            char ch=x.first;
            if(m2.find(ch)==m2.end())return false;
        }
        unordered_map<char,int>h1,h2;
        for(auto x:m1){
            int f=x.second;
            h1[f]++;
        }
         for(auto x:m2){
            int f=x.second;
            h2[f]++;
        }

        // comparing helper map1 and helper map2 dono same hone chahiye for true
        for(auto x:h1){
            int key=x.first;
            int val=x.second;
            if(h2.find(key)==h2.end())return false;
            if(h2[key]!=h1[key])return false;
        }
        return true;
    }
};
