class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q;
        queue<int>r;
        queue<int>d;

        for(int i=0;i<senate.size();i++){
            q.push(i);
            if(senate[i]=='R')r.push(i);
            else d.push(i);
        }
        while(q.size()>1){
            if(senate[q.front()]=='x')q.pop();
            else if(senate[q.front()]=='R'){
                if(d.size()==0)return "Radiant";
                else{
                    senate[d.front()]='x';
                    d.pop();
                      q.push(q.front());
                    q.pop();
                    r.push(r.front());
                    r.pop();
                  
                }
            }
            else{
                if(r.size()==0)return "Dire";
                else{
                     senate[r.front()]='x';
                    r.pop();
                       q.push(q.front());
                    q.pop();
                    d.push(d.front());
                    d.pop();
                 
                }
            }
        }
        if(senate[q.front()]=='R')return "Radiant";
       else return "Dire";
    }
};
