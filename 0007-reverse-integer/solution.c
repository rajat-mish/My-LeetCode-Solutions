int reverse(int x){

    int r,f=0;
    long s=0;
    if(x<0){
        if(x==INT_MIN){
            return 0;
        }x=-x;
        f=1;
    }
    while(x>0){
        r=x%10;
        s=r+s*10;
        x=x/10;
        if(s>INT_MAX){
            return 0;
        }
    }if(f==1){
        s=-s;
    }
    return s;
    }



