//
//  main.c
//  jiangezi
//
//  Created by 周俊江 on 2023/11/5.
//

#include <stdio.h>
#include <stdlib.h>
int **a,**b,sum,m,n;

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
