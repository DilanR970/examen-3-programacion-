#include <iostream>
#include <string>


using namespace std;
	char opcion;
struct Viajero {
       int id;
       char nombre[30];
       char nacionalidad[20];
       char fechaIngreso[30];
       char fechaSalida[30];
   }viaj[100];
   
   const int MAX_REGISTROS =100;
  
   
   
   
   int main() {
		cout << "SISTEMA DE REGISTRO DE VISITANTES"<<endl;
    	cout<<"------------------------------"<<endl;
     int opcion;
	 do {
    	
    	
        cout << "INGRESE UNA OPCION:\n";
        cout << "1. Ingresar datos de un visitante\n";
        cout << "2. Mostrar datos\n";
        cout << "3. Editar  \n";
        cout << "4. Borrar \n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	do{
            		for(int i=0;i<MAX_REGISTROS;i++){
                	cout<<"Ingresa el nombre del visitante: ";
                	cin.getline(viaj[i].nombre,30);
                	cout<<"Ingresa la nacionalidad: ";
                	cin.getline(viaj[i].nacionalidad,20);

				cout << "Desea ingresar otro candidato?: (s/n)"<< endl;
   				cin >> opcion;
   
} while (opcion == 'S' || opcion == 's');
	 break;
}
                
               
            case 2:
               
                break;
            case 3:
                
                
                break;
            case 4:
               
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida. Por favor, seleccione nuevamente.\n";
        }
    } while (opcion != 5);
    return 0;
}
