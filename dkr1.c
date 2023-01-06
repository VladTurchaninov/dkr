#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    float S = 0, n = 0;
    printf("\n enter N >= 1: ");
    scanf("%d", &N);
    if (N>=1) {
    for (n = 1; n <= N; n++) {
        S = S + n + n / 2;
        printf("\n\n result = %f", S);
    }
  }
}
