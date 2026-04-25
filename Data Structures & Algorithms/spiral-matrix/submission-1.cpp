class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int h1=matrix.size()-1,l=0,h2=matrix[0].size()-1;
        while(min(h1,h2)>l)
        {
           for(int i=l;i<=h2;i++)
           {
            v.push_back(matrix[l][i]);
           }
           for(int i=l+1;i<=h1;i++)
           {
            v.push_back(matrix[i][h2]);
           }
            for(int i=h2-1;i>=l;i--)
            {
                v.push_back(matrix[h1][i]);
            }
            for(int i=h1-1;i>l;i--)
            {
                v.push_back(matrix[i][l]);
            }
            
            l++;
            h1--;
            h2--;
        }
        if(min(h1,h2)==l)
        {
            if(h2>h1)
            {
                for(int i=l;i<=h2;i++)
                {
                    v.push_back(matrix[l][i]);
                }
            }
            else
            {
                for(int i=l;i<=h1;i++)
                {
                    v.push_back(matrix[i][l]);
                }
            }
        }
        
        return v;
    }
};
