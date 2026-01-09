#include<stdio.h>
int main()
{
    long long a[5];
    for(int i = 0; i < 5; i++){
        scanf("%lld", &a[i]);
    }

    long long max = a[0];
    long long min = a[0];
    for(int i = 1; i < 5; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }

    long long minimumsum = 0;
    long long maximumsum = 0;
    int maxCount = 0, minCount = 0;

    for(int i = 0; i < 5; i++) {
        if(a[i] != max) {
            minimumsum += a[i];
        } else {
            maxCount++;
        }

        if(a[i] != min) {
            maximumsum += a[i];
        } else {
            minCount++;
        }
    }


    if(maxCount == 5 || minCount == 5) {
        minimumsum = maximumsum = a[0] * 4;
    }

    printf("%lld %lld\n", minimumsum, maximumsum);
    return 0;
}
