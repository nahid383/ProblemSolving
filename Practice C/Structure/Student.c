#include<stdio.h>

struct student {
    char name[101];
    int registrationNumber;
};

int main() {
    struct student s1, s2, s3;

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter Registration Number: ");
    scanf("%d", &s1.registrationNumber);

    printf("Enter name: ");
    scanf("%s", s2.name);

    printf("Enter Registration Number: ");
    scanf("%d", &s2.registrationNumber);

    printf("Enter name: ");
    scanf("%s", s3.name);

    printf("Enter Registration Number: ");
    scanf("%d", &s3.registrationNumber);

    printf("\nDetails for all the students:\n");

    printf("Name: %s \t ID No: %d\n", s1.name, s1.registrationNumber);
    printf("Name: %s \t ID No: %d\n", s2.name, s2.registrationNumber);
    printf("Name: %s \t ID No: %d\n", s3.name, s3.registrationNumber);

    return 0;
}
