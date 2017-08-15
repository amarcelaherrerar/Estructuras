#include <iostream>
using namespace std;

int pot(int a, int n){// a is the base, n is the exponent	
	int potencia, i;
	potencia=1;
	i=0;

	for(i=0;i<n;i++)
		potencia=potencia*a;
	return potencia;
}
int BusquedaSecuencial(int A[], int n, int k){
	int i=0;
	while (i<n){
		if ( A[i]== k ){
		     return i;
		}
		i++;
	}
	return -1;
}

void burbuja(int A[],int n){
	int i=0;
	int j=0;
	int swap=0;
	int x=0;

	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(A[j]>A[j+1]){
				swap=A[j];
				A[j]=A[j+1];
				A[j+1]=swap;
			}
		}

	}	
	
	cout<<"El arreglo ha sido ordenado, el resultado es: \n";
	for(x=0;x<n;x++){

			cout<< A[x]<<"\n";
	}
}			

void OrdenamientoSeleccion(int A[], int n){
	int minimo=0;
	int i=0;
	int x=0;
	int j=0;	
	int swap=0;

	for (i = 0; i < n-1; i++){
		 minimo=i ;
		for (int j = i+1; j < n ; j++){
			if (A[j] <A[minimo] ){
				minimo=j;
			}
		}
		swap=A[i];
		A[i]=A[minimo];
		A[minimo]=swap;
	}
	
	cout<<"El arreglo ha sido ordenado, el resultado es: \n";
	for(x=0;x<n;x++){

			cout<< A[x]<<"\n";
	}

}

int EmparejamientoCadenas(char B[],int n,char S[], int m){
	int i=0;

		for (int i = 0; i < n-m; i++){
			int j=0;

			while(j<m && S[j]==B[i+j]){
				j=j+1;
				
			}
			if (j==m){

				return i;
			}
		}

		return -1;
}