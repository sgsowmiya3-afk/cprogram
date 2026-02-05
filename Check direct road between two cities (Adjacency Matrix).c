#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int adj[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    int A, B;
    scanf("%d %d", &A, &B);

    if (adj[A][B] == 1)
        printf("Connected");
    else
        printf("Not Connected");

    return 0;
}
