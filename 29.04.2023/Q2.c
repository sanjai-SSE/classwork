#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Square of %d is %d\n", num, num*num);
    printf("Cube of %d is %d", num, num*num*num);

    return 0;
}
