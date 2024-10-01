/* CALCULADORA EN TERMINAL */

#include <iostream>
using namespace std;


int main(){
	char operacion;
	//Declaro en double, por si en la division hay algun numero con resto
	double num1,num2,resultado;
	resultado=0.0;
	
	cout<<"*** CALCULADORA***";
	cout<<'\n';
	
	cout<<"Las operaciones de esta calculador son:"<<endl;
	cout<<"SUMA (+)"<<endl;
	cout<<"RESTA (-)"<<endl;
	cout<<"MULTIPLICACION (*)"<<endl;
	cout<<"DIVISION (/)"<<endl;
	cout<<'\n';
	
	//DU While para permitir minimo un ingreso
	do{
		cout<<"Ingrese el primer numero: ";
		cin>>num1;
		cout<<'\n';
		
		cout<<"Ingrese la operacion: ";
		cin>>operacion;
		cout<<'\n';
		
		cout<<"Ingrese el segundo numero:";
		cin>>num2;
		cout<<'\n';
		
		if(num2 == 0 && operacion == '/'){
			cout<<"Recuerde que no se puede dividir por 0.";
			cout<<'\n';
		}
	}while (num2 == 0 && operacion == '/');
	
	//Switch para realizar las operaciones dependiendo de la operacion
	switch (operacion){
		case '+':
			resultado=num1+num2;
			cout<<num1<<" + "<<num2<<" = "<<resultado;
			cout<<'\n';
			break;
		case '-':
			resultado=num1-num2;
			cout<<num1<<" - "<<num2<<" = "<<resultado;
			cout<<'\n';
			break;
		case '*':
			resultado=num1*num2;
			cout<<num1<<" * "<<num2<<" = "<<resultado;
			cout<<'\n';
			break;
		case '/':
			resultado=num1/num2;
			cout<<num1<<" / "<<num2<<" = "<<resultado;
			cout<<'\n';
			break;
		default:
			cout << "Operación no válida." << endl;
			break;
	}
	
	return 0;
	
}
