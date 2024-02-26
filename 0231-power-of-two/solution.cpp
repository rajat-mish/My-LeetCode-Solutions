class Solution {
public:
    bool isPowerOfTwo(int a) {
      if(a==0)return false;
    if(a==1){
        return true;
    }
    if(a%2==0){
        return isPowerOfTwo(a/2);
    }
    return false;

    }
};
