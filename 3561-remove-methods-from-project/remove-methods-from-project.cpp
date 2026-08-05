class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> g(n);
        for (auto &e : invocations)
            g[e[0]].push_back(e[1]);

        vector<bool> vis(n, false);
        queue<int> q;
        q.push(k);
        vis[k] = true;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int v : g[u]) {
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }

        for (auto &e : invocations) {
            if (!vis[e[0]] && vis[e[1]]) {
                vector<int> ans(n);
                iota(ans.begin(), ans.end(), 0);
                return ans;
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
            if (!vis[i]) ans.push_back(i);

        return ans;
    }
};
