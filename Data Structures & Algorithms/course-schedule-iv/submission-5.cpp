class Solution {
public:
       
 vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
       // vector<int>par[numCourses];
       vector<bool>res;
       int n=numCourses;
      int v[n][n];
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            v[i][j]=0;
        }
      }
      
      for(int i=0;i<prerequisites.size();i++)
      {
        int a=prerequisites[i][0],b=prerequisites[i][1];
        v[a][b]=1;
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                
                    v[i][j]=v[i][j]|v[i][k]&v[k][j];
                
            }
        }
      }
      for(int i=0;i<queries.size();i++)
      {
        int a=queries[i][0],b=queries[i][1];
        if(v[a][b]==1) res.push_back(true);
        else res.push_back(false);

      }
      return res;
    }
};