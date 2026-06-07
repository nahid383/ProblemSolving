#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    int roll;
    float cgpa;
    char phone[15];
    char grade[20];
} Student;

char* getClass(float cg) {
    if (cg >= 3.75) return "First Class";
    else if (cg >= 3.0) return "Second Class";
    else if (cg >= 2.0) return "Third Class";
    else return "Fail";
}

int main() {
    Student s[5], topper;
    FILE *fptr = fopen("students.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    float max_cg = -1.0;

    for (int i = 0; i < 5; i++) {
        printf("Enter info for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
        printf("Phone: ");
        scanf("%s", s[i].phone);

        strcpy(s[i].grade, getClass(s[i].cgpa));

        fprintf(fptr, "Name: %s, Roll: %d, CGPA: %.2f, Phone: %s, Class: %s\n",
                s[i].name, s[i].roll, s[i].cgpa, s[i].phone, s[i].grade);

        if (s[i].cgpa > max_cg) {
            max_cg = s[i].cgpa;
            topper = s[i];
        }
    }

    fclose(fptr);

    printf("\Topper Info:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll: %d\n", topper.roll);
    printf("CGPA: %.2f\n", topper.cgpa);
    printf("Phone: %s\n", topper.phone);
    printf("Class: %s\n", topper.grade);

    return 0;
}


    fclose(fptr);

    printf("\nTopper Info:\n");
    printf("Roll: %d\n", topper.roll);
    printf("CGPA: %.2f\n", topper.cgpa);
    printf("Phone: %s\n", topper.phone);
    printf("Class: %s\n", topper.grade);

    return 0;
}
