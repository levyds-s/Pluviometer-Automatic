//Código Reed Switch - Eletrogate
#define r_sw 2 //nomeia o pino 2 do Arduino, fazendo referência ao Reed Switch
#define led 3 // nomeia o pino 3 do Arduino, fazendo referência ao LED

void setup() {
  pinMode(r_sw, INPUT); //Seta o pino do sensor como entrada de sinal
  pinMode(led, OUTPUT); //Seta o pino do led como saída de sinal
}

void loop() {
  if(digitalRead(r_sw) == HIGH){ //Se o sensor for acionado, faça:
    digitalWrite(led, HIGH);     //Ligue o led
    }
    else {                       //Senão:
      digitalWrite(led, LOW);    //desligue o led
    }
}