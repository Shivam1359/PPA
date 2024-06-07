//Program to Convert even number into its upper nearest odd number Switch Statement.


#include<stdio.h>

int main(void) {
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    
    switch(n%2==0){
        case 1:
            printf("entered no. is even i.e %d and updgarded to nearest upper odd number %d",n,n+1);
            break;
        case 0:
            printf("entered no. is odd i.e %d",n);
            break;
                
    }    
    return 0;
}