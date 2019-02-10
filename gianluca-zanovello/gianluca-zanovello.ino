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


 
