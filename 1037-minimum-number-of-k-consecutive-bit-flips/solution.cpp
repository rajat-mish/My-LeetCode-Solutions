class Solution {
public:
    int minKBitFlips(vector<int>& arr, int k) {
        int n = arr.size();
        queue<int> q;  
        int cnt = 0;

        for (int i = 0; i < n; i++) {
        
            if (!q.empty() && q.front() < i) q.pop();

        
            if (((arr[i] + q.size()) % 2) == 0) {
                if (i + k > n) return -1; 
                cnt++;
                q.push(i + k - 1); 
            }
        }

        return cnt;
    }
};
