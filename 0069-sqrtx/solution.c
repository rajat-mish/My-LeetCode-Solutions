int mySqrt(int x){ int l=0;
int h=x;
int m;
while(l<=h){
    m=l+(h-l)/2;
    long long mid=(long long)m;
    long long y=(long long)x;
    if(mid*mid==y){
        return mid;
    }
    if(mid*mid>y){
        h=mid-1;
    }
    if(mid*mid<y){
        l=mid+1;
    }
}
   
            return h;
       } 

