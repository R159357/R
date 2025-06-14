#include <stdio.h>
int fun(int x)
{
    int flag;
    int a;
    if(a=(x*x)%10||(x*x%100))
            flag=1;
    else    flag=0;
    return flag;

}
int main()
{
   int x,y;
   printf("\nplease enter a integer numbers:");
   scanf("%d",&x);
   if(x<=0||x>100)    printf("data error!\n");
   else
   {
       y=fun(x);
       if(y)
            printf("%d*%d=D\n%dyes YES\n",x,x,x*x,x);
       else
            printf("%d*%d=%d\n%dNO\n",x,x,x*x,x);
   }
   return 0;
}
