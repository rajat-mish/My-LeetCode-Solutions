class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if (!root) return {};

        // hd -> level -> multiset of node values
        map<int, map<int, multiset<int>>> nodes;
        queue<tuple<TreeNode*, int, int>> q; // node, horizontal distance, level
        q.push({root, 0, 0});

        while (!q.empty()) {
            auto [node, hd, lvl] = q.front(); q.pop();
            nodes[hd][lvl].insert(node->val);

            if (node->left) q.push({node->left, hd - 1, lvl + 1});
            if (node->right) q.push({node->right, hd + 1, lvl + 1});
        }

        vector<vector<int>> result;
        for (auto& [hd, levelMap] : nodes) {
            vector<int> col;
            for (auto& [lvl, vals] : levelMap) {
                col.insert(col.end(), vals.begin(), vals.end());
            }
            result.push_back(col);
        }

        return result;
    }
};

