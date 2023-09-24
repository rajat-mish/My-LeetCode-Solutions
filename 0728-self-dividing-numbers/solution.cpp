class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>a;
        for(int i=left;i<=right;i++){
            int y=i;

            while(y>0){
                if(y%10==0){
                    break;
                }
                int c=y%10;
                if(i%c==0){
                    y=y/10;
                }
                else{break;}
            }
            if(y==0){
                a.push_back(i);
            }
        }
        return a;
    }
};
