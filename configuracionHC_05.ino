// configuracion bluetoothHC-05, (con pulsador)


const int LED=13;
const int BTPWR=12; 

char nombreBT[10]="Ardu01";
char pin[5]="1234";
char velocidad='4'; //9600
char modo='0';// 0 escl. 1 maest





void setup() {
  pinMode(LED,OUTPUT);
  pinMode(BTPWR,OUTPUT);
  Serial.begin(38400); // Velocidad configuración  
  digitalWrite(BTPWR,LOW);
  digitalWrite(LED,HIGH);  //pulsamos pulsador HC-05
  delay(4000);
  digitalWrite(LED,LOW);
  digitalWrite(BTPWR,HIGH); //pulsamos pulsador HC-05
  delay(8000);

  Serial.print("AT\r\t");  //AT + salto de linea

  Serial.print("AT+NAME:");// : o = si no funciona // con las tres opciones '' '=' o ':'
  Serial.print(nombreBT);
  Serial.print("\r\t");
  
  Serial.print("AT+NAME=");// : o = si no funciona
  Serial.print(nombreBT);
  Serial.print("\r\t");
  
  Serial.print("AT+NAME");// : o = si no funciona
  Serial.print(nombreBT);
  Serial.print("\r\t");

  Serial.print("AT+PIN");// : o = si no funciona, o AT+PSWD
  Serial.print(pin);
  Serial.print("\r\t");
  Serial.print("AT+PIN:");// : o = si no funciona, o AT+PSWD
  Serial.print(pin);
  Serial.print("\r\t");
  Serial.print("AT+PIN=");// : o = si no funciona, o AT+PSWD
  Serial.print(pin);
  Serial.print("\r\t");
  
  Serial.print("AT+BAUD:");// : o = si no funciona
  Serial.print(velocidad);
  Serial.print("\r\t");
  Serial.print("AT+BAUD");// : o = si no funciona
  Serial.print(velocidad);
  Serial.print("\r\t");
  Serial.print("AT+BAUD=");// : o = si no funciona
  Serial.print(velocidad);
  Serial.print("\r\t");

  Serial.print("AT+MODE");// : o = si no funciona
  Serial.print(modo);
  Serial.print("\r\t");
  Serial.print("AT+MODE:");// : o = si no funciona
  Serial.print(modo);
  Serial.print("\r\t");
  Serial.print("AT+MODE=");// : o = si no funciona
  Serial.print(modo);
  Serial.print("\r\t");

  digitalWrite(LED,HIGH);   //Terminado
}

void loop() {
  // put your main code here, to run repeatedly:

}
