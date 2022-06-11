const int a = 3;
const int b = 4;
const int c = 5;
const int d = 6;
const int e = 7;
const int f = 8;
const int g = 9;
const int dp = 10;


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
cero();
delay(1000);
uno();
delay(1000);
dos();
delay(1000);
tres();
delay(1000);
cuatro();
delay(1000);
cinco();
delay(1000);
seis();
delay(1000);
siete();
delay(1000);
ocho();
delay(1000);
nueve();
delay(1000);
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

void cero(){
  apagartodo();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  }

void uno(){
  apagartodo();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  }

void dos(){
  apagartodo();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  }

void tres(){
  apagartodo();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  }

void cuatro(){
  apagartodo();
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
    }

void cinco(){
  apagartodo();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  }

void seis(){
  apagartodo();
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);  
  }

void siete(){
  apagartodo();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  }

void ocho(){
  apagartodo();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);  
    }

void nueve(){
  apagartodo();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);  
    }
