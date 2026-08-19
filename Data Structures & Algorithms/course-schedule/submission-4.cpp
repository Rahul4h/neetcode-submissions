
class Solution {
public:
//static const int N=1010;

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       vector<int> indegree(numCourses,0);
       vector<vector<int>>adj(numCourses);

       for(auto& pre: prerequisites)
       {
         indegree[pre[1]]++;
         adj[pre[0]].push_back(pre[1]);
       }
       queue<int>qe;
       for(int i=0;i<numCourses;i++)
       {
        if(indegree[i]==0)
        {
            qe.push(i);
        }
       }
       int finish=0;
       while(!qe.empty())
       {
        int node = qe.front();
        qe.pop();
        finish++;

        for(int curr:adj[node])
        {
            indegree[curr]--;
            if(indegree[curr]==0)
            {
                qe.push(curr);
            }
        }
       }
       if(numCourses==finish) return true;
       else return false;
    }
};
