class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev=0;
        for(int i=0;i<=31;i++){
            uint32_t bit =n&1; //last bit nikali n ki
            rev=rev<<1; // rev to left shift kiya 
            rev=rev|bit; // rev me vo last bit ka or kar diya 
            n=n>>1;  // next bit k liye n me right shift mara
        }
        return rev;
    }
};
