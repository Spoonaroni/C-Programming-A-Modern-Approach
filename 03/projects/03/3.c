#include <stdio.h>

int main(void)
{
    int GSI, groupID, pubCode, itemNum, checkD;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSI, &groupID, &pubCode, &itemNum, &checkD);
    printf("GSI prefix: %d\n", GSI);
    printf("Group identifier: %d\n", groupID);
    printf("Publisher code: %d\n", pubCode);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n",checkD);
    
    return 0;
}