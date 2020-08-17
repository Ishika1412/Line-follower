


int sleft =2;
int sright =3;
int l1 =5;
int l2 =6;
int r1 =9;
int r2 =10;


void setup( )  {
 pinMode (sleft, INPUT );
pinMode (sright, INPUT);
pinMode (11, OUTPUT );
pinMode (12,OUTPUT );
pinMode (r1, OUTPUT );
pinMode (r2, OUTPUT);
Serial.begin (9600);

}
void loop ( ) {
  int a = digitalRead (sleft);
  int b = digitalRead (sright) ;
  if (a==LOW && b==LOW)
  { 
    analogWrite(11, 125);
    analogWrite (12,0);
    analogWrite (r1,0);
    analogWrite (r2,125);
    Serial.println ("forward");
  }
  else if (a==HIGH && b==HIGH)
  {
    analogWrite(11,125);
    analogWrite(12,0);
    analogWrite(r1,0);
    analogWrite(r2,0);
    Serial .println ("turn RIGHT");
  } 
  else if (a==LOW  && b==HIGH)
  {
  analogWrite(11,0);
  analogWrite (12,0);
  analogWrite(r1,0);
  analogWrite (r2,125);
  Serial.println ("turn LEFT");
  }
  else if (a==HIGH&& b== HIGH)
  {
    analogWrite (11,0);
    analogWrite (12,0);
    analogWrite (r1,0);
    analogWrite (r2,0);
    Serial.println ("STOP");
  }

}
  
    
    
  
  
  
