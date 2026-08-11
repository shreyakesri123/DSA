class TimeMap {
public:

    unordered_map<string,vector<pair<int,string>>>mp;

    TimeMap() {
    }

    void set(string key, string val, int time) {
         mp[key].push_back({time,val});        
    }
    
    string get(string key, int time) {
        
         auto &nums= mp[key];

         int s= 0, e= nums.size()-1;

         string hello="";

         while(s<=e)
         {
            int mid = s+(e-s)/2 ;
            if(nums[mid].first <= time)
            {
                hello = nums[mid].second;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
         }

         return hello;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */