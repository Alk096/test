#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j;
    int t[3][3];
    for(i=0;i<3;i++){
        printf("ligne%d\n",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&t[i][j]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("[%d]",t[i][j]);
            printf("\n");
    }
}
