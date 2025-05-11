void setup() {
  for ( int i = 2 ; i < 8 ; i++){
    pinMode(i,OUTPUT);
  }

}

void loop() {
  for ( int i = 2 ; i < 8 ; i++){
    digitalWrite (i, HIGH);
    delay (100);
    digitalWrite (i,LOW);
  }

  for ( int i = 6 ; i > 3 ; i--){
    digitalWrite (i, HIGH);
    delay (100);
    digitalWrite (i,LOW);
  }

}
