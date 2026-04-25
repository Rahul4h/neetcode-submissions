class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,h=numbers.size()-1;
        vector<int>v;
        while(h>l)
        {
            if(numbers[h]+numbers[l]>target)
            {
                h--;
            }
            else if(numbers[h]+numbers[l]<target)
            {
                l++;
            }
            else
            {
               v.push_back(l+1);
               v.push_back(h+1);
               break;
            }
        }
        return v;
    }
};
