/*Õº∞∏œ‘ æ
*
*+*
*+++*
*+++++*
*+++*
*+*
*
*/  
#include<stdio.h>
int main()
{
    int N,n,i,j;
    scanf("%d",&N);
    if(N%2==0&&N<=0)
    printf("error");
    n=(N-2)/2+1;
    printf("*\n");
    for(i=1;i<=n;i++)
    {
        printf("*");
        for(j=1;j<=2*i-1;j++){
         
        printf("+");}
        printf("*\n");
    }
    for(i=n-1;i>0;i--)
    {
        printf("*");
        for(j=1;j<=2*i-1;j++){
             
         
        printf("+");}
        printf("*\n");
    }
    printf("*\n");
} 

