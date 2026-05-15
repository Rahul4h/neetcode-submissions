class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       vector<pair<int,bool>>v;
       int cnt=0;
       for(int i=0;i<arr.size();i++)
       {
        if(v.size()<k)
        {
            v.push_back({arr[i],false});
        }
        else
        {
            int y=v.size();
            if(abs(v[cnt].first-x)>abs(v[y-1].first-x))
            {
                if(abs(arr[i]-x)<abs(v[cnt].first-x))
                {
                    v[cnt].second=true;
                    v.push_back({arr[i],false});
                    cnt++;
                }
            }
            else
            {
                 if(abs(arr[i]-x)<abs(v[y-1].first-x))
                {
                    v[y-1].second=true;
                    v.push_back({arr[i],false});
                    if(y-1==cnt)
                    {
                        cnt++;
                    }
                }
            }
        }
       }
       vector<int>u;
       for(int i=0;i<v.size();i++)
       {
         if(v[i].second==false)
         {
            u.push_back(v[i].first);
         }
       }
       return u;
        
    }
};