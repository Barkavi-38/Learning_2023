#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[50];
    int age;
};

struct Student* modifyStudent(struct Student* student) {
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter student age: ");
    scanf("%d", &(student->age));
    
    return student;
}

int main() {
    struct Student student;
    struct Student* modifiedStudent;

    modifiedStudent = modifyStudent(&student);
    printf("\nModified Student Information:\n");
    printf("Name: %s\n", modifiedStudent->name);
    printf("Age: %d\n", modifiedStudent->age);

    return 0;
}
