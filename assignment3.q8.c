 #include <stdio.h>

void main() {
    int num = 145, r, sum = 0;
    int temp = num;

    while (temp != 0) {
        r = temp % 10;   // extract digit
        int fact = 1, j = 1;   // reset factorial and counter

        // factorial of digit using while
        while (j <= r) {
            fact = fact * j;
            j++;
        }

        sum = sum + fact;   // add factorial to sum
        temp = temp / 10;   // remove last digit
    }

    if (sum == num)
        printf("num is strong\n");
    else
        printf("num is not strong\n");
}