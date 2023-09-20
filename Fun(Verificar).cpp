//Función que enciende y apaga los 64 led con tiempo entre medio
void Verificar(void){
        while(Serial.available() == 0){
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 255)
        digitalWrite(RclkF, HIGH);
        
        delay(1000);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 255)
        digitalWrite(RclkF, HIGH);
        delay(1000);
        }
}