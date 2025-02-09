#include<stdio.h>
int main(void) 
{ int d;
  scanf("%d",&d);
    int arr[] = { 3, 4, 2 , 40 }; 
    int x = 10; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    // Function call 
    int result ;
    for(int i = 0; i <N;i++){
          if(arr[i]==x){
            result = i;
            break;
          }
          else{
            result = -1;
          }

    }
(result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result); 
    return 0; 
}