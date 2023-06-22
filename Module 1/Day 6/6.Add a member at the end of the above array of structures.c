#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Member {
    int memberId;
    char memberName[100];
};

void addMemberAtEnd(struct Member** membersArray, int* arraySize, int memberId, const char* memberName) {
    struct Member* temp = (struct Member*)realloc(*membersArray, (*arraySize + 1) * sizeof(struct Member));

    temp[*arraySize].memberId = memberId;
    strcpy(temp[*arraySize].memberName, memberName);

    *membersArray = temp;
    (*arraySize)++;
}

int main() {
    struct Member* members = NULL;
    int size = 0;
    addMemberAtEnd(&members, &size, 1, "John");
    addMemberAtEnd(&members, &size, 2, "Jane");
    int newMemberId;
    char newMemberName[100];

    printf("Enter the ID of the new member: ");
    scanf("%d", &newMemberId);
    printf("Enter the name of the new member: ");
    scanf("%s", newMemberName);

    addMemberAtEnd(&members, &size, newMemberId, newMemberName);

    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s\n", members[i].memberId, members[i].memberName);
    }

    free(members);

    return 0;
}
