/*
* Sandoval Vargas Diego Ernesto
* A01709113
* 14/06/2022
*/

/*Clase paquete
 *Es la clase donde se crea un arreglo de instrumentos, tiene metodos de asignacion para cada tipo de instrumento,
 * tiene metodos para mostrar las caracteristicas de cada uno de los objetos en el arreglo, y calcular el preico final
 * del paquete(arreglo) sumando los precio individuales de cada instrumento, ademas de tener un metodo para calcular
 * el precio final si el cliente tiene un cupon, para aplicarse el cupon debe ser menor a 20% y el paquete debe tener un
 * precio inicial mayor de 250
*/
#ifndef UNTITLED_PAQUETE_H
#define UNTITLED_PAQUETE_H

#include "guitarra.h"
#include "piano.h"
#include "violin.h"
#include "instrumento.h"


class Paquete {

private:

    //Se crea el arreglo de instrumentos, definiendo como apuntador para implementar polimorfismo
    Instrumento* ins[50];
    int cantidad=0;

public:
    //constructor default del paquete
    Paquete(){};

    //Metodo para asignar el objeto al arreglo
    void asigna(Instrumento*);


    //Metodo para mostrar las caracteristicas del instrumento
    string mostrar_instrumentos();

    //Metodo para calular el precio del paquete
    string precio_final();

    //Metodo para el calcular el precio del paquete con cupon
    string precio_final(float cupon);

    //Metodo para que el usario pueda crear un objeto y se asigne al paquete
    void crear_asignar();

};

//Metodo de asignacion de guitarras
void Paquete::asigna(Instrumento *in) {
    ins[cantidad] = in;
    cantidad++;
}


//Metodo para mostrar los instrumentos que hay en el paquete (polimorfismo)
string Paquete::mostrar_instrumentos() {
    stringstream aux;
    for(int i=0;i<cantidad;i++) {
        aux << "\n" << "Instrumento " << i+1 << ": " << ins[i]->mostrar_car();
    }
    return aux.str();
}

//Metodo para mostrar el precio final del paquete
string Paquete::precio_final() {
    float total=0.0;
    stringstream aux;
    for(int i=0;i < cantidad;i++){
        total += ins[i]->get_precio();
    }
    aux << "El precio total del paquete es de: $" << total << endl;
    return aux.str();
}

//Metodo para mostrar el precio final del paquete si se tiene un cupon
string Paquete::precio_final(float cupon){
    stringstream aux;
    float total=0.0,final=0.0;

    for (int i = 0; i < cantidad; i++) {
        total += ins[i]->get_precio();
    }

    if(cupon<=20) {
        if (total > 250){
            final=total-(total*(cupon/100));
        }
        else{
            return "El cupon no es valido en esta compra, para usarse la compra debe tener un valor mayor de $250";
        }
    }
    else{
        return "El cupon no es valido, verifique e ingrese nuevamente";
    }
    aux << "El precio inicial del paquete fue: $" << total << "\nEl precio con descuento es: $"
        << final << "\nEl cliente ahorro: $" << total - final<<endl;
    return aux.str();
}

//Metodo para que el usuario cree un objeto y se asigne al paquete
void Paquete::crear_asignar(){
    int opcion;
    cout<<"Decide el tipo de instrumento a crear" <<endl;
    cout<<"1)Guitarra \n" << "2)Piano \n" << "3)Violin"<<endl;

    cin>>opcion;

    if(opcion==1){
        Guitarra* guitarra_usuario;
        string mar;
        string mod;
        string cuer;
        string tras;

        cout<<"Ingrese la marca: "<<endl;
        cin>>mar;
        cout<<"Ingrese la modelo: "<<endl;
        cin>>mod;
        cout<<"Ingrese el tipo de cuerdas: "<<endl;
        cin>>cuer;
        cout<<"Ingrese el tipo de trastes: "<<endl;
        cin>>tras;



        guitarra_usuario=new Guitarra(mar,mod,0.0,cuer,tras,1,0);
        cout<< "Caracteristicas de tu guitarra personalizada: \n" << guitarra_usuario->mostrar_car();
        asigna(guitarra_usuario);

    }
    else if(opcion==2){
        Piano* piano_usuario;
        string mar;
        string mod;
        string sin;
        int num;

        cout<<"Ingrese la marca: "<<endl;
        cin>>mar;
        cout<<"Ingrese la modelo: "<<endl;
        cin>>mod;
        cout<<"Ingrese el tipo de sintetizador: "<<endl;
        cin>>sin;
        cout<<"Ingrese el tipo de trastes: "<<endl;
        cin>>num;

        piano_usuario=new Piano(mar,mod,0.0,sin,num,1,0);
        cout<< "Caracteristicas de tu guitarra personalizada: \n" << piano_usuario->mostrar_car();
        asigna(piano_usuario);

    }
    else if(opcion==3){
        Violin* violin_usuario;
        string mar;
        string mod;
        string cuer;
        string bar;

        cout<<"Ingrese la marca: "<<endl;
        cin>>mar;
        cout<<"Ingrese la modelo: "<<endl;
        cin>>mod;
        cout<<"Ingrese el tipo de cuerdas "<<endl;
        cin>>cuer;
        cout<<"Ingrese el tipo de barbada: "<<endl;
        cin>>bar;

        violin_usuario=new Violin(mar,mod,0.0,cuer,bar,1,0);
        cout<< "Caracteristicas de tu guitarra personalizada: \n" << violin_usuario->mostrar_car();
        asigna(violin_usuario);
    }
    else{
        cout<<"Ingresa una opcion valida";
    }
}

#endif //UNTITLED_PAQUETE_H
