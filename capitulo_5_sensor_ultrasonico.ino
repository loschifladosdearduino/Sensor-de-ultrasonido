int TRIG = 16;
int ECHO = 18;
int RELE = 14;
int DURACION;
int DISTANCIA;

void setup() {
 pinMode(TRIG, OUTPUT);
 pinMode(ECHO, INPUT);
 pinMode(RELE, OUTPUT);
 Serial.begin(9600);
}

void loop() {
 digitalWrite(TRIG,HIGH);
 delay(10);
 digitalWrite(TRIG,LOW);
 DURACION = pulseIn(ECHO,HIGH);
 DISTANCIA = DURACION /58.2;
 Serial.println(DISTANCIA);
 delay(200);
 if(DISTANCIA <=20 && DISTANCIA >=0){
 digitalWrite(RELE,HIGH); 
 delay(DISTANCIA * 20);
 digitalWrite(RELE,LOW);
 }
 }
