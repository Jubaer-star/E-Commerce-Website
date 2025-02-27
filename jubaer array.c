#include <stdio.h>
int main(){
int i,j,k,s=0;
int arr[3][3],brr[3][3],res[3][3];
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        }
    }
        printf("1st array\n");
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%3d",arr[i][j]);
        }
    printf("\n");
        }
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&brr[i][j]);
        }
    }
        printf("2nd array\n");
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%3d",brr[i][j]);
        }
    printf("\n");
        }
        for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        res[i][j]=0;
            for(k=0;k<3;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
        }
        printf("Matrix A  *  Matrix B: \n");
        for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%3d ",res[i][j]);
        }
        printf("\n");
        }
         for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        s+=res[i][j];
        }
         }
         printf("Resut:  %d",s);
         return 0;
}

