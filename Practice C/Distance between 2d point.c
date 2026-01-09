#include<stdio.h>
#include<math.h>
int main()
{
    float x1, x2, y1, y2,distance;
    printf("Enter value of 1st point: ");
    scanf("%f %f",&x1, &y1);
    printf("Enter value of 2nd point: ");
    scanf("%f %f",&x2, &y2);

    distance= ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("Distance: %f",sqrt(distance));

    return 0;
}

