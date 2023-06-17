#include <stdio.h>

char getGrade(int score) {
}

int main() {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);

    char grade = getGrade(score);

    switch (score) {
        case 65:
            printf("Grade A\n");
            break;
        case 66:
            printf("Grade B\n");
            break;
        case 67:
            printf("Grade C\n");
            break;
        case 68:
            printf("Grade D\n");
            break;
        case 69:
            printf("Grade E\n");
            break;
        case 70:
            printf("Grade F\n");
            break;
        default:
    
            switch (grade) {
                case 'A':
                    printf("Grade A\n");
                    break;
                case 'B':
                    printf("Grade B\n");
                    break;
                case 'C':
                    printf("Grade C\n");
                    break;
                case 'D':
                    printf("Grade D\n");
                    break;
                case 'E':
                    printf("Grade E\n");
                    break;
                case 'F':
                    printf("Grade F\n");
                    break;
                default:
                    printf("Invalid grade\n");
                    break;
            }
            break;
    }

    return 0;
}

