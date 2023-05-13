//www.elegoo.com
//2016.12.08

// DEBUG 用のマクロ
//#define DEBUG
#ifdef DEBUG
#define DBG(x) x
#else
#define DBG(x)
#endif


int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP); 

  // open serial port for debug;
  DBG(Serial.begin(9600);)
}

void loop() 
{
  DBG(Serial.println("start");)

  if (digitalRead(buttonApin) == LOW)
  {
    DBG(Serial.println("buttonApin low");)
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    DBG(Serial.println("buttonBpin low");)
    digitalWrite(ledPin, LOW);
  }

  DBG(Serial.println("end");)
  DBG(delay(1000);)

}
