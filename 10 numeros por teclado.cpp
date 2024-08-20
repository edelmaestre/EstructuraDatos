#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int vector[10];	
int sum=0;
int rest=0;
int mult=1;
float div=1;
	
	for(int i=0; i<10; i++){
	
		cin>>vector[i];
		cout<<endl;
	}
	
	for(int i=0; i<10; i++){
	
		sum=sum+vector[i];
		rest=rest-vector[i];
		mult=mult*vector[i];
		div=div/vector[i];
	}
	
	
	
	cout<<"los resultados son"<<endl;
	cout<<"La suma es: "<<sum<<endl;
	cout<<"La resta es: "<<rest<<endl;
	cout<<"La mult es: "<<mult<<endl;
	cout<<"La div es: "<<div<<endl;
		

	
	
	return 0;
}
