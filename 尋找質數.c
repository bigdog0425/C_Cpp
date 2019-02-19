#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a,i,j=1,k,n;  
  int s[1000]; //儲存質數陣列 
  printf("Input a Number：");
  scanf("%d",&n);

//檢查從1~n的數字中有沒有被2~n-1的數字整除，若沒有則儲存在S[] 
  for (a=1;a<=n;a++) {
    k=0;
    for (i=2;i<a;i++) if (a%i==0) k=k+1;
    if (k==0) {
      s[j]=a;
      j++;
    }
  }

//顯示所有質數s[] 
  printf("質數有");
  for (i=1;i<j;i++) printf("s[%d]:%d ,",i,s[i]); 
  return 0;
}
