// C++ code
// traffic light project @malvinhaparimwi
int button = 9;
int pedGreen = 7;
int pedred = 8;
int carGreen = 10;
int carOrange = 11;
int carRed = 12;
int crossTime = 5000;
long changeTime;


void setup()
{
  pinMode(button, INPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(pedred, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(carOrange, OUTPUT);
  pinMode(carRed, OUTPUT);
  digitalWrite(carGreen, HIGH);
  digitalWrite(pedred, HIGH);
  
}

void loop()
{
  int state = digitalRead(button);
  if (state == HIGH){
    changeLights();
  }
}

void changeLights(){
  digitalWrite(carOrange, HIGH);
  delay(2000);
  
}