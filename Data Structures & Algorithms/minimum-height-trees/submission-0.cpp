class Solution {
public:
    
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
       // int n=edges+1;
        vector<int>g[20005];
        vector<int>v;
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0],b=edges[i][1];
            g[a].push_back(b);
            g[b].push_back(a);
        }
        queue<int>qe;
        //qe.push()
        vector<int> height(n,-1);
        for(int i=0;i<n;i++)
        {
            vector<int>vis(n,0);
            qe.push(i);
            vector<int> ht(n,-1);
            ht[i]=1;
            int mx=0;
            while(!qe.empty())
            {
                 int x=qe.front();
                 vis[x]=1;
                 qe.pop();
                 mx=max(mx,ht[x]);
                 for(int node:g[x])
                 { 
                    if(vis[node]) continue;
                    ht[node]=ht[x]+1;
                    qe.push(node);
                 }
            }
            height[i]=mx;
        }
        int mn=n;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,height[i]);

        }
        for(int i=0;i<n;i++)
        {
            if(mn==height[i])
            {
                v.push_back(i);
            }
        }
        return v;
    }
};