
char data = 0;
int led1 = 8;
int led2 = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == 'A') digitalWrite(led1, HIGH);
    if (data == 'a') digitalWrite(led1, LOW);
    if (data == 'B') digitalWrite(led2, HIGH);
    if (data == 'b') digitalWrite(led2, LOW);
  }
}
