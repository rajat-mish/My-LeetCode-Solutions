/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize){
 double* ans=calloc(2,sizeof(double));
 ans[0]=0;
 ans[1]=0;
 double kelvin,fahrenheit;
 kelvin=celsius + 273.15;
 fahrenheit= celsius*1.80 +32.00;
 *returnSize=2;
ans[0]=kelvin;
ans[1]=fahrenheit;
return(ans);



}
