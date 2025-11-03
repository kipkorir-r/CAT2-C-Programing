/*
	ROBIN KIPKORIR MUTAI
	PA106/G/28705/25
*/
#include <stdio.h>

int main() {
    int scores[2][2] = { {65, 92}, {84, 72} };
    int a, b;  // declare both i and j here

    for (a = 0; a< 2; a++) {
        for (b = 0; b < 2; b++) {
            printf("%d ", scores[a][b]);
        }
        printf("\n");
    }

    return 0;
}
