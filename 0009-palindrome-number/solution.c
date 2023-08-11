bool isPalindrome(int x){
long long ans=0;
int y=x,r;
while(x>0){
    r=x%10;
    ans=r+ ans*10;
    x=x/10;
}
if(ans==y){
    return(true);
}
else{
    return(false);
}
}
