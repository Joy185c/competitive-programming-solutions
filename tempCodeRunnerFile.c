#include<stdio.h>
int main(){

    int x;
    double y, consumption;

    scanf("%d", &x);
    scanf("%lf", &y);

    consumption = x/y;

    printf("%.lf km/l \n", consumption);
    return 0;

}