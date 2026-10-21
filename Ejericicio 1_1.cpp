#include <iostream>
#include <conio.h>
using namespace std;



void saludar(){
	cout<<"Hola este es la modificacion del archivo Ejercicio 1.cpp";
	
}

int main(){

	cout<<"La suma y el promedio de un vector ";
	
	float num[100], suma=0, promedio;
	
	int tam;
	
	
	cout<<"Ingrese un tamano del vector [x]:  ";
	cin>> tam;
	
	for(int c=0; c<=tam-1; c++){
		cout<<" Ingrese un numero en la posicion ["<<c<<"]";
		cin>> num[c];
		
	}
	system("pause");
	system("cls");
	
	for(int c=0; c<=tam-1; c++){
		suma = suma + num[c];
		
	}
	
	promedio = suma / tam; 
	
	
	cout <<" El valor de la suma del vector ["<<tam<<"] es: "<<suma<<endl;
	
	cout <<" El promedio de la suma del vector ["<<tam<<"] es: "<<promedio<<endl;
	
	
	saludar();
	
	return 0;
}
