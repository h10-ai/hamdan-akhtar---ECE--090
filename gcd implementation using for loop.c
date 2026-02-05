#include <stdio.h>
void main()
{
    int x,y,n;
    printf("Enter your first number");
    scanf("%d",&x);
    printf("your second number");
    scanf("%d",&y);
    if(x<y)

    n=x;
    else
    n=y;
    int gcd = 1;
    for (int i= 2 ;i<=n;i++)
    { 
        if(x%i==0 && y%i==0)
        {
            gcd = gcd*i;
            x = x/i;
            y=y/i;
            i=2;
        }
        
      }
      printf("the gcd is %d",gcd);
}
