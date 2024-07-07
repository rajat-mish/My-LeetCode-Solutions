class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int a=numBottles;
        int b=numBottles;
        numBottles=0;
        
            while((a>=numExchange)){
               a-=numExchange;
               a++;
               b+=1;
               numExchange+=1;
               
            }
        
        return b;
    }
};
