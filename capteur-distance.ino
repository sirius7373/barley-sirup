const int led_rouge = 5;
const int led_jaune = 6;
const int led_verte = 7;
int trigPin = 8;
int echoPin = 9;
int buzzer = 10;
int etat_led = 0;
int distance;
long duration;

void setup() {
  pinMode(led_rouge, OUTPUT);
  pinMode(led_verte, OUTPUT);
  pinMode(led_jaune, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = 0.034 * duration / 2;

  if (distance > 30) {
    digitalWrite(led_verte, HIGH);
    digitalWrite(led_jaune, LOW);
    digitalWrite(led_rouge, LOW);
    noTone(buzzer);
  } else if (distance > 11) {
    digitalWrite(led_verte, LOW);
    digitalWrite(led_jaune, HIGH);
    digitalWrite(led_rouge, LOW);
    tone(buzzer, 550);
    delay(500);
  } else {
    digitalWrite(led_verte, LOW);
    digitalWrite(led_jaune, LOW);
    digitalWrite(led_rouge, HIGH);
    tone(buzzer, 2555);
  }
}
