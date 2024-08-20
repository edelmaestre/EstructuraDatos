#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n[20],d=0,r=0,b=0,e=0;
	
  

	
	for(int i=0; i<20;i++) {
		n[i]=1+rand()%(100-0);
		cout<<n[i]<<endl;
}

for(int i=0; i<20; i++){
	if(n[i]<30){
	
		d=d+1;
	}
	
	if((n[i]>=30) && (n[i]<=50)){
	
		r=r+1;
	}

	if((n[i]>=51) && (n[i]<=75)){
	
		b=b+1;
	}
	if((n[i]>=76) && (n[i]<=100)){
	
		e=e+1;
	}
}
	cout<<"candidad deficientes: "<<d<<endl;
	cout<<"candidad regulares: "<<r<<endl;
	cout<<"candidad buenos: "<<b<<endl;
	cout<<"candidad Exelentes: "<<e<<endl;
	
	return 0;
}
