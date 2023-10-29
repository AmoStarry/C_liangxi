#include <stdio.h>

const char* evenOrOdd(int number) {
    if (number % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    const char* result = evenOrOdd(num);
    printf("%d is %s\n", num, result);

    return 0;
}
/* Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.
最优解
 const char* even_or_odd(int n)
{
  return (n & 1)?("Odd"):("Even");
}*/