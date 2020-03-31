/**
 * @author Xin Li <helloimlixin@gmail.com>
 * @file Print Fibonacci Number up to 255.
 * @desc Created on 2020-03-31 4:51:32 pm
 * @copyright Xin Li
 */
#include <stdio.h>

int main(void) {
    int x, y, z;

    while (1) {
        x = 0;
        y = 1;
        do {
            printf("%d\n", x);

            z = x + y;
            x = y;
            y = z;
        } while (x < 255);
    }

    return 0;
}
