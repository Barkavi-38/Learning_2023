#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitialize(const char* input, struct Student* arr, int size) {
    char *token;
    char temp[20];
    int i = 0;

    char* inputCopy = strdup(input); 
    token = strtok(inputCopy, " ");
    while (token != NULL) {
        if (i == 0)
            arr[size].rollno = atoi(token);
        else if (i == 1)
            strcpy(arr[size].name, token);
        else if (i == 2)
            arr[size].marks = atof(token);

        token = strtok(NULL, " ");
        i++;
    }

    free(inputCopy); 
}

void displayMembers(const struct Student* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", arr[i].rollno);
        printf("Name: %s\n", arr[i].name);
        printf("Marks: %.2f\n", arr[i].marks);
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*) malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++) {
        char input[50];
        printf("Enter the input string for Student %d: ", i + 1);
        scanf("%s", input);

        parseAndInitialize(input, students, i);
    }

    displayMembers(students, size);

    free(students);

    return 0;
}

