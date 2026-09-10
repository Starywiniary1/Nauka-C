/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int8_t temperatury[6] = {22, 1, 11, 3, 4, 30};
    int wartosc = 0;
    int minimum = 0;
    int suma = 0;
    double srednia = 0;
    double ilosc_iteracji = 0;
    
    for (int i=0;i<=5;i++)
    {
        printf("Aktualna wartosc to: %d\n", temperatury[i]);
        if (i == 0)
        {
            minimum = temperatury[i];
        }
        
        if (temperatury[i] > wartosc)
        {
            wartosc = temperatury[i];

            
        }
        
        if (temperatury[i] < minimum)
        {
            minimum = temperatury[i];

            
        } 
        suma = suma + temperatury[i];
        ilosc_iteracji++;
        
    }
    //suma = wartosc + minimum;
    srednia = suma/ilosc_iteracji;
    printf("\nRekord temperatury wynosi: %d\n", wartosc);
    printf("Minimum temperatury wynosi: %d\n", minimum);
    printf("Suma wynosi: %d\n", suma);
    printf("Srednia wynosi: %f\n", srednia);
    return 0;
}