#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int n;
	n=rand()%36+1;
	cout<<n;
	
	return 0;
}
