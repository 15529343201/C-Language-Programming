//例25:已知一个圆筒的半径外径和高，求圆筒的体积
#include<stdio.h>
#include<math.h>
#define PI 3.14
float v(float r,float h)
{
      float v1;
      v1=PI*r*r*h;
      return(v1);
}
float t(float x,float y,float z)
{
    float c;
    c=fabs(v(x,z)-v(y,z));
    return (c);
}
int main(void)
{
    float a,b,c;
    scanf("%f,%f,%f",&a,&b,&c);
    printf("%.2f",t(a,b,c));
     return 0;
}

