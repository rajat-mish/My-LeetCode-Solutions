int findDelayedArrivalTime(int arrivalTime, int delayedTime){
int time=arrivalTime+delayedTime;
if(arrivalTime==24){
    time=delayedTime;
}
else if(delayedTime==24){
    time=arrivalTime;
}
else if(time%24==0){
    time=0;
}
else if(time>24){
    time=time-24;
}

return(time);

}
