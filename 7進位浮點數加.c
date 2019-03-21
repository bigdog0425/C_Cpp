#include <stdio.h>
int main () 
{
	double a1=0,b1=0,c=1;
	long long int a2=0,b2=0;
	char zero = '1';
	char A[15]={'\0'};
	//while 1 {
	printf("請輸入兩個7進位的數字：");
	scanf("%Lf%Lf",&a1,&b1);
/* 將浮點數a1,b1轉為長整數a2,b2並記錄小數位數於c */	
	for(;(long long int)a1<a1||(long long int)b1<b1;c=c*0.1)
	{
		a1=a1*10;
		b1=b1*10;
	}
	a2=(long long int)a1;
	b2=(long long int)b1;

	/* 將十進位轉為七進位 */
	a1=0;
	while(a2>0||b2>0)
	{
		a1=a1+(double)((a2%10+b2%10)%7)*c;c=c*10;
		a2=(a2/10)+((a2%10+b2%10)/7);b2=(b2/10);	
	}
	sprintf(A,"%f",a1);
	b2=0;
	printf("%s",A);
	return 0;
}
