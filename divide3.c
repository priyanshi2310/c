#include <stdio.h>
int main(){
int a;
printf("enter the value of a:");
scanf ("%d",&a);
if(a%5==0 && a%3==0){
printf("a is diviseble by 5 && 3:");
}else{
printf("a is not diviseble by 5 && 3:");
}
return 0;
}