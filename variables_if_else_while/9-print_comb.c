/**
 * main - checks the instructions
 * @void: none
 *
 * Description:prints all possible combinations of single-digit numbers.
(* section header: Section description)*
 * Return: none
 */
#include <stdio.h>

int main(void) {
    int i;

    for (i = 0; i < 10; i++) {
        putchar(i + '0');
        if (i < 9) {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');

    return 0;
}

