#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Member {
    int memberId;
    char memberName[100];
};

void deleteMember(struct Member** membersArray, int* arraySize, int memberIndex) {
    if (memberIndex < 0 || memberIndex >= *arraySize) {
    
        return;
    }


    struct Member* temp = (struct Member*)malloc((*arraySize - 1) * sizeof(struct Member));


    int tempIndex = 0;
    for (int i = 0; i < *arraySize; i++) {
        if (i != memberIndex) {
            temp[tempIndex] = (*membersArray)[i];
            tempIndex++;
        }
    }

    free(*membersArray);
    *membersArray = temp;
    (*arraySize)--;
}

int main() {
    struct Member* members = NULL;
    int size = 0;

    int memberCount;
    printf("Enter the number of members: ");
    scanf("%d", &memberCount);
    members = (struct Member*)malloc(memberCount * sizeof(struct Member));
    size = memberCount;
    for (int i = 0; i < size; i++) {
        printf("Enter the ID of member %d: ", i + 1);
        scanf("%d", &(members[i].memberId));
        printf("Enter the name of member %d: ", i + 1);
        scanf("%s", members[i].memberName);
    }
    printf("Members:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s\n", members[i].memberId, members[i].memberName);
    }
    int memberIndex;
    printf("Enter the index of the member to delete (0-%d): ", size - 1);
    scanf("%d", &memberIndex);

    deleteMember(&members, &size, memberIndex);

    printf("Members after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s\n", members[i].memberId, members[i].memberName);
    }

    free(members);

    return 0;
}
