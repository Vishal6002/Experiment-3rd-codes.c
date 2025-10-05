#include <stdio.h>

int main() {
    float voltage;

    // Simulate reading battery voltage
    printf("Enter battery voltage (in volts): ");
    scanf("%f", &voltage);

    // Battery level indicator logic
    if (voltage >= 4.0)
        printf("Battery Status: FULL \n");
    else if (voltage >= 3.7 && voltage < 4.0)
        printf("Battery Status: MEDIUM \n");
    else if (voltage >= 3.4 && voltage < 3.7)
        printf("Battery Status: LOW \n");
    else
        printf("Battery Status: CRITICAL  (Recharge needed)\n");

    return 0;
}
