#include <iostream>
#include<fstream>
#include<string>
using namespace std;

//FUNCION PARA CREAR UN USUARIO
string funNombre(string usuario){
	string line;
	ofstream myNewFile("Datos del Usuario.txt");
	if(myNewFile.is_open()){
    	cout<<"Cree un usuario"<<endl;
	cin>>usuario;
	myNewFile.close();
}
else cout<<"Error al abrir el archivo";
    return usuario;
};

//FUNCION DE HABITACIONES
int funHabitacion(){
    int habitacion, cantidad;
    // VARIABLE PARA ALMACENAR EL TIEMPO QUE USUARIO SE HOSPEDARA EN EL HOTEL
    cout<<" <---------------------CANTIDAD DE HABITACIONES-------------------> "<<endl;
    cout<<"¿ Cuantas habitaciones desea reservar?  "<<endl;
    cin>>cantidad;
    cout<<"<-------------------OPCIONES DE HABITACION-------------------->"<<endl;
    cout<<"¿Que  habitacion desea reservar? "<<endl;
    cout<<"1.Reservar la opcion 1"<<endl;
    cout<<"2.Reservar la opcion 2"<<endl;
    cout<<"3.Reservar la opcion 3"<<endl;
    cout<<"4.Reservar la opcion 4"<<endl;
    cin>>habitacion; // VARIABLE PARA ALMACENAR LA OPCION QUE USUARIO ELIJA
    if(habitacion==1){
            cout<<"Opcion 1: Habitacion individual"<<endl<<endl;
            cout << "<----------INFORMACION DE HABITACION---------->" << endl;
            cout<<"Costo por dia: $95.00"<<endl;
            cout<<"La habitacion incluye: cama individual, television, armario, baÃ±o."<<endl;
            }
            else if(habitacion==2){
            cout<<"Opcion 2: Habitacion doble"<<endl<<endl;
            cout << "<----------INFORMACION DE HABITACION---------->" << endl;
            cout<<"Costo por dia: $108.00"<<endl;
            cout<<"La habitacion incluye: 2 camas, un televisior, armario, baÃ±o, mini bar"<<endl;
            }
            else if(habitacion==3){
            cout<<"Opcion 3: Suite Presidencial"<<endl<<endl;
            cout << "<----------INFORMACION DE HABITACION---------->" << endl;
            cout<<"Costo por habitacion: $220.00"<<endl;
            cout<<"La habitacion incluye 3:cama, television, armario, baÃ±o, mini bar, penthouse."<<endl;
            }
            else if(habitacion==4){
            cout<<"Opcion 4: Suite VIP"<<endl;
            cout << "<----------INFORMACION DE HABITACION---------->" << endl<<endl;
            cout<<"Costo por dia: $350.00"<<endl;
            cout<<"La habitacion incluye: Cama grande, television, armario, baÃ±o, mini bar, terraza, jacuzzi"<<endl;
            }
            else{
            cout<<endl;
            }
    return habitacion;
};


    



//CUERPO DEL PROGRAMA
int main(){
     int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string usuario; 
    int habitacion, reserva, dia, mes, cantidad;
    int servicio, opcion;
    char confirma, acceso;
    cout<<" ¡BIENVENIDO AL HOTEL ALTOS DE SANTA ELENA! "<<endl;
    cout<<"Su nombre de usuario es: "<<funNombre(usuario)<<endl<<endl;
    cout<<"Si desea reservar una habitacion presione r o R ;si no desea realizar ninguna accion presione V "<<endl;
    cin>>acceso;
    while(acceso=='R' || acceso == 'r'){
    cout<<"<-------------------TIEMPO DE HOSPEDAJE----------------------->"<<endl;
    cout<<"Ingrese la fecha en que se hospedara " <<endl;
    while(true){
        cout<<"Ingrese el mes "<<" (Ejemplo : 02)"<<endl;
        cin>>mes;
        if(mes <= 12)
            break;
    }
    while(true){
        cout<<"Ingrese el dia: "<<endl;
        cin>>dia;
        if(dia <= dias[mes-1]) break;
    }
    cout<<"¿Cuantos dias desea hospedarse?" <<"(Dato numerico)"<<endl;
    cin>>reserva; 
    cout<<funHabitacion()<<endl;
           while(true){
            cout<<"7.si desea agregar un servicio adicional a su reserva"<<endl;
            cout<<"9.si no desea agregar otro servicio"<<endl;
            cin>>servicio;
            if(servicio==7 || servicio==9) break;
           }
            
            if (servicio == 7){
                cout<< "<--------------SERVICIOS ADICIONALES------------->" <<endl;
                    cout<<"1.Banquete buffet"<<endl;
                    cout<<"2.Cita en el SPA"<<endl;
                    cout<<"3.Salir"<<endl;
                    cin>>opcion;
            }
            else{
                cout<<endl;
            } 
                    switch (servicio){
                        case 1:
                    cout<<"<---------------INFORMACION DEL SERVICIO-------------------->"<<endl;
                    cout<<"El banquete buffet incluye desayuno, almuerzo, cena y acceso al bar"<<"\n";
                    cout<<"Costo adicional de $10.00 a su reserva "<<endl<<"\n";
                        break;
                     case 2: 
                     cout<<"<---------------INFORMACION DEL SERVICIO-------------------->"<<endl;
                        cout<<"Usted ha reservado una cita en el SPA"<<endl;
                        cout<<"Costo adicional de $12.50 a su reserva"<<endl<<endl;
                        break;
                    default:
                    	cout<<"";
                    }
                    
                  /*  cout<<"<----------------INFORMACION DE RESERVA------------------->"<<"\n"<<"\n";
        cout<<" usted ha reservado"<<"  "<<cantidad<< " habitaciones "<<endl;
            if(habitacion==1){
                cout<<"De tipo "<<habitacion<<" : Habitacion individual "<<endl;
            }
            else if(habitacion==2){
                cout<<"De tipo "<<habitacion<<"  : Habitacion doble "<<endl;
            }
            else if(habitacion==3){
                cout<<"De tipo "<<habitacion<<" : Suite Presidecial "<<endl;
            }
            else if(habitacion==4){
                cout<<"De tipo "<<habitacion<<" : Suite VIP "<<endl;
            }
            else{
                cout<<"Dato erroneo"<<endl;
            }
            if(opcion==1){
                cout<<"Con servicio adicional "<<opcion<<" : Banquete Buffet y un monto adicional de $10.00 a su reserva. "<<endl;
                	
				}
				else if(opcion==2){
					cout<<"Con servicio adicional "<<opcion<<" : cita reservada en el Spa y un monto adicional de $12.50 a su reserva. "<<endl;
				}
				else{
					cout<<""<<endl;
				}
                cout<<"TIEMPO DE HOSPEDAJE:"<<endl;
                cout<<reserva<<" dias." <<endl;
                cout<<"FECHA DE LLEGADA"<<endl;
                cout<<dia<<"/"<<mes<<"/"<<"2019"<<endl<<endl; */
               
                cout<<"Presione S si desea confirmar su reserva o presione N si desea cancelarla"<<endl;
                cin>>confirma;
             if(confirma=='S'){
                cout<<"Su reserva se ha guardado exitosamente"<<endl;
                
             }
             else{
                 cout<<"Su reserva ha sido cancelada"<<endl;
             }
             break;
			 }
             cout<<"Gracias por visitarnos"<<endl;
    return 0;
}