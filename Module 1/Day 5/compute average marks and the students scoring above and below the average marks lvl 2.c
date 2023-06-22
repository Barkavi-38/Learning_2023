#include <stdio.h>

#define MAX_STUDENTS 50


struct Student {
    char name[50];
    int marks;
};


void readStudent(struct Student* student) {
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter student marks: ");
    scanf("%d", &(student->marks));
}


void writeStudent(const struct Student* student) {
    printf("Name: %s\n", student->name);
    printf("Marks: %d\n", student->marks);
}


double computeAverage(const struct Student* students, int numStudents) {
    int totalMarks = 0;
    for (int i = 0; i < numStudents; i++) {
        totalMarks += students[i].marks;
    }
    return (double)totalMarks / numStudents;
}
void printStudentsAboveAndBelowAverage(const struct Student* students, int numStudents) {
    double averageMarks = computeAverage(students, numStudents);

    printf("Students scoring above average marks:\n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > averageMarks) {
            writeStudent(&students[i]);
        }
    }

    printf("Students scoring below average marks:\n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks < averageMarks) {
            writeStudent(&students[i]);
        }
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        readStudent(&students[i]);
    }

    printf("\nStudent information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        writeStudent(&students[i]);
    }

    printf("\n");


    double averageMarks = computeAverage(students, numStudents);
    printf("Average Marks: %.2lf\n\n", averageMarks);

    printStudentsAboveAndBelowAverage(students, numStudents);

    return 0;
}
