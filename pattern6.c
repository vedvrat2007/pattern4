#include<stdio.h>
int main(){
int n,i,j,a,k;
printf("Enter no of rows");
scanf("%d",&n);
int nsp=n-1;
for(i=1;i<=n;i++)
  {
    int a=i-1;
    for(int q=1;q<=nsp;q++)
    {
      printf(" ");
    }
     nsp--;
     for(j=1;j<=i;j++)
     {
       printf("%d",j);
     }
       a=i-1;
      for(k=1;k<=n-1;k++)
      {
        printf("%d",a);
      }
       a--;
  }
    printf("\n");
    return 0;
}
