class Solution {
public:
bool can(int mid, vector<vector<pair<int,int>>>& adj, vector<bool>& online, long long k) {
    int n = online.size();

    vector<int> indeg(n, 0);
    for (int u = 0; u < n; u++) {
        for (auto [v, w] : adj[u]) indeg[v]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (indeg[i] == 0) q.push(i);
    }

    vector<long long> dist(n, LLONG_MAX);
    dist[0] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (dist[u] != LLONG_MAX && online[u]) {
            for (auto [v, w] : adj[u]) {
                if (online[v] && w >= mid && dist[u] + w <= k) {
                    dist[v] = min(dist[v], dist[u] + w);
                }
            }
        }

        for (auto [v, w] : adj[u]) {
            indeg[v]--;
            if (indeg[v] == 0) q.push(v);
        }
    }

    return dist[n - 1] <= k;
}

    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n = online.size();

        vector<vector<pair<int,int>>> adj(n);
        int high = 0;

        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});
            high = max(high, w);
        }

        int low = 0, ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (can(mid, adj, online, k)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
