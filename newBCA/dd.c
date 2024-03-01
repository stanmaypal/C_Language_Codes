#include<stdio.h>

int main() {
    int st, ed, a;

    printf("Enter the first number: ");
    scanf("%d", &st);

    printf("Enter the second number: ");
    scanf("%d", &ed);

    if (st > ed) {
        printf("hello\n");
        for (a = st; a >= ed; a--) {
            printf("%d\n", a);
        }
    } else {
        printf("Hi\n");
        for (a = st; a <= ed; a++) {
            printf("%d\n", a);
        }
    }

    return 0;
}
