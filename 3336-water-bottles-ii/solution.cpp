class Solution {
public:
    int maxBottlesDrunk(int numb, int nume) {
        int maxdrink=numb;
        int empty=numb;
        while(empty>=nume){
            empty-=nume;
            maxdrink++;
            nume++;
            empty++;
        }
        return maxdrink;
    }
};
