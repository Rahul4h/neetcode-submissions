class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        // একটি ভ্যালিড ট্রিতে অবশ্যই n - 1 টি এজ থাকতে হবে
        if (edges.size() != n - 1) return false;

        vector<vector<int>> g(n);
        for (int i = 0; i < edges.size(); i++) {
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }

        vector<bool> visited(n, false);
        queue<int> qe;

        qe.push(0);
        visited[0] = true;
        int visitedCount = 0;

        while (!qe.empty()) {
            int x = qe.front();
            qe.pop();
            visitedCount++;

            for (int node : g[x]) {
                if (!visited[node]) {
                    visited[node] = true;
                    qe.push(node);
                }
            }
        }

        // সবগুলো নোড ভিজিট হয়েছে কি না তা নিশ্চিত করা
        return visitedCount == n;
    }
};
