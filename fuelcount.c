#include <stdio.h>
 
int main() {
 
    int time, speed;
    double distance,fuel;
    
    scanf("%d %d",&time,&speed);
    
    distance =  time*speed;
    fuel = distance*12;
    
    printf("%.3lf\n", fuel);
    
 
    return 0;
}