class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(carry+digits[i]<10){
                digits[i]+=1;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        digits[0]=1;
        digits.push_back(0);
        return digits;
    }
};
