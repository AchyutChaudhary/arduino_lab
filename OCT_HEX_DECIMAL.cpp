void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Decimal   OCT    HEX    Binary");
  for(int i=33;i<127;i++){
    Serial.print(i);            //DECIMAL
    Serial.print("         ");
    Serial.write(i,OCT);        //OCT
    Serial.print("         ");
    Serial.write(i,HEX);        //HEX
    Serial.print("         ");
    Serial.write(i,BIN);        //BIN
    Serial.println(" ");
    }
    delay(100);
    exit(1);
    
}
