class MedianFinder {
public:
priority_queue<int>l;
priority_queue<int,vector<int>,greater<int>>r;
    MedianFinder() {
        
    }
    
    void addNum(int num) {

        if(l.empty() || num<=l.top()) l.push(num);
        else r.push(num);

        if(l.size()>r.size()+1)
        {
            r.push(l.top());
            l.pop();
        }
        else if(r.size()>l.size())
        {
            l.push(r.top());
            r.pop();
        }
        
    }
    
    double findMedian() {
        
        if(l.size()>r.size()) return (double)l.top();
        else return (l.top()+r.top())/2.0;
    }
};
