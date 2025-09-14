class Solution {
public:
    string toLower(const string &s) {
        string t = s;
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        return t;
    }

    string devowel(const string &s) {
        string t = toLower(s);
        for (char &c : t) {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
                c = '*';
            }
        }
        return t;
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& query) {
        unordered_set<string> exact(wordlist.begin(), wordlist.end());
        unordered_map<string, string> lowerMap;
        unordered_map<string, string> devowelMap;

    
        for (string &w : wordlist) {
            string low = toLower(w);
            string dev = devowel(w);

           
            if (!lowerMap.count(low)) lowerMap[low] = w;
            if (!devowelMap.count(dev)) devowelMap[dev] = w;
        }

        vector<string> ans;
        for (string q : query) {
            if (exact.count(q)) {
                ans.push_back(q);
                continue;
            }
            string lowq = toLower(q);
            if (lowerMap.count(lowq)) {
                ans.push_back(lowerMap[lowq]);
                continue;
            }
            string devq = devowel(q);
            if (devowelMap.count(devq)) {
                ans.push_back(devowelMap[devq]);
                continue;
            }
            ans.push_back("");
        }

        return ans;
    }
};

