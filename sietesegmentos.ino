const int a = 3;
const int b = 3;
const int c = 3;
const int d = 3;
const int e = 3;
const int f = 3;
const int g = 3;
const int dp = 3;


void setup() 
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

void loop()
{
myServo.write(100);
delay(1000);
myServo.write(0);
delay(1000);
}

void uno(){
  apagartodo();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  }

void apagartodo(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
  
  }
