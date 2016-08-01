#include "sky.h"
/*
Wizard es una tarjeta electronica diseñada para robotica general
contiene las siguientes conexiones:
	*Entradas wizard
		-Boton D14
		-Sensor Bateria A1
		- 7 pines digitales (A11,D16,A0,A9,A6,D7,A8), los A puenden ser analogos
		-Receptor D1 TX
	*Salidas
		-Motor MA(D5-D6)
		-Motor MB(D10-D11)
		-Parlante D0 RX
*/

sky::sky(){
	//Asignacion de salidas
	//Asignacion de pines de salida Motor A
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	//Asignacion de pines de salida Motor B
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
}

void sky::Speeds(int SpeedMA, int SpeedMB){
	//Orientacion de direccion MA
	if(SpeedMA<0){
		digitalWrite(6, LOW);
		analogWrite(5, abs(SpeedMA));
	}
	else{
		digitalWrite(5, LOW);
		analogWrite(6, abs(SpeedMA));
	}
	delay(1);//Es posible inhabilitarlo
		 //Evita cambios bruscos de velocidad
	//Orientacion de direccion MB
	if(SpeedMB<0){
		digitalWrite(11, LOW);
		analogWrite(10, abs(SpeedMB));
	}
	else{
		digitalWrite(10, LOW);
		analogWrite(11, abs(SpeedMB));
	}
	delay(1);//Es posible inhabilitarlo
		 //Evita cambios bruscos de velocidad
}
