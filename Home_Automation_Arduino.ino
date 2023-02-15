String voice;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

  while(Serial.available()){
delay(3);
char c=Serial.read();
voice+=c;

}
if(voice.length()>0){
 Serial.println(voice);
 if(voice=="turn on light number 1")
 {
 digitalWrite(3,HIGH);
 }
 if(voice=="turn off light number 1")
 {
 digitalWrite(3,LOW);
 }

 else if(voice=="turn on fan number 1")
 {
 digitalWrite(2,HIGH);
 }

 else if(voice=="turn off fan number 1")
 {
 digitalWrite(2,LOW);
 }
 
 else if(voice=="turn on light number 2")
 {
 digitalWrite(13,HIGH); 
  }

  else if(voice=="turn off light number 2")
 {
 digitalWrite(13,LOW); 
  }

  
 else if(voice=="turn on fan number 2")
 {
 digitalWrite(12,HIGH);
 }
  else if(voice=="turn off fan number 2")
 {
 digitalWrite(12,LOW);
 }

  
   
voice="";}
 
}
