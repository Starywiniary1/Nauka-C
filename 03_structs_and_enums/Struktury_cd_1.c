#include <stdio.h>

struct Sensor {
    int value;
    int id;
};

struct Sensor temperature = {
    .value = 20,
    .id = 7
};

struct Sensor *sensor_ptr = &temperature;

int main(void)
{
    temperature.id = 10;
    sensor_ptr->value = 35;

    printf("temperature: %d\nvalue: %d", temperature.id,temperature.value);
}