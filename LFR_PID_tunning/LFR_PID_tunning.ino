#define rms 8
#define rmb 6
#define rmf 7
#define d_en 5
#define lmf 4
#define lmb 3
#define lms 2

int sensorPin[7] = {A5, A8, A9, A10, A11, A12, A13};
int s[7];
int sum = 0, wSum = 0, error = 0, lastError = 0, leftMotorSpeed, rightMotorSpeed;
double integral, derivative;
double Kp = 1.2, Kd = 2.8, Ki = 0.0;
int baseSpeed = 60;
char lastSen = 'l';

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(sensorPin[i], INPUT);
  }
  pinMode(rms, OUTPUT);
  pinMode(rmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(lms, OUTPUT);
  pinMode(d_en, OUTPUT);
  digitalWrite(d_en, HIGH);
}

void loop() {
  sensorInput(); 
  calculateError();
  pid();
  motor(leftMotorSpeed, rightMotorSpeed);
}
