#include <stdio.h>
 int main(){
    int sum=0;
    int i,j;
    int arr[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             printf("enter elemnt of raw %d and column  %d :",i,j);
             scanf("%d",&arr[i][j]);
        }
}
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
              if(arr[i][j]==0){
                printf(" ");
              }else{
                printf("%d\t",arr[i][j]);
              }
            }
          printf("\n");

        }
       

     return 0;
 }
   








 