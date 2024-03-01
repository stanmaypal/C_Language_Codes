#include <stdio.h>

int main() {
    int num, res = 0, temp, rem;

    for (num = 1; num < 1000; num++) {
        rem = num;
        temp = num;  // Use a temporary variable to preserve the original value of num

        while (temp != 0) {
            rem = temp % 10;
            res = res * 10 + rem;
            temp = temp / 10;
        }

        printf("Number is %d\n", num);
        printf("Reverse Number is %d\n", res);

        if (num == res) {
            printf("Number is Palindrome\n");
        } else {
            printf("Number is not Palindrome\n");
        }

        res = 0;  // Reset res for the next iteration
    }

    return 0;
}
