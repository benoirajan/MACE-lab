#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int i, j, k, a, b, u, v, n, ne = 1;
int min, mincost = 0, cost[9][9], parent[9];
int find(int i){
    while (parent[i])
        i = parent[i];
    return i;
}

int uni(int i, int j){
    if (i != j)
    {
        parent[j] = i;
        return 1;
    }
    return 0;
}

void main(){
    printf("\n\tImplementation of Kruskal's Algorithm\n");
    printf("\nEnter the no. of vertices:");
    scanf("%d", &n);
    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    printf("The edges of Minimum Cost Spanning Tree are\n");
    while (ne < n){
        for (i = 1, min = 999; i <= n; i++){
            for (j = 1; j <= n; j++){
                if (cost[i][j] < min){
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if (uni(u, v))
        {
            printf("%d edge (%d,%d) =%d\n", ne++, a, b, min);
            mincost += min;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\n\tMinimum cost = %d\n", mincost);
    getch();
}

/*
output
======

> gcc "kruskal.c"
> ./a

        Implementation of Kruskal's Algorithm

Enter the no. of vertices:5

Enter the cost adjacency matrix:
0 2 5 1 8
2 0 3 0 8
5 3 0 9 4
1 0 9 0 7
1 edge (1,4) =1
2 edge (1,2) =2
3 edge (2,3) =3
4 edge (3,5) =4

        Minimum cost = 10
*/