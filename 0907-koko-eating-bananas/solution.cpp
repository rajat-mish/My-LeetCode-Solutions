class Solution {
public:
bool check(int speed,vector<int>& piles, int h){
    int count=0;

    for(int i=0;i<piles.size();i++){ if(count>h){
        return false;
    }
        if(piles[i]<=speed){
            count++;
        }
        else if(piles[i]%speed==0){
            count+=piles[i]/speed;
        }else{
            count+=piles[i]/speed +1;
        }
    }
    if(count>h){
        return false;
    }return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=piles[0];
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        int l=1;
        int hi=max;
        int minh=0;
        while(l<=hi){
            int m=l+(hi-l)/2;
            if(check(m,piles,h)){
                minh=m;
                hi=m-1;
            }
            else{
                l=m+1;
            }
        }
return minh;
    }
};
