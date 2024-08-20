#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	 char frase[100];
	
	
	
	cin.getline(frase,100);
	bool continuar=true;
	int i=0;
	int contVocal=0;
	int contVacio=0;
	int consonante=0;


	while(continuar){
 		

 		if(frase[i]!='\0'){

 			cout<<frase[i];

 			switch(frase[i]){
 				case 'a':contVocal++;break;

 				case 'e':contVocal++;break;

 				case 'i':contVocal++;break;

 				case 'o':contVocal++;break;

 				case 'u':contVocal++;break;

 				case ' ':contVacio++;break;
 				
 				default: consonante++;

 			}
 		}else{
 			continuar=false;
 		}
 		i++;
	}



cout<<"Cantidad palabras: "<<contVacio+1<<endl;
cout<<"Cantidad Vocales: "<<contVocal<<endl;
cout<<"Cantidad Consonanes: "<<consonante<<endl;



	
	return 0;
}
