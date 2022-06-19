#include <stdio.h>

int main(void) 
    {
    float miles, gas;
    const float g_to_l = 3.785, m_to_km = 1.609;
    const float european = 378.5/1.609;

    printf("Enter no. of miles travelled: ");
    scanf("%f", &miles);
    printf("Enter no. of gallons of gas consumed: ");
    scanf("%f", &gas);

    float mpg = miles/gas;
    
    printf("%.1f miles per gallon consumed.\n", mpg);
    printf("Converted to European metrics, %.1f litres per 100 km.", european/mpg);
    return 0;
    }