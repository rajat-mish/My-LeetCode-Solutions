#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        vector<string> v1, v2;
        
        // Split s1 into words
        stringstream ss1(s1);
        string word;
        while (ss1 >> word) {
            v1.push_back(word);
        }
        
        // Split s2 into words
        stringstream ss2(s2);
        while (ss2 >> word) {
            v2.push_back(word);
        }

        // Ensure v1 is the smaller vector
        if (v1.size() > v2.size()) {
            swap(v1, v2);
        }

        // Check for prefix and suffix matches
        int i = 0, j = 0;
        int n1 = v1.size(), n2 = v2.size();
        
        // Matching prefix
        while (i < n1 && v1[i] == v2[i]) {
            i++;
        }
        
        // Matching suffix
        while (j < n1 && v1[n1 - j - 1] == v2[n2 - j - 1]) {
            j++;
        }

    
        return i + j >= n1;
    }
};

