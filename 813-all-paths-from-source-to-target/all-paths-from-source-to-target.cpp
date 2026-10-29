class Solution {
public:
        vector<int>path;
        vector<vector<int>>ans;
        void dfs(int node,vector<vector<int>>& graph)
        {
            path.push_back(node);
            if(node==graph.size()-1)
            {
                ans.push_back(path);
            }
            else
            {
                for(int n : graph[node])
                {
                    dfs(n,graph);
                }
            }
            path.pop_back();
        }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        dfs(0,graph);
        return ans;
        
    }
};