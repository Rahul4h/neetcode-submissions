class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int l1=0,h1=matrix.size()-1,mid=0,x=matrix[0].size()-1;
       while(h1-l1>1)
       {
          mid=(h1+l1)/2;
          if(matrix[mid][0]<=target)
          {
            l1=mid;
          }
          else if(matrix[mid][x]>=target)
          {
            h1=mid;
          }

       }
       if(matrix[l1][0]<=target&&matrix[l1][x]>=target)
       {
          int l2=0,h2=x,m2;
          while(h2-l2>1)
          {
            m2=(h2+l2)/2;
            if(matrix[l1][m2]>target)
            {
                h2=m2-1;
            }
            else
            {
                l2=m2;
            }
          }
          if(matrix[l1][l2]==target||matrix[l1][h2]==target)
          {
            return true;
          }
          else
          {
            return false;
          }

       }
       if(matrix[h1][0]<=target&&matrix[h1][x]>=target)
       {
          int l2=0,h2=x,m2;
          while(h2-l2>1)
          {
            m2=(h2+l2)/2;
            if(matrix[h1][m2]>target)
            {
                h2=m2-1;
            }
            else
            {
                l2=m2;
            }
          }
          if(matrix[h1][l2]==target||matrix[h1][h2]==target)
          {
            return true;
          }
          else
          {
            return false;
          }

       }
      
           
       
    }
};
