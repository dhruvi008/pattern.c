#include<stdio.h>
int main(){
    
     int i,j, n=11;

     for(i=1;i<=5;i++){

        for(j=1;j<=i;j++){

            printf("%d ",n++);
        }
        printf("\n");
     }
    return 0;
}