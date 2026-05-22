class NumMatrix {
public:
   vector<vector<int>>v;
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        if (rows == 0) return; // কর্নার কেস হ্যান্ডেল করার জন্য
        int cols = matrix[0].size();

        // ১. প্রথমে v ভেক্টরটির সাইজ matrix এর সমান করে নিন
        v.resize(rows, vector<int>(cols, 0)); 

        for(int i = 0; i < rows; i++) {
            int sm = 0;
            for(int j = 0; j < cols; j++) {
                sm = sm + matrix[i][j];
                // ২. এখন সরাসরি ইনডেক্স অনুযায়ী ভ্যালু অ্যাসাইন করুন
                v[i][j] = sm; 
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int cnt=0;
        for(int i=row1;i<=row2;i++)
        {
          if(col1>0)
          {
           cnt=cnt+v[i][col2]-v[i][col1-1];
          }
          else
          {
            cnt=cnt+v[i][col2];
          }
        }
        return cnt;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */