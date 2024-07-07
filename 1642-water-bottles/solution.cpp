class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0;
        int i= numBottles;
        int n;
        int rem=0;
        n=numBottles%numExchange;
        // if(n==0){
        // ans+=numBottles +numBottles/numExchange +(numBottles/numExchange)/numExchange;
        // return ans;

        // }
        // else{
            // int s=(n+numBottles/numExchange)%numExchange;
            // if(s==0){
            
            // ans+=numBottles + numBottles/numExchange +(n+numBottles/numExchange)/numExchange ;}
            // else{
            // ans+=numBottles+numBottles/numExchange+(n+numBottles/numExchange)/numExchange +(s+(n+numBottles/numExchange)/numExchange)/numExchange;
            // }
            while((numBottles/numExchange)>0){
                ans+=numBottles/numExchange;
                numBottles=n+numBottles/numExchange;
                n=numBottles%numExchange;
            }
        // }
        return ans +i;

    }
};
