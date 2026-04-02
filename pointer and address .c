#include <stdio.h>
int main(){
    int num = 32872093;
    int *ptr = &num;
    printf("address : %p\n",ptr);
    printf("value : %d\n",*ptr);
    return 0 ;
    
}
