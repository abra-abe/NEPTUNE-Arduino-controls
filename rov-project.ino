// C++ code
//

//for Driver 1
int In1=11;
int In2=12;
int In3=10;
int In4=9;
int EnA=13;
int EnB=8;

//for Driver 2
int EnC=7;
int In5=6;
int In6=5;
int EnD=4;
int In7=3;
int In8=2;


void setup()
{
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In7, OUTPUT);
  pinMode(In8, OUTPUT);
  pinMode(EnA, OUTPUT);
  digitalWrite(EnA, HIGH);
  pinMode(EnB, OUTPUT);
  digitalWrite(EnB, HIGH);
  pinMode(EnD, OUTPUT);
  digitalWrite(EnD, HIGH);
  pinMode(EnC, OUTPUT);
  digitalWrite(EnC, HIGH);
  Serial.begin(9600);
  
}

void loop()
{

//  speedTest();
  
  if (Serial.available()){
    char ch = Serial.read();
    //for motor C
    if (ch == 'd'){
      digitalWrite(In7, LOW);
      digitalWrite(In8, HIGH);

      //for second motor
      digitalWrite(In5, LOW);
      digitalWrite(In6, HIGH);
      }
    if (ch == 'u'){
      digitalWrite(In7, LOW);
      digitalWrite(In8, LOW);

      //for second motor
      digitalWrite(In5, LOW);
      digitalWrite(In6, LOW);
      }
    if (ch == 'l'){
      //for motor A
        digitalWrite(In4, LOW);
      digitalWrite(In3, LOW);
      
    digitalWrite(In1, HIGH);
      digitalWrite(In2, LOW);

    }
    else if (ch == 'r'){
      //for motor B
        digitalWrite(In1, LOW);
        digitalWrite(In2, LOW);
      
      digitalWrite(In4, HIGH);
      digitalWrite(In3, LOW);
    }
    else if (ch == 'f'){
        //for motor A
        digitalWrite(In1, HIGH);
        digitalWrite(In2, LOW);

      //for motor B
      digitalWrite(In4, HIGH);
      digitalWrite(In3, LOW);
    }

     else if (ch == 'f'){
        //for motor A
        digitalWrite(In1, LOW);
        digitalWrite(In2, HIGH);

      //for motor B
      digitalWrite(In4, LOW);
      digitalWrite(In3, HIGH);
    }
    else if (ch == 'b'){
        //for motor A
        digitalWrite(In2, HIGH);
        digitalWrite(In1, LOW);

      //for motor B
      digitalWrite(In3, HIGH);
      digitalWrite(In4, LOW);
    }
     else if (ch == 's'){
        //for motor A
        digitalWrite(In1, LOW);
        digitalWrite(In2, LOW);

      //for motor B
      digitalWrite(In4, LOW);
      digitalWrite(In3, LOW);
    }
  }
  
  //for motor A
  //digitalWrite(In4, HIGH);
  //digitalWrite(In3, LOW);
  
  //for motor B
  //digitalWrite(4, HIGH);
  //digitalWrite(EnB, LOW);
  
  //delay(3000); // Wait for 3000 millisecond(s)
  
  //for motor A
  //digitalWrite(In4, LOW);
  //digitalWrite(In3, HIGH);
  
  //for motor B
  
  //digitalWrite(4, LOW);
  //digitalWrite(EnB, HIGH);
  
  //delay(3000); // Wait for 3000 millisecond(s)
} 

void speedTest()
{

  //testing the speed of the motor

  Serial.println("Started");

  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  
  for(int i=0; i<=255; i++)
  {
    analogWrite(EnA, i);
    Serial.println(i);
    delay(1000);
  }
}
