//check palindrome using array
#include <stdio.h>
void main(){
    int n,temp,r,a[10],i=0;
    printf("enter any number:");
    scanf("%d", &n);
    temp = n;
    while (temp !=0)
    r=temp%10;//get last digit
    a[i]=r;//store in array
    temp = temp/10 ;//remove last digit
    i++;
    
}
