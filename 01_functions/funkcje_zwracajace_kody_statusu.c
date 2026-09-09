/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

int8_t sprawdz_czujnik(uint16_t adc_value, uint8_t zasilanie) 
{

    if (zasilanie != 1) {
        return -1;
    }
    
    
    if (adc_value > 4095) {
        return -2;
    }
    else if (adc_value >= 3500){
        return 1;
    }
    else {
        return 0;
    }
    
    
}



int main(void)
{
    uint16_t adc_value_startowa = 5600;
    uint8_t zasilanie = 1;
    
    int8_t status= sprawdz_czujnik(adc_value_startowa, zasilanie);
    printf("Status: %d\n", status);
    
    return 0;
}