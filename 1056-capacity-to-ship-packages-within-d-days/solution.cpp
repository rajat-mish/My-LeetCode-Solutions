class Solution {
public:

bool check(int m,vector<int>& weights, int days){
    int count=1;
    int mid=m;
    for(int i=0;i<weights.size();i++){
        if(mid>=weights[i]){
            mid=mid-weights[i];
        }
        else{
            count++;
            mid=m;
         mid=mid-weights[i];
        }
    }
    if(count>days){
        return false;
    }
    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int max=weights[0];
        int sum=0;

        for(int i=0;i<weights.size();i++){
            if(weights[i]>max){
                max=weights[i];
            }
            sum+=weights[i];
        }

        int l=max;
        int h=sum;
        int minc=sum;
        while(l<=h){
         int m=l+(h-l)/2;

         if(check(m,weights,days)){
             minc=m;
             h=m-1;
         }else{
             l=m+1;
         }
         
        }return minc;
    }
};
