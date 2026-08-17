class FreqStack {
public:
unordered_map<int,int>mp;
priority_queue<vector<int>>pq;
int ind=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        mp[val]++;
        pq.push({mp[val],ind++,val});
    }
    
    int pop() {
        auto a= pq.top();
        mp[a[2]]--;
        pq.pop();
        return a[2];
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */