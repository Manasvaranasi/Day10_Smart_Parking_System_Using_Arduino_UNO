#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 6, 7, 8);

const int trigPin = 9;
const int echoPin = 10;

const int greenLED = 2;
const int redLED = 3;
const int buzzer = 4;

long duration;
int distance;

bool vehicleDetected = false;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  lcd.begin(16, 2);
  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("Smart Parking");
  lcd.setCursor(0, 1);
  lcd.print("System Ready");

  delay(2000);
  lcd.clear();
}

void loop()
{
  // Measure Distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Parking Occupied
  if(distance < 50)
  {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);

    // Beep only once when vehicle enters
    if(vehicleDetected == false)
    {
      digitalWrite(buzzer, HIGH);
      delay(500);
      digitalWrite(buzzer, LOW);

      vehicleDetected = true;
    }

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Parking Slot");

    lcd.setCursor(0, 1);
    lcd.print("Occupied");

    Serial.println("Vehicle Detected");
  }

  // Parking Available
  else
  {
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);

    digitalWrite(buzzer, LOW);

    vehicleDetected = false;

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Parking Slot");

    lcd.setCursor(0, 1);
    lcd.print("Available");

    Serial.println("Parking Available");
  }

  delay(500);
}