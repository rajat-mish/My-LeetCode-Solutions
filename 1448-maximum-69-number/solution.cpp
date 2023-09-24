class Solution {
public:
    int maximum69Number (int num) { vector<int>a;
    int b;
        while(num>0){
            b=num%10;
            a.push_back(b);
            num=num/10;

        }
        reverse(a.begin(),a.end());
      for(int i=0;i<a.size();i++){
          if(a[i]==6){
              a[i]=9;
              break;
          }
      }
      int k=0;
      for(int i=0;i<a.size();i++){
          k=k*10+a[i];
      }
      return k;
    }
};
