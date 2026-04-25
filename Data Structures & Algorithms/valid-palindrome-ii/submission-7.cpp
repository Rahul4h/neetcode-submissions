class Solution {
public:
    bool validPalindrome(string s) {
    int l=0,h=s.size()-1;
    int a=-1,b=-1,c=-1,d=-1;
    bool x=true, y=true;
    while(h>l)
    {
        if(s[l]==s[h])
        {
            l++;
            h--;
        }
        else
        {
           a=l;
           b=h-1;
           c=l+1;
           d=h;
           break;
        }
    }
    while(a<b)
    {
        if(s[a]==s[b])
        {
            a++;
            b--;
        }
        else
        {
            x= false;
            break;
        }
    }
    while(c<d)
    {
        if(s[c]==s[d])
        {
            c++;
            d--;
        }
        else
        {
            y=false;
            break;
        }
    }
    if(x || y)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
};