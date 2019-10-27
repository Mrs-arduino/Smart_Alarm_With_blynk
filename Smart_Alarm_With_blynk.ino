
const int buzzer = 8; //buzzer to arduino pin 8
const int motionPin0= 0; //motion sensor
const int motionPin1= 1; //motion sensor
const int motionPin2= 2; //motion sensor
const int motionPin3= 3; //motion sensor

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 8 as an output
  pinMode(motionPin0, INPUT);
  pinMode(motionPin1, INPUT);
  pinMode(motionPin2, INPUT);
  pinMode(motionPin3, INPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  int value0= digitalRead(motionPin0);
  int value1= digitalRead(motionPin1);
  int value2= digitalRead(motionPin2);
  int value3= digitalRead(motionPin3);

  if ((value0 == HIGH) or (value1 == HIGH) or (value2 == HIGH) or (value3 == HIGH)){
      onalarm();
    }
    else
    {
      
    }
}

 void onalarm()
  {
    tone(buzzer, 1000); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);        // ...for 1sec
  }
