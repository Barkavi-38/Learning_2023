#include <stdio.h>
#include <string.h>
int stringToInt(const char* str) {
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    while (str[i] != '\0') {
        int ival = str[i] - '0';
        if (ival < 0 || ival > 9) {
            return 0;
        }
        res = res * 10 + ival;
        i++;
    }

    return sign * res;
}

int main() {
    char str[100];

    printf("Enter a number: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int num = stringToInt(str);

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    return 0;
}

