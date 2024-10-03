/* CALCULADORA EN TERMINAL */

#include <iostream>
using namespace std;


int main(){
	char operacion;
	//Declaro en double, por si en la division hay algun numero con resto
	double num1,num2,resultado;
	resultado=0.0;
	
	do{
		//MENU
		cout<<"*** CALCULADORA***";
		cout<<'\n';
		
		cout<<"Las operaciones de esta calculador son:"<<endl;
		cout<<"SUMA (+)"<<endl;
		cout<<"RESTA (-)"<<endl;
		cout<<"MULTIPLICACION (*)"<<endl;
		cout<<"DIVISION (/)"<<endl;
		cout<<"SALIR (S)"<<endl;
		cout<<'\n';
		
		//Do While para permitir minimo un ingreso
		//Primer numero
		do{
			cout<<"Ingrese el primer numero: ";
			cin>>num1;
			cout<<'\n';
			if (cin.fail()){
				cin.clear(); //Para limpiar la entrada
				cin.ignore(1000, '\n'); //Para ignorar el resto de la linea
				cout<<"Entrada invalida. Por favor vuela a ingresar. \n";
			}
		}while(cin.fail());//Se repite hasta que la entrada sea valida
		
		//Operacion
		do {
	        cout << "Introduce una operación (+, -, *, /, S): ";
	        cin >> operacion;
	        if (operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/' && operacion != 'S') {
	            cout << "Operador no válido. Por favor, introduce un operador válido (+, -, *, /, S).\n";
	        }
   		} while (operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/' && operacion != 'S');
		
		//Segundo numero		
		do{
			cout<<"Ingrese el segundo numero:";
			cin>>num2;
			cout<<'\n';
			
			//Validacion de entrada
			if (cin.fail()){
				cin.clear(); //Para limpiar la entrada
				cin.ignore(1000, '\n'); //Para ignorar el resto de la linea
				cout<<"Entrada invalida. Por favor vuela a ingresar. \n";
			}
			
			//Validacion de operacion
			if(num2 == 0 && operacion == '/'){
				cout<<"Recuerde que no se puede dividir por 0.";
				cout<<'\n';
			}
		}while ((num2 == 0 && operacion == '/') || cin.fail());
		
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
			case 'S':
				cout<<"Gracias vuelva pronto!!!";
				break;
			default:
				cout << "Operación no válida." << endl;
				break;
		}
		cout<<'\n';
	} while (operacion != 'S');
	
	return 0;
	
}
