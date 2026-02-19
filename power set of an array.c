#include <stdio.h>

int main(){
    
    int arr[]= {10,12,15,};
    int n = 3;
    int total = 1;
    
    for(int i = 0; i<n;i++){
        total = total*2;
        
    }
    for(int i = 0; i<total;i++){
        int num = i;
        printf("{");
        for(int j = 0; j<n; j++){
            if(num % 2 == 1){
                printf("%d",arr[j]);
                
            }
            num = num/2;
            
        }
        printf("}\n");
        
    }
    return 0;
}
