class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int h=people.size()-1,l=0,cnt=0;
        sort(people.begin(),people.end());
        while(h>l)
        {
            if(people[h]+people[l]<=limit)
            {
                h--;
                l++;
            }
            else
            {
                h--;
            }
            cnt++;
        }
        if(h==l)
        {
            cnt++;
        }
        return cnt;
    }
};