#include<stdio.h>
int main(){
    int n,rem,reverse=0;
    printf("enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    printf("reversed number : %d",reverse);
    return 0;
}
    
     