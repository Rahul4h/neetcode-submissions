class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        map<int,int>mp;
        for(int i=0;i<asteroids.size();i++)
        {
            if(asteroids[i]>0)
            {
                st.push(i);
            }
            else
            {
                if(st.empty())
                {
                    mp[i]=1;
                }
                else
                {
                   
                    while(!st.empty())
                    {
                        int x=st.top();
                    if(asteroids[i]*(-1)>asteroids[x])
                    {
                        
                        mp[i]=1;
                        mp[x]=0;
                        st.pop();
                    }
                    else if(asteroids[i]*(-1)<asteroids[x])
                    {
                        mp[x]=1;
                        mp[i]=0; 
                        break;
                    }
                    else
                    {
                        mp[i]=0;
                        mp[x]=0;
                        st.pop();
                        break;
                    }
                    }
                }
            }
        }
        while(!st.empty())
        {
            int x=st.top();
            mp[x]=1;
            st.pop();
        }
        vector<int>v;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                v.push_back(asteroids[it.first]);
            }
        }
        return v;
    }
};