
long int a = 0, b=1 , c=0,n;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println('1');
//  Serial.println('1');
  Serial.println("Enter the no of terms");
  delay(1200);
  n = Serial.parseInt();
  delay(1200);
  
  for(int i=0; i<n; i++){
      
      Serial.println(c);
      a=b;
      b=c;
      c = a + b;
    }

    delay(1000);
    exit(1);
  

}
