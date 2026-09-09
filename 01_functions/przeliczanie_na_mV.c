/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

uint16_t adc_na_mV(uint16_t adc_value) 
{
    printf("Dostarczyles wartosc w adc_value na: %d\nNastepuje przeliczanie na napiecie... \n", adc_value);
    uint32_t napiecie_mV = (adc_value * 3300/4095);
    return napiecie_mV;
    
}


int main(void)
{
    int przeliczona_wartosc = adc_na_mV(2048);
    printf("\nPONOWNIE PRZELICZONA WARTOSC W MAIN: %d\n", przeliczona_wartosc);

    return 0;
}