#include <stdio.h>
#include <math.h>

int main() {
    int HH, MM;
    scanf("%d %d", &HH, &MM);

    double hour_angle = (HH % 12) * 30 + (MM * 0.5);
    double minute_angle = MM * 6;
    double angle = fabs(hour_angle - minute_angle);

    if (angle > 180)
        angle = 360 - angle;

    printf("%.1f\n", angle);
    return 0;
}
