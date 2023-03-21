// C++ code
//
int distanceThreshold = 0;
int cm = 0;
int inches = 0;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop()
{
  digitalWrite(7, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(7, LOW);
  delay(1500); // Wait for 1500 millisecond(s)
  
  digitalWrite(8, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(8, LOW);
  delay(1500); // Wait for 1500 millisecond(s)
  
  digitalWrite(9, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(9, LOW);
  delay(1500); // Wait for 1500 millisecond(s
  
  
   if(cm>distanceThreshold){
  	   digitalWrite(7, LOW);
       digitalWrite(8, LOW);
       digitalWrite(9, LOW);
	} 
  if(cm>distanceThreshold && cm >distanceThreshold -200){
   	digitalWrite(7, HIGH);
       digitalWrite(8, LOW);
       digitalWrite(9, LOW);

	} 
    if(cm>distanceThreshold -350 && cm >distanceThreshold-450){
   digitalWrite(7, HIGH);
       digitalWrite(8, HIGH);
       digitalWrite(9, LOW);
    }
        if(cm>distanceThreshold -450 && cm >distanceThreshold-550){
   digitalWrite(7, HIGH);
       digitalWrite(8, HIGH );
       digitalWrite(9, HIGH);
        }
     if(cm>distanceThreshold -200){
   digitalWrite(7, HIGH);
       digitalWrite(8, HIGH);
       digitalWrite(9, HIGH);
     }
        delay(300);
}