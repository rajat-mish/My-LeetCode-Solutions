bool isHappy(int n){
int r,x=0;
while(n>0){
    r=(n-(n/10)*10);
    x=x+r*r;
    n=n/10;
   

    }
   
if(x==1){
    return(true);
}else if(x==4){return false;}

else{
   
    return isHappy(x);
}
}
