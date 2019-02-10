  int rosso2;
  int rosso1;
  int verde2;
  int verde1;
  int giallo2;
  int giallo1; // fatto
  
  int tempoSemaforo= 0;
  
  int lampeggiVerde= 0;
  int tempoTraLampeggi= 0;//fatto
  
  int tempoRosso = 0;
  int tempoVerde = 0;
  int tempoGiallo = 0;
  String input;

void setup() {
  rosso1 = 2;
  rosso2 = 4;
  verde1 = 7;
  verde2 = 8;
  giallo1 = 12;
  giallo2 = 13;
  

  pinMode(rosso1,OUTPUT);
  pinMode(rosso2,OUTPUT);
  pinMode(verde1,OUTPUT);
  pinMode(verde2,OUTPUT);
  pinMode(giallo1,OUTPUT);
  pinMode(giallo2,OUTPUT);
  
 Serial.begin(9600);
  
  Serial.println("tempoDurataSemaforo");
  while(Serial.available() == 0){}; 
  input=Serial.readString(); 
  tempoSemaforo=input.toInt(); 
 
 Serial.println("lampeggi");
  while(Serial.available() == 0){}; 
  input=Serial.readString(); 
  lampeggiVerde=input.toInt();
  
  Serial.println("duratagiallo");
  while(Serial.available() == 0){}; 
  input=Serial.readString(); 
  tempoGiallo=input.toInt();
  
  Serial.println("intervallo lampeggi");
  while(Serial.available() == 0){}; 
  input=Serial.readString(); 
  tempoTraLampeggi=input.toInt();
   tempoRosso = tempoSemaforo-tempoGiallo;
  tempoVerde = tempoRosso - lampeggiVerde * tempoTraLampeggi * 2;
}

void loop() {
 
void semaforoSerie(int rosso1,int giallo1,int verde1,int rosso2,int giallo2,int verde2);
void semaforoSerie(int rosso2,int giallo2,int verde2,int rosso1,int giallo1,int verde1);
 }
void lampeggiaVerde(int verde)
{
  for(int i=0; i > lampeggiVerde; i++)
{
  digitalWrite(verde, LOW);
  delay(tempoTraLampeggi);
  digitalWrite(verde,HIGH);
  delay(tempoTraLampeggi);
}
digitalWrite(verde,LOW);
}

void semaforoSerie(int rosso1,int giallo1,int verde1,int rosso2,int giallo2,int verde2)
{digitalWrite(rosso1,HIGH);
digitalWrite(verde2,HIGH);
delay(tempoVerde); 
lampeggiaVerde(verde2);
digitalWrite(verde2,LOW);
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2,HIGH);
delay(tempoGiallo);
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(rosso1,LOW);



}

 
