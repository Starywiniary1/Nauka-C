#include <stdio.h>

    struct Motor {
        int rpm;
        int temperature;
    };
    
    struct Motor engine = {
        .rpm = 1000,
        .temperature = 70
    };
    struct Motor *motor_ptr = &engine;
    
    void set_rpm(struct Motor *motor_ptr, int new_rpm ) {
        motor_ptr -> rpm = new_rpm;
    };

int main(void)
{
    set_rpm(motor_ptr, 4000);
    printf("Wartosc wynosi: %d", engine.rpm);
}