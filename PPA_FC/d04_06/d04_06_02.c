
#include<stdio.h>

   
    double simple_interest(int P, int R, int T) {
    double si = (P*R*T)/100;
    return si;
}
    
int main(){
    int P,R,T;
    printf("Enter the principal amount\n");
    scanf("%d",&P);
    printf("Enter the rate of interest\n");
    scanf("%d",&R);
    printf("Enter the time\n");
    scanf("%d",&T);
    
    
    double SI = simple_interest(P,R,T);
    printf("The Simple interest = %lf",SI);
    
}