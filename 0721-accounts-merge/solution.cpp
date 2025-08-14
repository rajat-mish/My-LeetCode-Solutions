#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<string, vector<string>> graph; // email -> connected emails
    unordered_map<string, string> emailToName;   // email -> name
    unordered_set<string> visited;

    void dfs(string email, vector<string> &emails) {
        visited.insert(email);
        emails.push_back(email);

        for (auto &nei : graph[email]) {
            if (!visited.count(nei)) {
                dfs(nei, emails);
            }
        }
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        // Build graph and email-to-name map
        for (auto &acc : accounts) {
            string name = acc[0];
            for (int i = 1; i < acc.size(); i++) {
                emailToName[acc[i]] = name;
                if (i == 1) continue;
                graph[acc[1]].push_back(acc[i]);
                graph[acc[i]].push_back(acc[1]);
            }
        }

        vector<vector<string>> result;

        // DFS for each email
        for (auto &p : emailToName) {
            string email = p.first;
            if (!visited.count(email)) {
                vector<string> emails;
                dfs(email, emails);
                sort(emails.begin(), emails.end());
                emails.insert(emails.begin(), emailToName[email]);
                result.push_back(emails);
            }
        }
        return result;
    }
};

