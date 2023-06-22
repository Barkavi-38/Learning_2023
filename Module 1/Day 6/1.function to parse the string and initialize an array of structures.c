#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char studentName[20];
    float marks;
};

void getInput(struct Student* student) {
    printf("Enter Roll No: ");
    scanf("%d", &student->rollNo);
    
    printf("Enter Name: ");
    scanf(" %19s", student->studentName);
    
    printf("Enter Marks: ");
    scanf("%f", &student->marks);
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    fflush(stdin);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    printf("Enter the student details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        getInput(&students[i]);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].studentName);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);
    return 0;
}

