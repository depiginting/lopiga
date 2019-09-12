int sensorLevelAir = A0;
int nilaiTerendah = 500;
int nilaiTertinggi = 1023;
int persentase;


void setup() {
  Serial.begin(9600);
}

void loop() {
 int levelAir = analogRead(sensorLevelAir);
 persentase = map(levelAir, nilaiTerendah, nilaiTertinggi, 0, 100);
 Serial.println(persentase);
}
