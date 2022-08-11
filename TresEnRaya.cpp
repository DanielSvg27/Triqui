#include<iostream>
#include<graphics.h>
#include<math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
char triqui [3][3];
int empieza ();
char jugar;
int i, dado1, dado2,emp;
int main(){
	triqui [0][0] = '1';
	triqui [0][1] = '2';
	triqui [0][2] = '3';
	triqui [1][0] = '4';
	triqui [1][1] = '5';
	triqui [1][2] = '6';
	triqui [2][0] = '7';
	triqui [2][1] = '8';
	triqui [2][2] = '9';
	Hola uwu
	cout <<"Bienvenido al juego del TRES EN RAYA"<< endl;
	
	cout <<"Quiere empezar el juego? 0 para si o 1 para no"<< endl;
	cin>>emp;

	cout<<"El jugador que saque el numero mayor EMPIEZA"<<endl;
	int empieza();
}
	int empieza(){
	srand(time(NULL));
	dado1 = 1+rand() % 6;
	dado2 = 1+rand() % 6;
	while(dado1==dado2){
		dado1 = 1+rand() % 6;
		dado2 = 1+rand() % 6;
	}	
	if(dado1>dado2){
		cout<<"Obtuviste"<<dado1<<endl;
		cout<<"Tu openente obtuvo"<<dado2<<endl;
		cout<<"Tu empiezas!"<<endl;
	}
		else {
			cout<<"Obtuviste"<<dado1<<endl;
			cout<<"Tu openente obtuvo"<<dado2<<endl;
			cout<<"Empieza la maquina!"<<endl;
		}
	
}

