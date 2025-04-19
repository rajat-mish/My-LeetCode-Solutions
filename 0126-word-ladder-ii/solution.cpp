// class Solution {
// public:
//     vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
//         vector<vector<string>>ans;
//         unordered_set<string>st(wordList.begin(),wordList.end());
//         queue<vector<string>>q;
//          if (!st.count(endWord)) return ans;
//         // vector<string>used;
//         unordered_set<string> used;
//         int minlevel=INT_MAX;

//         int level=0;
//         q.push({beginWord});
//         used.insert(beginWord);
//         while(!q.empty()){
//             vector<string>vec=q.front();
//             q.pop();
//             if(vec.size()>minlevel)break;
//             if(vec.size()>level){
//                 level++;
//                 for(auto ele:used)st.erase(ele);
//                 used.clear();
//             }
//             string word=vec.back();
//             if(word==endWord){
//                 if (ans.empty() || vec.size() == minlevel) {
//                     ans.push_back(vec);
//                     minlevel = vec.size(); // Set min level when first endWord is found
//                 }
//                 continue;
//             }

//             for(int i=0;i<word.size();i++){
//                 char org=word[i];
//                 for(char ch='a';ch<='z';ch++){
//                     word[i]=ch;
//                     if(st.count(word)>0){
//                         vec.push_back(word);
//                         q.push(vec);
//                         used.insert(word);
//                         vec.pop_back();
//                     }
//                 }
//                 word[i]=org;
//             }
//         }
//         return ans;
//     }
// };






class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (!dict.count(endWord)) return {};

        // Map to store predecessors for each word
        unordered_map<string, vector<string>> predecessors;
        // Map to store distance (level) of each word from beginWord
        unordered_map<string, int> distance;
        // Queue for BFS
        queue<string> q;
        // Result paths
        vector<vector<string>> result;

        // Initialize BFS
        q.push(beginWord);
        distance[beginWord] = 0;
        dict.erase(beginWord); // Remove beginWord from dictionary if present

        bool found = false;
        while (!q.empty() && !found) {
            int size = q.size();
            // Process all words at the current level
            for (int i = 0; i < size; i++) {
                string curr = q.front();
                q.pop();
                int currDist = distance[curr];

                // Get all possible next words
                vector<string> neighbors = getNeighbors(curr, dict);
                for (const string& next : neighbors) {
                    // If not visited or at the same level, add as predecessor
                    if (!distance.count(next) || distance[next] == currDist + 1) {
                        predecessors[next].push_back(curr);
                        // If not visited, add to queue and set distance
                        if (!distance.count(next)) {
                            distance[next] = currDist + 1;
                            q.push(next);
                            if (next == endWord) found = true;
                        }
                    }
                }
            }
            // Remove processed words from dictionary to avoid reuse in later levels
            for (const string& word : neighborsToRemove) {
                dict.erase(word);
            }
            neighborsToRemove.clear();
        }

        // If endWord not reached, return empty result
        if (!distance.count(endWord)) return {};

        // Reconstruct paths using DFS
        vector<string> path = {endWord};
        dfs(endWord, beginWord, predecessors, path, result);

        return result;
    }

private:
    vector<string> neighborsToRemove; // Temporary storage for words to remove

    // Get all valid neighbors of a word from the dictionary
    vector<string> getNeighbors(const string& word, unordered_set<string>& dict) {
        vector<string> neighbors;
        for (const string& dictWord : dict) {
            if (isNeighbor(word, dictWord)) {
                neighbors.push_back(dictWord);
                neighborsToRemove.push_back(dictWord);
            }
        }
        return neighbors;
    }

    // Check if two words differ by exactly one character
    bool isNeighbor(const string& a, const string& b) {
        int diff = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) diff++;
            if (diff > 1) return false;
        }
        return diff == 1;
    }

    // DFS to reconstruct all shortest paths
    void dfs(const string& curr, const string& beginWord,
             unordered_map<string, vector<string>>& predecessors,
             vector<string>& path, vector<vector<string>>& result) {
        if (curr == beginWord) {
            // Reverse path to get correct order
            result.push_back(vector<string>(path.rbegin(), path.rend()));
            return;
        }

        for (const string& prev : predecessors[curr]) {
            path.push_back(prev);
            dfs(prev, beginWord, predecessors, path, result);
            path.pop_back();
        }
    }
};
