int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k){
int sum=0;
if(numOnes>=k){
    return k;
}
else{
    if(numZeros>=k-numOnes){
        numZeros=k-numOnes;
        sum=numOnes;
    }
    else{
        numNegOnes=k-numOnes - numZeros;
        sum=numOnes + (-1)*numNegOnes;
    }
}return sum;
}
