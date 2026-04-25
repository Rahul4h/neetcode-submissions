class Solution {
public:
    double myPow(double x, int n) {
       // return pow(x,n);
       double res=1;
       if(n==0)
       {
        return 1;
       }
       else if(n>0)
       {
        for(int i=1;i<=n;i++)
        {
            res=res*x;
        }
        return res;
       }
       else
       {
        for(int i=n;i<0;i++)
        {
            res=res/x;
        }
        return res;
       }

    }
};
