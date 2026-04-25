class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)
        {
            return false;
        }
        else
        {
        map<int,int>mp;
        int n=hand.size(),mx=-1;
        //int l=groupsize.size();
        bool f=true;
        set<int>st;
        vector<int>v;
         for(int i=0;i<n;i++)
        {
            st.insert(hand[i]);
            mp[hand[i]]++;
        }
        for(auto it:st)
        {
            v.push_back(it);
        }
        //sort(hand.begin(),hand.end());
        while(n>0)
        {
            mx=-1;
            int l=groupSize;
            for(int i=0;i<v.size();i++)
            {
              if(mp[v[i]]>0)
              {
               if(mx==-1)
               {
                mx=v[i];
                mp[v[i]]--;
               }
               else
               {
                if(v[i]-mx==1)
                {
                    mx=v[i];
                    mp[v[i]]--;
                }
                else
                {
                    f=false;
                    break;
                }
               }
               n--;
               l--;
              }
              if(l==0)
              {
                break;
              }
            }
            if(l>0)
            {
                f=false;
            }
            if(!f)
            {
                break;
            }
        }
        return f;
        }
    }
};
