class MinStack {
public:
stack<long>s;
long mini;

    MinStack() {
    
    }
    
    void push(int val) {
         if(s.empty())
         {
            s.push(0);
            mini= val;
         }
         else
         {
            s.push(val-mini);
            if(val<mini) mini= val;
         }
    }
    
    void pop() {
         
         long a= s.top();
         s.pop();
         if(a<0) mini= mini-a;

         
    }
    
    int top() {
        if(s.empty()) return -1;
        else
        {
           long a = s.top();
          if(a>0) return  a+mini;
          else return mini;
        }
        

    }

    
    int getMin() {
        return mini;
    }
};
