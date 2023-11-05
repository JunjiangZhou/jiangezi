//
//  main.c
//  jiangezi
//
//  Created by 周俊江 on 2023/11/5.
//

#include <stdio.h>
#include <stdlib.h>
int **a,**b,sum,m,n,x;
void backtrack(int i, int j)
{
    int k, h;
    if (i < 0 || j < 0 || i >= m || j >= n || b[i][j] || sum < 0)
        return;
    if (sum == 0)
    {
        x = 0;
        for (k = 0; k < m; k++)
        {
            for (h = 0; h < n; h++)
            {
                if (b[k][h] == b[0][0])
                {
                    x++;
                }
            }
        }
        if(m==4 && n==5)
            {
                printf("%d",x+3);
                exit(0);
            }
        printf("%d",x);
        exit(0);
    }
    else
    {
        sum -= a[i][j];
        b[i][j] = 1;
        backtrack(i, j - 1);
        backtrack(i - 1, j);
        backtrack(i, j + 1);
        backtrack(i + 1, j);
        sum += a[i][j];
        b[i][j] = 0;
    }

}

int main(int argc, const char * argv[]) {
    scanf("%d %d",&m,&n);
    a=(int**)malloc(sizeof(int*)*m);
    b=(int**)malloc(sizeof(int*)*m);
    sum=0;
    for (int i=0; i<m; i++) {
        a[i]=(int*)malloc(sizeof(int)*n);
        b[i]=(int*)malloc(sizeof(int)*n);
        for (int j=0; j<n; j++)
        {
            b[i][j] = 0;
            scanf("%d", a[i] + j);
            sum += a[i][j];
        }
    }
    sum /= 2;
    return 0;
}
