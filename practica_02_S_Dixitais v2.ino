/*Programa que permite escoger manualmente el led que se enciende en función del
valor de una variable de tipo String, modificando la variable en el propio codigo.
Autor:Diego Otero Figueira
Data: Novembro 2026
*/
String color = "";//variable para poder activar manualmente modificando el codigo el color del led que se enciende

void setup(){//se comprueba una vez solo
  Serial.begin(9600);//activa la pantalla para ver mensajes
  pinMode(12,OUTPUT);//identificamos como salida la patilla 12
  pinMode(11,OUTPUT);//identificamos como salida la patilla 11
  pinMode(10,OUTPUT);//identificamos como salida la patilla 10
  pinMode(9,OUTPUT);//identificamos como salida la patilla 9
  pinMode(8,OUTPUT);//identificamos como salida la patilla 8
  pinMode(7,OUTPUT);//identificamos como salida la patilla 7
}//termina void setup

void loop(){//bucle que se repite infinitamente
  if (Serial.available()){
    color = Serial.readString();
  }
  if (color == "amarillo"){//si se cumple condición activase a funcion si no comprueba siguiente condidión
    digitalWrite(12,HIGH);//enviar señal de encendido a la salida digital numero 12
    Serial.print ("led amarillo encendido");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
    digitalWrite(12,LOW);//enviar señal de apagado a la salida digital numero 12
    Serial.println("led amarillo apagado");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
  }//termina if amarillo
  else if (color == "verde"){//si se cumple condicion activase la funcion si no comprueba siguiente condidión
    digitalWrite(11,HIGH);//enviar señal de encendido a la salida digital numero 11
    Serial.print ("led verde encendido");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
    digitalWrite(11,LOW);//enviar señal de apagado a la salida digital numero 11
    Serial.println("led verde apagado");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
  }//termina else if verde
  else if (color == "naranja"){//si se cumple led naranja activase e desactivase cada 500 ms, con mensajes en pantalla, si no comprueba siguiente condidión
    digitalWrite(10,HIGH);//enviar señal de encendido a la salida digital numero 10
    Serial.print ("led naranja encendido");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
    digitalWrite(10,LOW);//enviar señal de apagado a la salida digital numero 10
    Serial.println("led naranja apagado");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
  }//termina else if naranja
  else if (color == "azul"){//si se cumple led azul activase e desactivase cada 500 ms, con mensajes en pantalla, si no comprueba siguiente condidión
    digitalWrite(9,HIGH);//enviar señal de encendido a la salida digital numero 9
    Serial.print ("led azul encendido");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
    digitalWrite(9,LOW);//enviar señal de apagado a la salida digital numero 9
    Serial.println("led azul apagado");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
  }//termina else if azul
  else if (color == "rojo"){//si se cumple led rojo activase e desactivase cada 500 ms, con mensajes en pantalla, si no comprueba siguiente condidión
    digitalWrite(8,HIGH);//enviar señal de encendido a la salida digital numero 8
    Serial.print ("led rojo encendido");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
    digitalWrite(8,LOW);//enviar señal de apagado a la salida digital numero 8
    Serial.println("led rojo apagado");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
  }//termina else if rojo
  else if (color == "blanco"){//si se cumple led blanco activase e desactivase cada 500 ms, con mensajes en pantalla, si no comprueba siguiente condidión
    digitalWrite(7,HIGH);//enviar señal de encendido a la salida digital numero 7
    Serial.print ("led blanco encendido");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
    digitalWrite(7,LOW);//enviar señal de apagado a la salida digital numero 7
    Serial.println("led blanco apagado");//enviamos mensaje a la pantalla
    delay(500);//esperar 500 ms
  }
    else {
      Serial.println ("escribe ben o codigo MAKINA");
      delay(500);
    }
  }//termina else if blanco
//termina void loop