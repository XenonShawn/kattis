#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int numCases;
    scanf("%d", &numCases);
    numCases--;
    
    int *queue = (int *)malloc(sizeof(int) * numCases );
    long sum = 0;

    for (int i = 0; i < numCases; i++) {
        scanf("%d", queue + i);
        if (queue[i] == 0) scanf("%d", queue + i);
        sum += queue[i] * (i + 1);
    }

    long biggest = 0;
    long current = 0;
    for (int i = numCases - 1; i >= 0; i--) {
        current += queue[i];
        if (current > biggest) biggest = current;
    }
    printf("%ld", biggest + sum);
}
