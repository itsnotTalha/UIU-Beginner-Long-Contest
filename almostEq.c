#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_N 50
#define MAX_M 50

// Function to check if two strings differ by exactly one character
bool differByOneChar(char *s1, char *s2, int m) {
    int diffCount = 0;
    for (int i = 0; i < m; i++) {
        if (s1[i] != s2[i]) {
            diffCount++;
        }
        if (diffCount > 1) return false;
    }
    return diffCount == 1;
}

// Function to perform DFS to find Hamiltonian Path
bool dfs(int v, bool graph[MAX_N][MAX_N], bool visited[MAX_N], int path[], int pathIndex, int n) {
    visited[v] = true;
    path[pathIndex] = v;
    
    if (pathIndex == n - 1) return true; // Found a valid path
    
    for (int i = 0; i < n; i++) {
        if (!visited[i] && graph[v][i]) {
            if (dfs(i, graph, visited, path, pathIndex + 1, n)) {
                return true;
            }
        }
    }
    
    visited[v] = false; // Backtrack
    return false;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    char strings[MAX_N][MAX_M];
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }
    
    // Create the adjacency matrix
    bool graph[MAX_N][MAX_N] = {false};
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (differByOneChar(strings[i], strings[j], m)) {
                graph[i][j] = true;
                graph[j][i] = true;
            }
        }
    }
    
    // Try to find a Hamiltonian Path
    bool visited[MAX_N] = {false};
    int path[MAX_N];
    
    bool found = false;
    for (int i = 0; i < n; i++) {
        memset(visited, false, sizeof(visited));
        if (dfs(i, graph, visited, path, 0, n)) {
            found = true;
            break;
        }
    }
    
    if (found) {
        printf("YES\n");
        for (int i = 0; i < n; i++) {
            printf("%s\n", strings[path[i]]);
        }
    } else {
        printf("NO\n");
    }
    
    return 0;
}
