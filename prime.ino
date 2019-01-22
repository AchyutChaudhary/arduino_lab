void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("Enter number");
  delay(3000);
  int number = Serial.parseInt();
  Serial.print(number);
  Serial.print(": ");

  int count = 0;
  for(int i=1; i<=number; i++)
  {
    if(number%i == 0)
    {
      count++;
    }
  }
  if(count == 2)
  {
    Serial.println("Prime");
    Serial.println(" ");
  }
  else
  {
    Serial.println("Not prime");
    Serial.println(" "); 
  }
}
