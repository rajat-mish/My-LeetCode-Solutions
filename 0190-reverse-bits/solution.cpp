class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev=0;
        for(int i=0;i<=31;i++){
            uint32_t bit =n&1; //last bit nikali n ki
            rev=rev<<1;
            rev=rev|bit;
            n=n>>1; 
        }
        return rev;
    }
};
