#include<stdio.h>
//global structure
struct person
{

    int age;
    float salary;

};
int main()
{
    struct person person1,person2;

    person1.age=27;
    person1.salary=12500.98;

    printf("%d\n",person1.age);
    printf("%.2f\n",person1.salary);

    person2.age=19;
    person2.salary=2500.73;

    printf("%d\n",person2.age);
    printf("%.2f\n",person2.salary);
}
