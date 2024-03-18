class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) { int count=0;
        unordered_set<string>s;
        for(int i=0;i<words.size();i++){
            s.insert(words[i]);
        }
        for(int i=0;i<words.size();i++){
            string rev=words[i];
            reverse(rev.begin(),rev.end());
            if(words[i]==rev)continue;
            if(s.find(rev)!=s.end()){count++;
            s.erase(words[i]);
            }
        }
        return count;
    }
};
