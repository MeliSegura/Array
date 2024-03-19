//Concepto de ARRAY
#include <iostream>
using namespace std;

main(){

	//array = arreglo o coleccion o matriz
	//se utilizan para almacenar varios valores en una sola variable
	
	/*
	int notas[4]; // equivalente a nota 1, nota 2, nota 3, nota 4.
	notas[0]=80;
	notas[1]=65;
	notas[2]=60;
	notas[3]=75;
	
	cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;
	*/
	
	/*
	int notas[4]= {80, 65, 60,75}; // equivalente a nota 1, nota 2, nota 3, nota 4.
	
	cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;
	*/
	
	/*
	int notas[4]; 
	notas[0]=80;
	notas[1]=65;
	notas[2]=60;
	notas[3]=75;
	
	
	for(int i=0; i<4; i++){
		cout<<i<<":"<<notas[i]<<endl;
	}
	
	for(int i : notas){
		cout<<i<<endl;
	}
    */
   
   /* 
    int tam=0, suma=0, promedio=0;
    cout<<"Cuantas notas desea ingresar: ";
    cin>>tam;
    int notas[tam]; //notas[?]
    for(int i=0; i<tam; i++){
    	cout<<"Ingrese Nota: "<<i+1<<":";
    	cin>>notas[i];
    }
    
    
    for(int i=0; i<tam; i++){
    	cout<<notas[i]<<endl;
	}
	
	
	for(int i=0; i<tam; i++){
		suma += notas[i];
	}
	promedio =suma/tam;
	cout<<"El promedio es: "<<promedio<<endl;
	*/

	/*
	int tam=0, suma=0, promedio=0;	
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese nota "<<tam<<":";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota(s/n): ";
		cin>>res;
    }while(res=='s'||res=='S');
    
    for(int i=0; i<tam; i++){
    	cout<<notas[i]<<endl;
	}
	
	for(int i=0; i<tam; i++){
		suma+=notas[i];
	}
	promedio=suma/tam;
	cout<<"El promedio es: "<<promedio<<endl;
	*/
	
	/*
	char nombre[30];
	cout<<"Ingrese Nombre Completo: ";
	//cin>>nombre;
	cin.get(nombre,30);
	cout<<nombre<<endl;
	*/
	
	/*
	string nombre; //char nombre [30]
	int dato;
	cout<<"Ingrese dato: ";
	cin.ignore();//para que reconozca el getline de abajo
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,nombre);
	
	cout<<nombre<<endl;
	*/
	
	string semana[7]={"LUNES","MARTES","MIERCOLS","JUEVES","VIERNES","SABADO","DOMINGO"};
	
	semana[2]="MIERCOLES";
	for(int i=0; i<7; i++){
		cout<<semana[i]<<endl;
	}
	system ("pause");
}
