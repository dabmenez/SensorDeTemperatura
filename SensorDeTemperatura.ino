
#define temp1 A0 
#define temp2 A1 
#define temp3 A2 

#define ledR 2
#define ledG 3
#define rele 5

int x = 0;
void setup() {
  
Serial.begin(9600); 
pinMode(temp1, INPUT);
pinMode(temp2, INPUT);
pinMode(temp3, INPUT);
pinMode(ledR, OUTPUT);
pinMode(ledG, OUTPUT);
pinMode(rele, OUTPUT);

}
 
void loop() {

digitalWrite(rele, LOW);

float valor_temp1 = float(analogRead(temp1));
float tensao1 = (valor_temp1 * 5) / 1023; 
float temperatura1 = tensao1 / 0.010; 

float valor_temp2 = float(analogRead(temp2));
float tensao2 = (valor_temp2 * 5) / 1023; 
float temperatura2 = tensao2 / 0.010;

float valor_temp3 = float(analogRead(temp3));
float tensao3 = (valor_temp3 * 5) / 1023; 
float temperatura3 = tensao3 / 0.010;
 
Serial.print("BOBINA A:");
Serial.println(temperatura1); 

Serial.print("BOBINA B:");
Serial.println(temperatura2); 

Serial.print("BOBINA C:");
Serial.println(temperatura3); 
Serial.println(" "); 

if(temperatura1 > 60 or temperatura2 > 60 or temperatura3 > 60){
  digitalWrite(ledR, HIGH);
  digitalWrite(rele, HIGH);
  while(x == 0){
    
  }
  
}

digitalWrite(ledG, HIGH);
delay(1000);
digitalWrite(ledG, LOW);
delay(1000);

}
