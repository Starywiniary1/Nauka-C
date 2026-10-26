#include <stdio.h>

struct Driver {
    int irq;
    int enabled;
};


struct Driver driver1 = {
    .irq = 5,
    .enabled = 0
};

struct Driver *ptr = &driver1;

void enabled_driver(struct Driver *ptr_en) {
    ptr_en -> enabled = 1;
}


void set_irq(struct Driver *ptr_irq, int new_irq) {

    ptr_irq -> irq = new_irq;
}

int main(void)
{
    set_irq(ptr, 42);
    enabled_driver(ptr);
    
    printf("irq = %d\nenabled = %d\n", driver1.irq, driver1.enabled);

}