#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b; // este procedimiento devuelve la suma de a+b
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b; //este procedimiento devuelve la resta de a-b
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b; //este procedimiento devuelve la multiplicacion de ab
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;  // este procedimiento devuelve la division de a/b
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
   if (a<b)   //comparamos si "a" es menor q "b"
    return b;   // si es correcto devuelve b
    else return a;   // si a es mayor que b devuelve a
}

//Devuelve el numero menor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a<b)    //condicion de comparacion
    return a;   // si la condicion es verdadera devuelve a
    else return b;  // si la condicion es falsa devuelve b
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
       int mayor=0;  //variable para comparar los tres numeros
    if (a>mayor)    // comparando a con la variable de comparacion
        mayor=a;

    if (b>mayor)  // comparando b con la variable de comparacion
        mayor=b;
    if (c>mayor)  // comparando c con la variable de comparacion
        mayor=c;

    return mayor;  // retorna la variable de comparacion

}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
  arreglo[posicion]=valor;  // se establece la posicion en el arreglo y se iguala a al valor.
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{

    return arreglo[posicion];  // este procedimiento devuelve el valor del arreglo en el indice de posicion .
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos.
int getMayor(int arreglo[], int tamano)
{
    int mayor=0;  // variable establecida para comparar.
    for(int i=0; i<tamano; i ++)    // ciclo de desplazamiento por eñ arreglo.
        if (arreglo[i]>mayor)       // comparacion de cada uno de los datos del arreglo.

          mayor= arreglo[i];         // asigna el numero del arreglo a mayor.
    return mayor;                   // retorna variable mayor.
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int menor=80000;       // variable a comparar.
    for (int i=0;i<tamano;i++)          // ciclo de desplazamiento del arreglo.
        {
        if (arreglo[i]<menor)           //* comparacion de los datos del arreglo con la variable a comparar.

        menor=arreglo[i];               // asigna el dato del arreglo a menor(cuando el ciclo if es verdadero).
        }

    return menor;                       // retorna menor.
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
     int promedio=0;   //variable nesesaria para calcular el promedio.
     int suma=0;       // variable nesesaria para sumar los datos del arreglo

     for (int i=0;i<tamano;i++){        //ciclo de desplazamiento por el arreglo
            suma += arreglo[i];         //suma a la variable suma cada dato del arreglo.
     }

     promedio= suma/tamano;             //asigna a la cariable promedio la division de suma/ tamano


    return promedio;                    // retorna promedio.
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
