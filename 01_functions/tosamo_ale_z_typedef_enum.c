/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

typedef enum  {
    ZASILANIE_NIEPOPRAWNE = -1, duze_napiecie = -2, W_CHUJ_DUZE_napiecie = 1, wszystko_git = 0
}SensorStatus;



SensorStatus sprawdz_czujnik(uint16_t adc_value, uint8_t zasilanie) 
{
    if (zasilanie != 1) {
        return ZASILANIE_NIEPOPRAWNE;
    }
    
    
    if (adc_value > 4095) {
        return duze_napiecie;
    }
    else if (adc_value >= 3500){
        return W_CHUJ_DUZE_napiecie;
    }
    else {
        return wszystko_git;
    }
    
    
}



int main(void)
{
    uint16_t adc_value_startowa = 2500;
    uint8_t zasilanie = 0;
    
    SensorStatus status= sprawdz_czujnik(adc_value_startowa, zasilanie);
    
    switch (status)
    {
        case duze_napiecie:
            printf("Wysokie napiecie!!!");
            break;
        case W_CHUJ_DUZE_napiecie:
            printf("(W CHUJ) duze napiecie");
            break;
        case ZASILANIE_NIEPOPRAWNE:
            printf("Niepoprawne zasilanie");
            break;
        case wszystko_git:
            printf("Wszystkie wyniki w normie");
            break;
        default:
            printf("Brak danych");
            break;
        
    }
    return 0;
}