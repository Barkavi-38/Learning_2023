#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStructArray(struct Student array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &array[i].rollno);
        getchar(); 

        printf("Name: ");
        fgets(array[i].name, sizeof(array[i].name), stdin);
        array[i].name[strcspn(array[i].name, "\n")] = '\0'; 
        printf("Marks: ");
        scanf("%f", &array[i].marks);
        getchar(); 

        printf("\n");
    }
}

int main() {
    struct Student students[MAX_SIZE];

    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Consume newline character

    if (numStudents > MAX_SIZE) {
        printf("Exceeded maximum array size.\n");
        return 1;
    }

    initializeStructArray(students, numStudents);

    printf("\nStudent details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

