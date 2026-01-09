#include<stdio.h>
int main(){
    struct Result{
        int roll;
        int marks;
        float cg;
        char grade;
    };
    
    struct Result nahid,pritom,rayhan;
    printf("Enter roll of Nahid:\n");
    scanf("%d",&nahid.roll);
    printf("Enter marks of Nahid:\n");
    scanf("%d",&nahid.marks);
    printf("Enter cg of Nahid:\n");
    scanf("%f",&nahid.cg);
    printf("Enter grade of Nahid:\n");
    scanf(" %c",&nahid.grade);
    printf("Enter roll of Pritom:\n");
    scanf("%d",&pritom.roll);
    printf("Enter marks of Pritom:\n");
    scanf("%d",&pritom.marks);
    printf("Enter cg of Pritom:\n");
    scanf("%f",&pritom.cg);
    printf("Enter grade of Pritom:\n");
    scanf(" %c",&pritom.grade);
    printf("Enter roll of Rayhan:\n");
    scanf("%d",&rayhan.roll);
    printf("Enter marks of Rayhan:\n");
    scanf("%d",&rayhan.marks);
    printf("Enter cg of Rayhan:\n");
    scanf("%f",&rayhan.cg);
    printf("Enter grade of Rayhan:\n");
    scanf(" %c",&rayhan.grade);
    printf("Registration no of Nahid: %d\nMarks: %d\nCGPA: %f\nGrade: %c\n",nahid.roll,nahid.marks,nahid.cg,nahid.grade);
    printf("Registration no of Pritom: %d\nMarks: %d\nCGPA: %f\nGrade: %c\n",pritom.roll,pritom.marks,pritom.cg,pritom.grade);
    printf("Registration no of Rayhan: %d\nMarks: %d\nCGPA: %f\nGrade: %c\n",rayhan.roll,rayhan.marks,rayhan.cg,rayhan.grade);
}
