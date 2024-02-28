//Para la estructura del programa se necesitan de librerias, extras las cuales son como <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>
//se inicializa la estructura del codigo como b
using namespace std;
#define EQUIPOS 5
#define COLUMNAS 4
#define MAX_PUNT 50

//la matriz que debe imprimir un total de 3 veces
void imprimirMatriz(float matriz[EQUIPOS][COLUMNAS+1]);
//Se mantiene como nombre inicial de la matriz
struct L_NAG{
//Columnas para trabajar dentro de la matriz establecida
string nombre;

int V2010;
int V2011;
int V2012;
int V2014;
int PUNTOSTOTALES;
};
struct L_ANCES{;
string nombre;

int V2010;
int V2011;
int V2012;
int V2014;
int PUNTOSTOTALES;
};
struct L_SEG{;
string nombre;
int V2010;
int V2011;
int V2012;
int V2014;
int PUNTOSTOTALES;
};

int main()
{
    float matriz[EQUIPOS][COLUMNAS+1];
    imprimirMatriz(matriz);
    return 0;
}
int busquedaAleatorios(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void imprimirMatriz(float matriz[EQUIPOS][COLUMNAS+1]){
//do while
bool repetir=true;
char opcion;
L_NAG l_nag[EQUIPOS];
L_ANCES l_ances[EQUIPOS];
L_SEG l_seg[EQUIPOS];
//
do{
for(int i=0;i<EQUIPOS;i++){
    cout<<"EQUIPO N0 "<< i+1<<" de la liga  "<<endl;
//
   cout<<"Nombre: ";
    cin>>l_nag[i].nombre;
//Se rellena la matriz durante los a�os
l_ances[i].V2010=busquedaAleatorios(1,MAX_PUNT);

l_ances[i].V2011=busquedaAleatorios(1,MAX_PUNT);

l_ances[i].V2012=busquedaAleatorios(1,MAX_PUNT);

l_ances[i].V2014=busquedaAleatorios(1,MAX_PUNT);

l_ances[i].MAX_PUNT=l_ances[i].V2010+l_ances[i].V2011+l_ances[i].V2012+l_ances[i].V2014;

}
//----------------------------------------------------------------------------//----------------------------------------------------------------------------
system("cls");
int Puntosa=0;
int Puntosaa1=0;
int PuntosMe=100000000;
int PuntosMee=10000000;
string equipo_mayor,equipo_menor;
string equipomayor,equipomayor1;
float promedio,promedio1=0;
int suma,suma1=0;

//----------------------------------------------------------------------------//----------------------------------------------------------------------------
for(int i=0;i< EQUIPOS;i++){
//acumulador de votos
suma=suma+p_inde[i].MAX_PUNT;

//mayoria de puntos dentro de los partidos de la liga
//----------------------------------------------------------------------------//----------------------------------------------------------------------------
if(p_inde[i].MAX_PUNT>PuntosMe){
PuntosMe=l_seg[i].MAX_PUNT;
equipo_mayor=l_seg[i].nombre;
}
//menor votos
//----------------------------------------------------------------------------//----------------------------------------------------------------------------
if (l_seg[i].MAX_PUNTS<PuntosMe){
    votoMe=p_inde[i].MAX_PUNT;
    candidato_Menor=p_inde[i].nombre;
}

}
//promedio de votos
promedio=suma/EQUIPOS;
//----------------------------------------------------------------------------//----------------------------------------------------------------------------
for (int i=0;i<EQUIPOS;i++){
    suma1=suma1+p_demo[i].MAX_PUNT;
    //mayor votos
    if(p_demo[i].MAX_PUNT>PuntosMe){
votoM1=p_demo[i].MAX_PUNT;
candidato_Mayor1=l_ances[i].nombre;
}

if (p_demo[i].MAX_PUNT<PuntosMe){
    votoMe1=p_demo[i].MAX_PUNT;
    candidato_Menor1=p_demo[i].nombre;
}
}
promedio1=suma1/CANDIDATOS;
//----------------------------------------------------------------------------//----------------------------------------------------------------------------
cout<<setw(10)<<"------PARTIDO INDEPENDIENTE-----"<<endl<<endl;
cout<<setw(9)<<"Nombre /"<<setw(9)<<"2010 /"<<setw(15)<<"2011/ "<< setw(9) << "2012 /" << setw(15) << "2014/" << setw(15) << "puntos totales/" <<  endl<<endl;
  cout<<"------------------------------------------------------------------------------------------"<<endl;
    //for para imprimir los datos
    for(int i=0;i<CANDIDATOS;i++){
     cout<<setw(9)<<p_inde[i].nombre<<setw(9)<<p_inde[i].V2017<<setw(15)<<p_inde[i].V2019<< setw(9) << p_inde[i].V2021 << setw(15) << p_inde[i].V2023 << setw(15) <<p_inde[i].VTOTALES <<  endl<<endl;
    }
    cout<<"el equipo con mas puntos es "<<equipo_mayor <<" con "<< votoM<<" Puntos"<<endl<<endl;
    cout<<"el equipo con menor puntos es "<<equipo_menor <<" con "<<votoMe<<" Puntos"<<endl<<endl;
    cout<<"el promedio de puntos en el partido es "<<promedio<<" Puntos"<<endl<<endl;


//----------------------------------------------------------------------------//----------------------------------------------------------------------------

cout<<setw(10)<<"------Ligas Jugadas-----"<<endl<<endl;
cout<<setw(9)<<"Nombre "<<setw(9)<<"2010 "<<setw(15)<<"2011 "<< setw(9) << "2012 " << setw(15) << "2014" << setw(15) << "puntos totales" <<  endl<<endl;
      cout<<"------------------------------------------------------------------------------------------"<<endl;

    //for para imprimir los datos
    for(int i=0;i<EQUIPOS;i++){
     cout<<setw(9)<<l_seg[i].nombre<<setw(9)<<l_seg[i].V2017<<setw(15)<<l_seg[i].V2019<< setw(9) << l_seg[i].V2021 << setw(15) << l_seg[i].V2023 << setw(15) <<l_seg[i].PUNTOSTOTALES <<  endl<<endl;
    }
    cout<<"el equipo con mas votos "<<candidato_Mayor1<<" con "<< votoM1<<" Puntos<<endl<<endl;
    cout<<"el equipo con menos votos"<<candidato_Menor1 <<" con "<< votoMe1<<" Puntos"<<endl<<endl;
    cout<<"el promedio de puntos en el la Liga Segunda Division es "<<promedio1<<" Puntos"<<endl<<endl;

     cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        system("cls");
        if (opcion == 'n') {
            repetir = false;
        }
    } while (repetir);
}
