#include<stdio.h>
#include<string.h>
int main(){
    struct result{
        int ID;
        int Marks;
        char name[11]; 
    }a,b,c;

    strcpy(a.name, "NAHID");
    a.ID = 2023831040;
    a.Marks = 1150;

    strcpy(b.name, "RAYHAN");
    b.ID = 2023831041;
    b.Marks = 1170;

    strcpy(c.name, "PRITOM");
    c.ID = 2023831042;
    c.Marks = 1190;

    printf("FIRST; Name: %s; ID: %d; Marks: %d\n",a.name,a.ID,a.Marks);
    printf("SECOND; Name: %s; ID: %d; Marks: %d\n",b.name,b.ID,b.Marks);
    printf("THIRD; Name: %s; ID: %d; Marks: %d\n",c.name,c.ID,c.Marks);

    return 0;
}
