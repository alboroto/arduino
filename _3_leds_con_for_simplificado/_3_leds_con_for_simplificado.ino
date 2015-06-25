/*ESTE EJERCICIO ES IGUAL QUE EL DE LOS LEDS PERO MUCHO MAS SIMPLIFICADO
TENEMOS 3 PINES O LEDS, 
*/

int tiempo=200;    //asignamos un tiempo, los milisegundos que vamos a querer que parpadee
int pin;            //creamos la variable pin
void setup()        
{
    for (pin=10;pin<=12;pin++)    //pin=10 es igual a 10 porque vamos a tener 3 leds
                     //que son desde 10 hasta el pin 12
                    //pin<=12 es que se van a usar pines del 12 para abajo (hasta el 10)
                    //entonces va preguntando si el pin es menor que 12....
                    //si es menos a 10 se le va sumando uno, hasta 12 y vuelve a repetirlo todo
  {
    pinMode(pin,OUTPUT);      //declaramos que el pin va a ser de salida
  }
}
    void loop()
    {
     
      for (pin=10;pin<=12;pin++)     //mientras que pin sea igual a 10 y menor o igual a 12
                                    //se le va sumando uno (en los pines de la placa)
    {
      digitalWrite(pin,HIGH);      //se va encendiendo
      delay(tiempo);               //usa el tiempo (milisegundos)
      digitalWrite(pin,LOW);        //se apaga
      delay(tiempo);                //usa el tiempo (milisegundos)
    }                                //y asi una y otra vez infinitamente desde 12 a 
}                                   //10 que son los pines (3) que tenemos conectados

