#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
using namespace std;
char flower(int n);
int num(int n);

int main(){
  srand( time(NULL) ); //隨機亂數種子
  int n[53],temp;
  int a[14],b[14],c[14],d[14]; //x[0]=第13張牌 
  int max=52; //最大數字
  int min=1; //最小數字
  for (int i=1;i<=max;i++) n[i]=i;//整理為預設排組
	/* 洗牌 */
  for (int i=1;i<=max;i++) {
    int x = rand()%(max+1-i)+i; //產生 [min,max] 的整數亂數
    temp=n[i];n[i]=n[x];n[x]=temp;
    cout<<"n["<<i<<"]="<<n[i]<<std::endl;
  }
	/* 發牌 */
  int m=1;
  for (int i=1;i<=max;i++){
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
  cout<<"第1位牌組：";
  for (int i=1;i<=13;i++) cout<<flower(a[i])<<num(a[i])<<";";
  cout <<endl<<endl;
  cout<<"第2位牌組：";
  for (int i=1;i<=13;i++) cout<<flower(b[i])<<num(b[i])<<";";
  cout <<endl<<endl;
  cout<<"第3位牌組：";
  for (int i=1;i<=13;i++) cout<<flower(c[i])<<num(c[i])<<";";
  cout <<endl<<endl;
  cout<<"第4位牌組：";
  for (int i=1;i<=13;i++) cout<<flower(d[i])<<num(d[i])<<";";
  cout <<endl<<endl;
  return 0;
}

//牌序數字轉花色 
char flower(int n){
	int a=0;
	a=n/13;
	switch (a) {
	case 0: {return 'S';break;} //黑桃 
	case 1: {return 'H';break;} //紅心 
	case 2: {return 'D';break;} //鑽石 
	case 3 ... 4: {return 'C';break;} //黑梅 
	} 
}

/*牌序轉數字*/ 
int num(int n){
	int a;
	a=n%13;
	if (a==0) a=13;
	return a; 
}
