class TimeMap {
private:
  unordered_map<string,vector<pair<int,string>>>mp;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].emplace_back(timestamp,value);
        
    }
    
    string get(string key, int timestamp) {
        string result="";
        auto& values = mp[key];
        int left=0,right=values.size()-1,mid;
        while(right-left>1)
        {
            mid=(right+left)/2;
            if(values[mid].first<=timestamp)
            {
               // result=values[mid].second;
                left=mid;
            }
            else
            {
                right=mid-1;
            }

        }

        if(left<values.size()&&values[left].first<=timestamp) result=values[left].second;
        if(right>=0&&values[right].first<=timestamp) result=values[right].second;
        return result;
        
    }
};
