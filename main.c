#include <stdio.h>


int countsequences(int n) {
    if (n == 1)
    return 2;
    if (n == 2)
    return 4;
    if (n == 3)
    return 7;
    int end0 = 1, end1 = 1, end11 = 1;
    for (int i = 4; i <= n; i++) {
        int new_end0 = (end0 + end1 + end11);
        int new_end1 = end0;
        int new_end11 = end1;
        end0 = new_end0;
        end1 = new_end1;
        end11 = new_end11;
    }
    return (end0 + end1 + end11);
}
int main() {
    int n;
    printf("Enter the length of the sequence n:");
    scanf("%d", &n);
    if (n <= 1 || n >= 10000) {
        printf("Invalid input.\n");
        return 1;
    }
    int result = countsequences(n);
    printf("The number of valid sequences of length %d is: %d\n", n, result);
    return 0;
}
