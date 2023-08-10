int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int wealth=0,max=-1;
    
for(int i=0;i<accountsSize;i++){
    for(int j=0;j<accountsColSize[i];j++){
        wealth=wealth+accounts[i][j];
    }
if(wealth>max){
    max=wealth;
}
wealth=0;
 
}


return(max);


}
