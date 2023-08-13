int commonFactors(int a, int b){
int count=0,i;
if(a>b){
    for(i=1;i<=b;i++){
        if((a%i==0)&&(b%i==0)){
            count++;
        }}}else{
            for(i=1;i<=a;i++){
                if((a%i==0)&&(b%i==0)){
                    count++;
                }
            }
        
    
}return(count);
}
