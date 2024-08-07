#include<stdio.h>
int main(){
     int a,b,k;

     for ( a=5; a>=1;a--)
     {
        for ( k=a-1;k>=1;k--)
        {
            printf("  ");
        }
        
        for (b=a; b<=5; b++)
        {
            printf("%d ",b);
        }
        for ( int i=4; i>=a; i--)
        {
            printf("%d ",i);
        }
        
        printf("\n");
        
     }
     
    return 0;
}