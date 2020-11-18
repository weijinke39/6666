#include<stdio.h>
void main(){
int x;
scanf("%d",&x);
if(x<0)x=x;
else if(x>=1&&x<10)x=2*x-1;
else if(x>=10)x=3*x-11;
else printf("输入正确的值");
printf("%d",x);


}
