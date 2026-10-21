#include <iostream>
using namespace std;


int nombre; 
int nombres;
int main(){
	
	
	string nombres [5];
	for (int i = 0; i<=5; i++){
		cout<<"Ingrese valor de la posición "<< i <<" : ";
		cin>>nombre;
		nombres[i]= nombre;
		
	}	
	
	

	for (int i=0; i<=5; i++){
	
		system ("pause");
	
	system ("cls"); 	
		cout<<nombres[i]<<endl;
	}
	
	cout<<"La posición: "<< nombre <<" Hasta n es ="<< nombres<<endl;
}