#include<stdio.h>
#include<stdlib.h>
void main(){
    int **a,**b,**c;
    int ar,ac,br,bc;
    printf("enter the number of rows and columns for matrix 1\n");
    scanf("%d %d",&ar,&ac);
    printf("enter the number of rows and columns for matrix 2\n");
    scanf("%d %d",&br,&bc);
    if(ac==br){
    a=(int **)malloc(sizeof(int*)*ar);
    for(int i=0;i<ac;i++){
        a[i]=(int *)malloc(sizeof(int*)*ac);
    }
        printf("\n enter the 1st matrix\n");
    for(int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
            scanf("%d",&a[i][j]); 
    }
}
b=(int **)malloc(sizeof(int*)*br);
    for(int i=0;i<ac;i++){
        b[i]=(int *)malloc(sizeof(int*)*bc);
    }
    printf("\n enter the 2nd matrix\n");
     for(int i=0;i<br;i++){
        for(int j=0;j<bc;j++){
            scanf("%d",&b[i][j]); 
    }
}
    
        c=(int **)malloc(sizeof(int*)*ar);
    for(int i=0;i<ac;i++){
        c[i]=(int *)malloc(sizeof(int*)*bc);
    }
for(int i=0;i<ar;i++){
 for(int j=0;j<bc;j++){
      c[i][j]=0;
   }
 }
 for(int i=0;i<ar;i++){
 for(int j=0;j<bc;j++){
    for(int k=0;k<ac;k++){
      c[i][j]+=a[i][k]*b[k][j];;
   }
 }
}
for(int i=0;i<ar;i++){
 for(int j=0;j<bc;j++){
      printf("%d ",c[i][j]);
   }
 }
}
else{
    printf("not possible");
}
}