#include <stdio.h>
int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    } else {
        int lastDigit = num % 10;
        reversed = (reversed * 10) + lastDigit;

        return reverseNumber(num / 10, reversed);
    }
}

int isPalindrome(int num) {
    int reversed = reverseNumber(num, 0);

    return (num == reversed);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}

