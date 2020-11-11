/*
     *
    ***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
     *
*/

#include <iostream>
using namespace std;
#define MAX 25

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,j,k=0;
	for (i=1;i<=MAX;i++) {
		if (i<=MAX/2) k=i; 
		else k=MAX+1-i;
		for (j=1;j<=(MAX/2-k+1);j++) {
			printf(" ");	
		}
		for (j=1;j<=k*2-1;j++) {
			printf("*");	
		}
		cout<<'\n';
	}
	return 0;
}
