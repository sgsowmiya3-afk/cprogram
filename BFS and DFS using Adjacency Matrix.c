#include <stdio.h>

int N;
int adj[20][20];
int visited[20];

void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < N; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

void BFS(int start) {
    int queue[20], front = 0, rear = 0;
    int visited_bfs[20] = {0};

    queue[rear++] = start;
    visited_bfs[start] = 1;

    while (front < rear) {
        int v = queue[front++];
        printf("%d ", v);

        for (int i = 0; i < N; i++) {
            if (adj[v][i] == 1 && !visited_bfs[i]) {
                queue[rear++] = i;
                visited_bfs[i] = 1;
            }
        }
    }
}

int main() {
    int start;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    scanf("%d", &start);

    printf("BFS: ");
    BFS(start);

    printf("\nDFS: ");
    for (int i = 0; i < N; i++)
        visited[i] = 0;

    DFS(start);

    return 0;
}
