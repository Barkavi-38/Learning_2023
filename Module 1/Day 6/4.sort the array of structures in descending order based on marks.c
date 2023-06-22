#include <stdio.h>

typedef struct {
    int studentId;
    int marks;
} Student;

void sortArray(Student arr[], int size) {
    int i, j;
    Student temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i].marks < arr[j].marks) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    Student students[size];

    printf("Enter the details of students (ID and Marks):\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].studentId);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\nBefore sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d: ID: %d, Marks: %d\n", i + 1, students[i].studentId, students[i].marks);
    }

    sortArray(students, size);

    printf("\nAfter sorting in descending order of marks:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d: ID: %d, Marks: %d\n", i + 1, students[i].studentId, students[i].marks);
    }

    return 0;
}

