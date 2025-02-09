#include<stdio.h>
void main(){
    int i,j,key;
    int arr[]={10,2,5,4,3};
    for(i=0;i<5;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;    
    }
    arr[j+1]=key;
    }
    
    for(i=0;i<5;i++){
        printf("%d :",arr[i]);
    }
    }