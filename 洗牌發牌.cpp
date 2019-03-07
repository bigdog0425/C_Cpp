#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
using namespace std;
char flower(int);
int num(int);
void sort(int *);
#define Max 52 //最大數字
  
int main(){
  srand( time(NULL) ); //隨機亂數種子
  int n[53],temp;
  int a[14],b[14],c[14],d[14]; //x[0]=第13張牌 
  for (int i=1;i<=Max;i++) n[i]=i;//整理為預設排組
	/* 洗牌 */
  for (int i=1;i<=Max;i++) {
    int x = rand()%(Max+1-i)+i; //產生 [1,Max] 的整數亂數
    temp=n[i];n[i]=n[x];n[x]=temp;
  }
	/* 發牌 */
  int m=1;
  for (int i=1;i<=Max;i++){
  	switch (i%4) {
	  case 1:
	  	{a[m]=n[i];break;}
	  case 2:
	  	{b[m]=n[i];break;}
	  case 3:
	  	{c[m]=n[i];break;}
	  case 0:
	  	{d[m]=n[i];m++;break;}		  		  	
	}
  }
  sort(&a[0]); sort(&b[0]);sort(&c[0]);sort(&d[0]); //排序
  cout<<"第1位牌組：";
  for (int i=1;i<=12;i++) cout<<flower(a[i])<<num(a[i])<<";";
  cout <<flower(a[13])<<num(a[13])<<endl<<endl;
  cout<<"第2位牌組：";
  for (int i=1;i<=12;i++) cout<<flower(b[i])<<num(b[i])<<";";
  cout <<flower(b[13])<<num(b[13])<<endl<<endl;
  cout<<"第3位牌組：";
  for (int i=1;i<=12;i++) cout<<flower(c[i])<<num(c[i])<<";";
  cout <<flower(c[13])<<num(c[13])<<endl<<endl;
  cout<<"第4位牌組：";
  for (int i=1;i<=12;i++) cout<<flower(d[i])<<num(d[i])<<";";
  cout <<flower(d[13])<<num(d[13])<<endl;
}

/* 牌組排序 */ 
void sort(int * arr){
	int temp;
	for (int i=1;i<13;i++) {
		for(int j=1;j<=13-i;j++){
			if (arr[j]>arr[j+1]) {
				temp=arr[j];arr[j]=arr[j+1];arr[j+1]=temp;	
			}
		}
	}
}

/* 牌序數字轉花色 */
char flower(int n){
	int f=n/13;
	switch (f) {
	case 0: {return 'S';break;} //黑桃 
	case 1: {return 'H';break;} //紅心 
	case 2: {return 'D';break;} //鑽石 
	case 3 ... 4: {return 'C';break;} //黑梅 
	} 
}

/* 牌序轉數字 */ 
int num(int n){
	int a=n%13;
	if (a==0) a=13;
	return a; 
}
