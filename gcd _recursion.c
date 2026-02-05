#include <stdio.h>
int gcd();
void main()
{
    int a,b ,p;
    printf("enter big number");
    scanf("%d",&a);
    printf("enter small number");
    scanf("%d",&b);
    p = gcd(a,b);
    printf("GCD is %d", p);
    
}   
int gcd(int x,int y){
    if(y!=0)
    return(y,x%y);
    else
    return x;
}
