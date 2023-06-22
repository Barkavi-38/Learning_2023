#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STUDENTS 100

typedef struct {
    char studentName[50];
    int age;
    float gpa;
} Student;

Student studentArray[MAX_STUDENTS];
int numStudents = 0;

int compareNames(const char* name1, const char* name2) {
    
    while (*name1 && *name2) {
        if (tolower(*name1) != tolower(*name2)) {
            return 0;  
        }
        name1++;
        name2++;
    }
    return (*name1 == '\0' && *name2 == '\0');  
    
}

void searchByName(const char* name) {
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (compareNames(studentArray[i].studentName, name)) {
            printf("Student found:\n");
            printf("Name: %s\n", studentArray[i].studentName);
            printf("Age: %d\n", studentArray[i].age);
            printf("GPA: %.2f\n", studentArray[i].gpa);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found with the given name.\n");
    }
}

int main() {

    strcpy(studentArray[0].studentName, "Smith");
    studentArray[0].age = 20;
    studentArray[0].gpa = 3.75;

    strcpy(studentArray[1].studentName, "Johnson");
    studentArray[1].age = 19;
    studentArray[1].gpa = 3.90;

    numStudents = 2;

    char searchName[50];
    printf("Enter the name of the student to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; 
    searchByName(searchName);

    return 0;
}
