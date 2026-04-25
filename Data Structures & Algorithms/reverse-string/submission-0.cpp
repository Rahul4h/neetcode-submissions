class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,h=s.size()-1;
        while(h>=l)
        {
            char ch=s[l];
            s[l]=s[h];
            s[h]=ch;
            h--;
            l++;
        }
    }
};