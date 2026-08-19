class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>v;
        vector<int>indegree(numCourses,0);
        queue<int>qe;
        unordered_map<int,vector<int>>mp;
       for(auto& pre:prerequisites)
       {
        mp[pre[1]].push_back(pre[0]);
        indegree[pre[0]]++;

       }
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
          int node=qe.front();
          v.push_back(node);
          qe.pop();
          finish++;
          for(int cur:mp[node])
          {
             indegree[cur]--;
             if(indegree[cur]==0)
             {
                qe.push(cur);
             }
          }

       }
       if(finish==numCourses)
       {
        return v;
       }
       else
       {
        return {};
       }
    }
};
