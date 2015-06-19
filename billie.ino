#define N 200
#define LIMIAR 500

#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196

void setup() {
  Serial.begin(9600);
}
 
void loop() {
  float input1 = 0;
  float input2 = 0;
  float input3 = 0;
  float input4 = 0;
  float input5 = 0;
  int i = 0;
  
  for (i = 0; i < N; i++) {
    input1 = input1 + analogRead(0);
  }
  input1 = input1 / N;
  //Serial.print("input1: ");
  //Serial.println(input1);
  //delay(500);

  for (i = 0; i < N; i++) {
    input2 = input2 + analogRead(1);
  }
  input2 = input2 / N;
  //Serial.print("input2: ");
  //Serial.println(input2);
  //delay(500);
  
  for (i = 0; i < N; i++) {
    input3 = input3 + analogRead(2);
  }
  input3 = input3 / N;
  //Serial.print("input3: ");
  //Serial.println(input3);
  //delay(500);
  
  for (i = 0; i < N; i++) {
    input4 = input4 + analogRead(3);
  }
  input4 = input4 / N;
  //Serial.print("input4: ");
  //Serial.println(input4);
  //delay(500);
  
  for (i = 0; i < N; i++) {
    input5 = input5 + analogRead(4);
  }
  input5 = input5 / N;
  //Serial.print("input5: ");
  //Serial.println(input5);
  //delay(500);

  if (input1 < LIMIAR) {
    tone(2, NOTE_C3, 500);
  } else if (input2 < LIMIAR) {
    tone(2, NOTE_D3, 500);
  } else if (input3 < LIMIAR) {
    tone(2, NOTE_E3, 500);
  } else if (input4 < LIMIAR) {
    tone(2, NOTE_F3, 500);
  } else if (input5 < LIMIAR) {
    tone(2, NOTE_G3, 500);
  } else {
    noTone(2);
  }
}
