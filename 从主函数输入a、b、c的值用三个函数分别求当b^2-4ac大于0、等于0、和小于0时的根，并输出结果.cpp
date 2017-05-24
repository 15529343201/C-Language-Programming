/*例24:从主函数输入a、b、c的值用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果*/
#include<stdio.h>
#include<math.h>
void fun1(float a,float b,float c,float d)
{
     float p,q;
     p=(-b+sqrt(d))/(2*a);
     q=(-b-sqrt(d))/(2*a);
     printf("x1=%.3f x2=%.3f",p,q);
}
void fun2(float a,float b,float c,float d)
{
     float p;
     p=-b/(2*a);
     printf("x1=%.3f x2=%.3f",p,p);
}
void fun3(float a,float b,float c,float d)
{
     float p,q;
     p=-b/(2*a);
     q=sqrt(-d)/(2*a);
     printf("x1=%.3f+%.3fi ",p,q);
     printf("x2=%.3f-%.3fi",p,q);
}
int main(void)
{
   float x,y,z,w;
   scanf("%f%f%f",&x,&y,&z);
   w=y*y-4*x*z;
   if(w>0)
   {fun1(x,y,z,w);}
   if(w==0)
   {
      fun2(x,y,z,w);
    }
    if(w<0)
   {
      fun3(x,y,z,w);
    }
    return 0;
}   

