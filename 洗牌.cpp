#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
int main(){
  /* 固定亂數種子 */
  srand( time(NULL) );
	int n[53],temp;
	//整理排組 
	for (int i=1;i<53;i++) {
	n[i]=i;
	//std::cout<<"n["<<i<<"]="<<n[i]<<"  ";
	}
	
	
  /* 洗牌 */
	for (int i=1;i<=52;i++) {
 	  int x = rand()%(53-i)+i;
	  temp=n[i];n[i]=n[x];n[x]=temp;
	  std::cout<<"n["<<i<<"]="<<n[i]<<std::endl;
	}

  //std::cout << "x = " << x << std::endl;
  return 0;
}
