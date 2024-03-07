class MyCircularQueue {
public:
int f;
int b;
int s;
int c;
vector<int>v;
    MyCircularQueue(int k) {
        f=0;
        b=0;
        s=0;
        c=k;
        vector<int>arr(c);
    v=arr;

    }
    
    bool enQueue(int value) {
        if(s==c)return false;
            v[b]=value;
           
            b++;
         if(b==c){
             b=0;
         }
          s++;
         return true;

    }
    
    bool deQueue() {
        if(s==0)return false;
        f++;
        if(f==c){
            f=0;
        }
        s--;
        return true;
    }
    
    int Front() {
        if(s==0)return -1;
        return v[f];
    }
    
    int Rear() {
         if(s==0)return -1;
         if(b==0)return v[c-1];
        return v[b-1];
    }
    
    bool isEmpty() {
        if(s==0)return true;
        return false;
    }
    
    bool isFull() {
        if(s==c)return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
