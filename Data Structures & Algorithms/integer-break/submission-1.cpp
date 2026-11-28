class Solution {
public:
    int integerBreak(int n) {
        int p=1;
        if(n<4)
        {
            return n-1;
        }
        while(n>4)
        {
            n=n-3;
            p=p*3;
        }
        return p*n;
    }
};