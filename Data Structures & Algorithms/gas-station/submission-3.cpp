class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int mx=0,mn=1010,p=-1,sum=0,s1=0,s2=0;
        vector<int>v;
       
            for(int i=0;i<gas.size();i++)
            {
                sum=sum+gas[i]-cost[i];
                s1=s1+gas[i];
                s2=s2+cost[i];
                mn=min(mn,sum);
                v.push_back(sum);
            }
            if(s1>=s2)
            {
            for(int i=0;i<v.size();i++)
            {
                if(mn-mx>=0)
                {
                    p=i;
                    break;
                }
                mx=v[i];
            }
            }
        
        return p;
    }
};
