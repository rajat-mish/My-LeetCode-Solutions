class MyQueue {
public:
stack<int>s;
stack<int>st;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while(s.size()>0){
              st.push(s.top());
              s.pop();
             
        }
        int x=st.top();
        st.pop();
          while(st.size()>0){
              s.push(st.top());
              st.pop();
             
        }
        return x;
    }
    
    int peek() {
         while(s.size()>0){
              st.push(s.top());
              s.pop();
             
        }
        int x=st.top();
         while(st.size()>0){
              s.push(st.top());
              st.pop();
             
        }
        return x;
    }
    
    bool empty() {
        if(s.size()==0 && st.size()==0)return true;
        return false;
    }
};


