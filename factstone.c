#include <stdio.h>

int main(void) {
    int x[] = {3, 5, 8, 12, 20, 34, 57, 98, 170, 300, 536, 966, 1754, 3210, 5910, 10944, 20366, 38064, 71421, 134480, 254016};
    int i;
    while (scanf("%d", &i), i) {
        printf("%d\n", x[(i-1960) / 10]);
    }
}