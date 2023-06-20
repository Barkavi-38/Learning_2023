#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isValidEmail(const char* email) {
    int index = 0;
    while (email[index] != '@') {
        if (!isalnum(email[index]) && email[index] != '.') {
            return false;
        }
        index++;
    }
    index++; 
    while (email[index] != '.') {
        if (!isalpha(email[index]) || !islower(email[index])) {
            return false;
        }
        index++;
    }
    index++; 
    while (email[index] != '\0') {
        if (!isalpha(email[index]) || !islower(email[index])) {
            return false;
        }
        index++;
    }

    return true;
}

int main() {
    char inputEmail[100];

    printf("Enter an email address: ");
    scanf("%s", inputEmail);

    if (isValidEmail(inputEmail)) {
        printf("Valid email.\n");
    } else {
        printf("Invalid email.\n");
    }

    return 0;
}
