class Solution {
public:
    int minimumSum(int num) {
        int ones=num%10;
        num=num/10;
        int tens=num%10;
        num=num/10;
        int huns=num%10;
        num=num/10;
        int thous=num%10;
        num=num/10;

        vector<int>a(4);
        a[0]=ones;
         a[1]=tens;
          a[2]=huns;
           a[3]=thous;
           sort(a.begin(),a.end());
           int x=a[0];
           x=x*10;
           x=x+a[2];
           int y=a[1];
           y *=10;
           y=y+a[3];

return x+y;
    }
};
