#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
using namespace std;

int main(){
  srand( time(NULL) ); //隨機亂數種子
  int n[53],temp;
  int max=52; //最大數字
  int min=1; //最小數字
  for (int i=1;i<=max;i++) n[i]=i;//整理為預設排組
  /* 洗牌 */
  for (int i=1;i<=max;i++) {
    int x = rand()%(max+1-i)+i; //產生 [min,max] 的整數亂數
    temp=n[i];n[i]=n[x];n[x]=temp;
    cout<<"n["<<i<<"]="<<n[i]<<std::endl;
  }
  return 0;
}
