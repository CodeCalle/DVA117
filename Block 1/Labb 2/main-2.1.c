#include <stdio.h>

int main(void) {
    int degree;
    // scanf("Enter a positive angle in degrees: %d", &degree);
    printf("Enter a positive angle in degrees: ");
    scanf("%d", &degree);

    if (degree < 90)
        printf("The angle is acute!");
    else if (degree < 180 && 90 < degree)
        printf("The angle is obtuse!");
    else if (degree == 90)
        printf("The angle is right!");
    else
        printf("Wrongful input!");

    return 0;
}