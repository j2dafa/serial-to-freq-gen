/*
  Software serial to frequency generator

  Based on Martyn Davies code with modifications to use Serial1
  instead of the Serial Software Library.

 This example code is in the public domain.

 */

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  Serial1.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
}

char buf[40];
int count=0;

void loop() { // run over and over
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }
  if (Serial.available()) {
    char ch = Serial.read();
    if(ch=='\r'){
      buf[count]=0;
      Serial1.print(buf);
      count = 0;   
    }else if(ch=='\n'){
      ;   
    }else{
      buf[count++] = ch;
    }
  }

}
