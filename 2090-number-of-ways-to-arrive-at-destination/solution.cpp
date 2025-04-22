class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> adj[n];
        for (auto& ele : roads) {
            adj[ele[0]].push_back({ele[1], ele[2]});
            adj[ele[1]].push_back({ele[0], ele[2]});
        }

        // Priority queue with cost as long long
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
        pq.push({0, 0});

        vector<long long> dist(n, LLONG_MAX); // Use long long for dist
        vector<int> ways(n, 0);
        int mod = 1e9 + 7;

        dist[0] = 0;
        ways[0] = 1;

        while (!pq.empty()) {
            auto [cost, node] = pq.top();
            pq.pop();

            if (cost > dist[node]) continue; // Skip outdated entries

            for (auto& [adjNode, weight] : adj[node]) {
                if (dist[adjNode] > cost + weight) {
                    dist[adjNode] = cost + weight;
                    pq.push({dist[adjNode], adjNode});
                    ways[adjNode] = ways[node];
                }
                else if (dist[adjNode] == cost + weight) {
                    ways[adjNode] = (ways[adjNode] + ways[node]) % mod;
                }
            }
        }

        return ways[n - 1];
    }
};

