#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 */
void print_array(int *a, int n) {
    int i;

    for (i = 0; i < n - 1; i++) {
        int num = a[i];
        int len = 0;
        int temp = num;

        if (num == 0) {
            len = 1;
        } else {
            while (temp > 0) {
                temp /= 10;
                len++;
            }
        }

        char num_str[12]; /* Assuming max int digits is 11 */
        int j = len - 1;

        while (num > 0) {
            num_str[j] = (num % 10) + '0';
            num /= 10;
            j--;
        }

        num_str[len] = '\0';

        if (i > 0) {
            _putchar(',');
            _putchar(' ');
        }

        int k = 0;
        while (num_str[k] != '\0') {
            _putchar(num_str[k]);
            k++;
        }
    }

    if (i == n - 1) {
        int num = a[n - 1];
        int len = 0;
        int temp = num;

        if (num == 0) {
            len = 1;
        } else {
            while (temp > 0) {
                temp /= 10;
                len++;
            }
        }

        char num_str[12]; /* Assuming max int digits is 11 */
        int j = len - 1;

        while (num > 0) {
            num_str[j] = (num % 10) + '0';
            num /= 10;
            j--;
        }

        num_str[len] = '\0';

        if (i > 0) {
            _putchar(',');
            _putchar(' ');
        }

        int k = 0;
        while (num_str[k] != '\0') {
            _putchar(num_str[k]);
            k++;
        }
    }

    _putchar('\n');
}	
