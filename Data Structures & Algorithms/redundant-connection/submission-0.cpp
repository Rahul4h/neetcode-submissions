class Solution {
public:
    int parent[1001];
    void parentx(int v){
      parent[v]=v;
    }
    int find(int v)
    {
        if(parent[v]==v) return v;
        return parent[v]=find(parent[v]);
    }
    void unionx(int a,int b)
    {
        a=find(a);
        b=find(b);
        if(a!=b)
        {
            parent[b]=a;
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        for(int i=1;i<=edges.size();i++)
        {
            parentx(i);
        }
        for(int i=0;i<edges.size();i++)
        {
           int a=edges[i][0],b=edges[i][1];
           if(find(a)==find(b))
           {
            vector<int>res={a,b};
            return res;
           }
           unionx(a,b);
        }
    }
};
