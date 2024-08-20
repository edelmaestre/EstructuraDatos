#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int vector[100];
	   
	for(int i=1; i<100; i+=2){
		vector[i]=i;
		cout<<vector[i]<<endl;
	}
	

	
	return 0;
}
