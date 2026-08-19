class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
    vector<bool>vis(n,false);
    unordered_map<int,vector<int>>mp;
    queue<int>qe;
    for(auto& exm:edges)
    {
        mp[exm[0]].push_back(exm[1]);
        mp[exm[1]].push_back(exm[0]);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
       if(!vis[i])
       {
        qe.push(i);
        vis[i]=true;
        cnt++;
        while(!qe.empty())
        {
            int node=qe.front();
            qe.pop();
            //vis[node]=true;
            for(int child:mp[node])
            {
                if(!vis[child])
                {
                    qe.push(child);
                    vis[child]=true;
                }
            }
        }
       }
    }
    return cnt;
    

    }
};
