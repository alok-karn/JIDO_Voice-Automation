int Yellow = 3;
int Blue = 4;
int Red = 5;

void setup() {
  Serial.begin(9600);
  pinMode(Yellow,OUTPUT);
  pinMode(Blue,OUTPUT);
  pinMode(Red,OUTPUT);
  

}


char c;
String voice;

void loop() {
  if (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
  }

  if(voice=="yellow")
  {
    digitalWrite(Yellow,HIGH);
  } else if(voice=="yellow close")
  {
    digitalWrite(Yellow,LOW);
  }

    if(voice=="blue")
  {
    digitalWrite(Blue,HIGH);
  } else if(voice=="blue close")
  {
    digitalWrite(Blue,LOW);
  }

  
  if(voice=="red")
  {
    digitalWrite(Red,HIGH);
  } else if(voice=="red close")
  {
    digitalWrite(Red,LOW);
  }


  if(voice=="open all")
  {
    digitalWrite(Red,HIGH);
    digitalWrite(Yellow,HIGH); 
    digitalWrite(Blue,HIGH);
  }else if(voice == "close all")
  {
    digitalWrite(Red,LOW);
    digitalWrite(Yellow,LOW); 
    digitalWrite(Blue,LOW);
  }

}