#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Member {
    int memberId;
    char memberName[100];
};

void swapMembers(struct Member* membersArray, int index1, int index2) {
    struct Member temp = membersArray[index1];
    membersArray[index1] = membersArray[index2];
    membersArray[index2] = temp;
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

    int index1, index2;
    printf("Enter the indexes of the members to swap (0-%d): ", size - 1);
    scanf("%d %d", &index1, &index2);

    if (index1 >= 0 && index1 < size && index2 >= 0 && index2 < size) {
        swapMembers(members, index1, index2);
        printf("Members after swapping:\n");
        for (int i = 0; i < size; i++) {
            printf("ID: %d, Name: %s\n", members[i].memberId, members[i].memberName);
        }
    } else {
        printf("Invalid indexes. Swapping cannot be performed.\n");
    }

    free(members);

    return 0;
}
