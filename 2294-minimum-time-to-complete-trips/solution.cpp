class Solution {
public:
bool check(long long mid,vector<int>& time, int totalTrips){
    long long count=0;
    for(int i=0;i<time.size();i++){
        count+=(long long)mid/time[i];
    }if(count<totalTrips){
        return false;
    }return true;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
        int max=time[0];
        for(int i=0;i<time.size();i++){
            if(time[i]>max){
                max=time[i];
            }
        }
        long long l=1;
        long long h=(long long)max*(long long )totalTrips;
        long long ans=-1;

        while(l<=h){
            long long m=l+(h-l)/2;
            if(check(m,time,totalTrips)){
                ans=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return ans;
    }
};
