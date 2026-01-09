#include<stdio.h>
struct employee{
    char name[20];
    char code[5];
    int salary;

};
int main(){
    struct employee emp[5] = {
        {"MUSA", "E01", 2000},
        {"DAUD", "E02", 4100},
        {"SULEIMAN", "E03", 2500},
        {"ISA", "E04", 5000},
        {"MUHAMMAD", "E05", 7000}
    };

    for(int i=0; i<5; i++){
        printf("Salary of %s is %d/day.\n",emp[i].name, emp[i].salary);

    }

}