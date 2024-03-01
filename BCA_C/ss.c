#include <stdio.h>

    int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max;

    switch (1) {
        case 1:
            if (num1 > num2 && num1 > num3)
                max = num1;
            else if (num2 > num1 && num2 > num3)
                max = num2;
            else if (num3 > num1 && num3 > num2)
                max = num3;
            else
                max = -1;  // Indicates that numbers are not distinct
            break;
        default:
            max = -1;  // Indicates an error
    }

    if (max != -1) {
        printf("The largest number is: %d", max);
    } else {
        printf("Numbers are not distinct or an error occurred.");
    }

    return 0;
}
