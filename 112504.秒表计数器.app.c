#include<stdio.h>
#include<windows.h>
void main(){
	int a;
	printf("开始计时\n");
	for(a=0;;a++){
	Sleep(1000);
	printf("现在是%d秒\n",a);
	}    
}
