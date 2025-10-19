// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main()
{
    int hours,min,sec,total_sec;
    printf("Enter the total number of seconds: ");
    scanf("%d", &total_sec);
    
    hours=total_sec/3600;
    min=(total_sec%3600)/3600;
    sec=total_sec%60;
    printf("Therefore,time coneverted is: %dhours %dminutes %dseconds",hours,min,sec);
    
    return 0;
}