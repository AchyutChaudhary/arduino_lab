void setup() {
  // put your setup code here, to run once:

  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}
void loop() {

  int pattern[9]={5,3,1,2,4,5,1,3,5};

  for(int i=0;i<9;i++){
      digitalWrite(pattern[i],HIGH);
      delay (1000);
      digitalWrite(pattern[i],LOW);
    }
  
}
