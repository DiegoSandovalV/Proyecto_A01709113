/*
 * Proyecto A01709113
 * Sandoval Vargas Diego Ernesto
 * A01709113
 * 18/11/2021
 */


/*Clase Violin
 * Contiene los metodos genericos (setters y getters) para el manejo de del objeto en este caso
 * del violin. Tambien contienen un metodo que permite saber el porcentaje de ventas de dicho objeto
*/
#include<string>

using namespace std;

class Violin {

private:
    string marca;
    string modelo;
    string sonido;
    string cuerdas;
    string barbada;



public:
    int unidades; //Cantidad de producto que se tiene para vender
    int ventas;

    //Constructor vacio
    Violin() : marca(""), modelo(""), sonido(""), cuerdas(""),barbada(""),unidades(0), ventas(0) {};

    //Constructor
    Violin(string mar,string mod,string son,string cuer, string bar,int un, int ven) : marca(mar),modelo(mod),sonido(son),cuerdas(cuer),
                                                                                        barbada(bar),unidades(un), ventas(ven) {};


    //Metodos

    //getters
    string get_marca();
    string get_modelo();
    string get_sonido();
    string get_cuerdas();
    string get_barbada();
    int get_unidades();
    int get_ventas();

    //setters
    void set_marca(string);
    void set_modelo(string);
    void set_sonido(string);
    void set_cuerdas(string);
    void set_barbada(string);
    void set_unidades(int);
    void set_ventas(int);

    //Otros metodos

    string porcentaje_ventas();
};


//Getters


string Violin::get_marca() {
    return marca;
}

string Violin::get_modelo() {
    return modelo;
}

string Violin::get_sonido() {
    return sonido;
}

string Violin::get_cuerdas() {
    return cuerdas;
}

string Violin::get_barbada() {
    return barbada;
}

int Violin::get_unidades() {
    return unidades;
}

int Violin::get_ventas() {
    return ventas;
}

//Setters

void Violin::set_marca(string mar) {
    marca = mar;
}

void Violin::set_modelo(string mod) {
    modelo = mod;
}

void Violin::set_sonido(string son) {
    sonido = son;
}

void Violin::set_cuerdas(string cuer) {
    cuerdas = cuer;
}

void Violin::set_barbada(string bar) {
    barbada = bar;
}

void Violin::set_unidades(int un) {
    unidades = un;
}

void Violin::set_ventas(int ven) {
    ventas = ven;
}
//otros metodos

string Violin::porcentaje_ventas(){

    //Se calcula el porcentaje convirtiendo los valores int de ventas y unidades a float,
    float p;
    p = (float) ventas / (float) unidades * 100; // se multiplica * 100 para que se vea mejor el numero

    if(unidades>ventas) {
        return "El porcentaje de ventas es: " + to_string(p) + "%";
    }else if(unidades==ventas){
        return "Se han vendido todas las unidades";
    }
    else{
        return "Posible error en unidades y ventas";
    }
}
