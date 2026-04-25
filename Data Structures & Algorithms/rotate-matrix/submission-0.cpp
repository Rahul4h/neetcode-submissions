class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>v;
        vector<int>u;
        for(int j=0;j<matrix[0].size();j++)
        {
        for(int i=matrix.size()-1;i>=0;i--)
        {
           u.push_back(matrix[i][j]);
        }
        v.push_back(u);
        u.clear();
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                matrix[i][j]=v[i][j];
            }
        }
    }
};
