#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 100
#define SUBJECTS 5

typedef struct {
    char name[MAX_NAME_LENGTH];
    int id;
    float cgpa;
    int marks[SUBJECTS];
    char grade;
    int studentClass;
} Student;

char GradeCalc(int marks[SUBJECTS]) {
    float avg = 0;
    for (int i = 0; i < SUBJECTS; i++) {
        avg += marks[i];
    }
    avg /= SUBJECTS;

    if (avg >= 90) {
        return 'A';
    } else if (avg >= 80) {
        return 'B';
    } else if (avg >= 70) {
        return 'C';
    } else if (avg >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int ClassCalc(float cgpa) {
    if (cgpa >= 3.75) {
        return 1;
    } else if (cgpa >= 3.50) {
        return 2;
    } else if (cgpa >= 3.00) {
        return 3;
    } else {
        return 4;
    }
}

void writeToFile(FILE *file, Student students[], int n) {
    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f ", students[i].name, students[i].id, students[i].cgpa);
        for (int j = 0; j < SUBJECTS; j++) {
            fprintf(file, "%d ", students[i].marks[j]);
        }
        fprintf(file, "%c %d\n", students[i].grade, students[i].studentClass);
    }
}

void readFromFile(FILE *file, Student students[], int *n) {
    while (fscanf(file, "%s %d %f", students[*n].name, &students[*n].id, &students[*n].cgpa) != EOF) {
        for (int i = 0; i < SUBJECTS; i++) {
            fscanf(file, "%d", &students[*n].marks[i]);
        }
        fscanf(file, " %c %d", &students[*n].grade, &students[*n].studentClass);
        (*n)++;
    }
}

void findHighestLowestMarks(Student students[], int n) {
    const char *subjects[SUBJECTS] = {"PHY", "CHEM", "MATH", "BIO", "ENG"};
    int highest[SUBJECTS] = {0}, lowest[SUBJECTS] = {100};
    int highestID[SUBJECTS] = {0}, lowestID[SUBJECTS] = {0};
    char highestName[SUBJECTS][MAX_NAME_LENGTH], lowestName[SUBJECTS][MAX_NAME_LENGTH];

    for (int i = 0; i < SUBJECTS; i++) {
        for (int j = 0; j < n; j++) {
            if (students[j].marks[i] > highest[i]) {
                highest[i] = students[j].marks[i];
                highestID[i] = students[j].id;
                strcpy(highestName[i], students[j].name);
            }
            if (students[j].marks[i] < lowest[i]) {
                lowest[i] = students[j].marks[i];
                lowestID[i] = students[j].id;
                strcpy(lowestName[i], students[j].name);
            }
        }
    }

    for (int i = 0; i < SUBJECTS; i++) {
        printf("%s Highest: %d by %s %d and %s Lowest: %d by %s %d\n", subjects[i], highest[i], highestName[i], highestID[i],
                subjects[i], lowest[i], lowestName[i], lowestID[i]);
    }
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student students[MAX_STUDENTS];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]%*c", students[i].name);
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
        printf("Enter CGPA: ");
        scanf("%f", &students[i].cgpa);
        printf("Enter marks for 5 subjects (PHY, CHEM, MATH, BIO, ENG): ");
        for (int j = 0; j < SUBJECTS; j++) {
            scanf("%d", &students[i].marks[j]);
        }

        students[i].grade = GradeCalc(students[i].marks);
        students[i].studentClass = ClassCalc(students[i].cgpa);
    }

    FILE *inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    writeToFile(inputFile, students, n);
    fclose(inputFile);

    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    FILE *inputFileRead = fopen("input.txt", "r");
    if (inputFileRead == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    int numStudents = 0;
    readFromFile(inputFileRead, students, &numStudents);

    writeToFile(outputFile, students, numStudents);
    fclose(inputFileRead);
    fclose(outputFile);

    findHighestLowestMarks(students, numStudents);

    printf("\nData has been written to output.txt\n");

    return 0;
}