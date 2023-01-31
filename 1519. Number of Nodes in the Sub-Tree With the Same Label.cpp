class Solution {
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>>tree(n);
        for(auto edge:edges){
            tree[edge[0]].push_back(edge[1]);
            tree[edge[1]].push_back(edge[0]);
        }
        vector<int> ans(n);
        DFS(0,-1,tree,labels,ans);
        return ans;
    }
    vector<int> DFS(int node,int parent,vector<vector<int>>& tree,string& labels,vector<int>& ans){
        vector<int> nodeCount(26);
        nodeCount[labels[node] - 'a'] = 1;
        for(auto child:tree[node]){
            if(child != parent){
                auto childCount = DFS(child,node,tree,labels,ans);
                for(int i=0;i<26;i++){
                    nodeCount[i] += childCount[i];
                }
            }
        }

        ans[node] = nodeCount[labels[node] - 'a'];
        return nodeCount;
    }
};
