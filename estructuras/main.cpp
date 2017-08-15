#include <iostream>
#include "funciones.h"

using namespace std;

void punto1();
void punto2();
void punto3();
void punto4();
void punto5();

int opcion;

int main(){

	while(1){
	
	cout<< "\n Digite la opción ( Número ) de el algoritmo que desea usar: \n";
	cout<< " 1 = Exponenciación\n 2 = Búsqueda Secuencial\n 3 = Ordenamiento Burbuja\n 4 = Ordenamiento por selección \n 5 = Emparejamiento de cadenas\n 6 = salir\n\n";
	cin>> opcion;
		switch(opcion){

		case 1: punto1(); break;
		case 2: punto2(); break;
		case 3: punto3(); break;
		case 4: punto4(); break;
		case 5: punto5(); break;
		case 6: return 0;
		default:cout<<" Has ingresado una opción no disponible, por favor digita un número entre 1 y 6\n "; 

		}
 	}
}

void punto1(){

	int a,n, c;
	cout<< " \n Ingrese los valores de la base y el exponente: a, n \n\n";
	cin>>a;
	cin>>n;
	c=pot(a,n);
	cout<< "\n ---La potencia de "<<a<< " a la " <<n<<   "  es " <<c<<"---\n\n";
	cout<< "\n";
}
void punto2(){

	int k;
	int  i;
	int n=5;
	int A[]={1,2,3,4,5};
	cout<< " Ingrese el valor a buscar  \n\n";
	cin>>k;
	cout<<"\n";
	int resul=BusquedaSecuencial(A,n,k);
		if (resul==-1){
			cout<<" ---El valor ingresado no se encuentra en el arreglo--- ";
			cout<<"\n";
					  }
		else{
		cout<<"---El elemento ingresado se encuentra en la posición " << resul<< " del arreglo---\n";
		cout<< "\n";

			}
}

void punto3(){

    int n=5;
	int A[]={5,3,2,1,4};
	burbuja(A,n);
}

void punto4(){

	int n=5;
	int A[]={5,3,2,1,4};
	OrdenamientoSeleccion(A,n);
}

void punto5(){

	int n=8;
	int m=4;
	char resultado;

	char B[]={'j','h','l','m','j','u','a','n'};
	char S[]={'j','u','a','n'};

	resultado = EmparejamientoCadenas(B,n,S,m);

	cout<<"---"<<resultado<< " ---\n";
	
}
