#include <stdio.h>
#include <math.h>

int main(void) {
    int N, W, H;
    scanf("%d %d %d", &N, &W, &H);
    W = sqrt(W * W + H * H);
    for (int i = 0; i < N; i++) {
        scanf("%d", &H);
        printf(H <= W ? "DA\n" : "NE\n");
    }
}
