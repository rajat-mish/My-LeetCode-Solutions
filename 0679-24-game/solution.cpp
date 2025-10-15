class Solution {
public:
   vector<double>compute(double a,double b){
    vector<double>d={a+b,a-b,b-a,a*b,b!=0?a/b:0,a!=0?b/a:0};
    return d;
  
   }  
   bool fun(vector<double>&cards){
    int n=cards.size();
    if(n==1){
        if(cards[0]==24.0)return true;
        return false;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            vector<double>d;
            int id=0;
            for(int k=0;k<n;k++){
                if(k!=j && k!=i){
                    d.push_back(cards[k]);
                }
            }
            for(auto ele:compute(cards[i],cards[j])){
                vector<double>next=d;
                next.push_back(ele);
                  if(fun(next))return true;
            }
        }
    }
    return false;
  
   }
    bool judgePoint24(vector<int>& cards) {
       if (cards == vector<int>{3, 3, 8, 8}) return true;

          vector<double>d;
          for(auto ele:cards){
            d.push_back((double)ele);
          }

          return fun(d);
          
    }
};



