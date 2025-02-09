// C program to implement iterative Binary Search
#include <stdio.h>
int main()
{
    int a,b,fd=0,beg=0,end=4,mid;
    int arr[5];
    printf("enter elements");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter element to be searched");
    scanf("%d",&a);
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                b=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=b;
            }
        }
    }
    /*
     for(int i=0;i<5;i++){
       
        printf("%d : ",arr[i]);
    
    }
    */
while(beg<=end){
    mid=(beg+end)/2;
    if(arr[mid]>a)
    {
        end = mid-1;
    }
    else if(arr[mid]<a){
        beg = mid+1;
    }
    else{
        printf("element found");
        fd=1;
        break;
    }
}
if(fd==0){
    printf("not found");
}
}
