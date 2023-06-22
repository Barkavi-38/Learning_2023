#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Member {
    int memberId;
    char memberName[100];
};

void rotateArray(struct Member* membersArray, int size, int k) {
    struct Member* temp = (struct Member*)malloc(k * sizeof(struct Member));

    for (int i = 0; i < k; i++) {
        temp[i] = membersArray[size - k + i];
    }

    for (int i = size - 1; i >= k; i--) {
        membersArray[i] = membersArray[i - k];
    }

    for (int i = 0; i < k; i++) {
        membersArray[i] = temp[i];
    }

    free(temp);
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

    int k;
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    rotateArray(members, size, k);

    printf("Members after rotation:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s\n", members[i].memberId, members[i].memberName);
    }

    free(members);

    return 0;
}
