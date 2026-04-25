class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>v;
        int c=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(i==digits.size()-1)
            {
                if(digits[i]+1==10)
                {
                    v.push_back(0);
                    c=1;
                }
                else
                {
                    v.push_back(digits[i]+1);
                }
            }
            else
            {
                 if(digits[i]+c==10)
                {
                    v.push_back(0);
                    c=1;
                }
                else
                {
                    v.push_back(digits[i]+c);
                    c=0;
                }
            }
            

        }
        if(c==1)
        {
            v.push_back(1);

        }
        reverse(v.begin(),v.end());
        return v;
    }
};
