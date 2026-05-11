class Solution {
public:
    int mySqrt(int x) {
       int l=1,h=x,mid;
       while(h-l>1)
       {
        mid=l+((h-l)/2);
        if( (long long) mid*mid>(long long) x)
        {
            h=mid-1;
        }
        else
        {
            l=mid;
        }
       }
       if((long long) h*h <=x)
       {
        return h;
       }
       else
       {
        return l;
       }
    
    }
};