#include<stdio.h>
int main(){
    
     int a,b;

     for(a=1;a<=5;a++){

        for(b=1;b<1+a;b++){

            printf("%d ",b);
        }
        for ( int c=4;c>=a;c--)
        {
            printf("  ");
        }
        for ( int d=4;d>=a;d--)
        {
            printf("  ");
        }
        for ( int b=a;b>=1;b--)
        {
            printf("%d ",b);
        }
        
        printf("\n");
     }
    return 0;
}