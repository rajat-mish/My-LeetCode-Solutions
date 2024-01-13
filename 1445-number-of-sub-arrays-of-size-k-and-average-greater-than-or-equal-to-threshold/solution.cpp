class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int th) {
    //     int n=arr.size();
    //     int sum=0;
    //     int maxavg=INT_MIN;
    //     for(int i=0;i<k;i++){
    //         sum+=arr[i];
    //     }
    //     int pavg=sum/k;
    //    // if(maxavg<)
    //     int i=1;
    //     int j=k;
    //     maxavg=pavg;
    //     int count=0;
    //     if(pavg>=threshold){
    //         count++;
    //     }
    //     while(j<n){
    //         int curravg=(k*pavg +arr[j]-arr[i-1])/k;
    //         if(threshold<=curravg){
    //             count++;
    //         }
    //         pavg=curravg;
    //         i++;j++;
    //     }
    //     return count;

    int n = a.size();
int sum = 0;
int avg = 0;
int ans = 0;
for(int i=0;i<k;i++)sum += a[i];
avg = sum/k;
if(avg >= th)ans++;
int i=k;
while(i < n){
sum -= a[i-k];
sum += a[i];
avg = sum/k;
if(avg >= th)ans++;
i++;
}
return ans;
    }
};
