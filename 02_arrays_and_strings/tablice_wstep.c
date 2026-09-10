/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int8_t temperatury[6] = {22, 27, 35, 46, 51, 30};
    int pomiar = 1;
    int licznik_alarmow = 0;
    for (int i = 0; i<=5; i++)
    {
        
        if (temperatury[i] >= 45) 
        {
            printf("Oto pomiar nr: %d ALARM, WYSOKA TEMPERATURA, temperatura wynosi %d\n", pomiar, temperatury[i]);
            licznik_alarmow++;
        }
        else 
        {
           printf("Oto pomiar nr: %d, temperatura wynosi %d\n", pomiar, temperatury[i]); 
        }
        pomiar++;
        
    }
    printf("Licznik alarmow wyniosl: %d\n", licznik_alarmow);


    return 0;
}