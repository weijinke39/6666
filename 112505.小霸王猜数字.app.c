#include<stdio.h>
#include<windows.h>
void main(){
	int a=6,b,c;
    printf("友情提示：请输入0~10，你只有9次机会\n");
	for(c=0;c<10;c++){
	scanf("%d",&b);
	if(b==a){
		printf("真被你猜对了，太棒了\n");}
	else if(b>a){printf("输入的太大了，猜小点\n");}
	else{printf("太小了，猜大点\n");}}
}
