// accept userinput and display
#include <stdio.h> 
 int main() 
{ 
    int a[5], i; 
    for(i = 0; i < 5; i++) 
    { 
        printf("Enter number: "); 
        scanf("%d", &a[i]); 
    } 
    printf("\nArray Elements are:\n"); 
    for(i = 0; i < 5; i++) 
        printf("%d\n", a[i]); 
 
    return 0; 
} 
