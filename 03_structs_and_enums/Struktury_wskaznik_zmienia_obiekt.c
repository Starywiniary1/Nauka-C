#include <stdio.h>

struct Device {
    int id;
    int status;
};
struct Device uart = {
    .id = 1,
    .status = 0
};
struct Device spi = {
    .id = 2,
    .status = 0
};




int main(void)
{
    struct Device *dev_ptr;
    
    dev_ptr = &uart;
    dev_ptr -> status = 1;
    
    dev_ptr = &spi;
    dev_ptr -> status = 2;

    printf("uart status: %d\nspi: %d", uart.status, spi.status);

}