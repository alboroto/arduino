
//LA PATA PEQUEÑA DEL LED SIEMPRE ABAJO DEL TODO, DONDE LA PARTE AZUL
//QUE ES LA PARTE DE TIERRA



int led1=12;    //declaramos 3 Variables que van a ser los 3 leds
int led2=11;
int led3=10;

void setup(){
    pinMode(led1,OUTPUT);    //ponemos los 3 leds en modo salida
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
}

void loop(){
  digitalWrite(led1,HIGH);      //vamos encendiendo todos
  delay(500);                  //DEPENDIENDO DE EL NUMERO CUANTO MAS ALTO MAS DESPACIO VA
  digitalWrite(led2,HIGH);
  delay(500);                    //CUANTO MAS BAJO EL NUMERO MAS RAPIDO VA
  digitalWrite(led3,HIGH);
  delay(500);              //PORQUE SON LOS MILISEGUNDOS
  digitalWrite(led1,LOW);      //y despues apagandolos
  delay(500);
  digitalWrite(led2,LOW);
  delay(500);
  digitalWrite(led3,LOW);
  delay(500);
}
