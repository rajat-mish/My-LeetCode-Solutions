class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        int n = word.size();
        for (int i = 1; i * k <= n; i++) {
            // remaining suffix
            string suffix = word.substr(i * k);
            // compare with prefix of same length
            if (word.substr(0, n - i * k) == suffix)
                return i;
        }
        return (n + k - 1) / k; // ceil(n/k)
    }
};

