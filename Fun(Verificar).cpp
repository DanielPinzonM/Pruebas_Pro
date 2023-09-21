//Función que enciende y apaga los 64 led con tiempo entre medio
void Verificar(void){

        Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
        Serial.println("Ejecutando prueba de leds (1 segundo entre cambios de estado)");
        Serial.print("Envie cualquier dato para volver");
        while(Serial.available() == 0){
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 255);
        digitalWrite(RclkF, HIGH);
        
        delay(1000);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 0);
        digitalWrite(RclkF, HIGH);
        delay(1000);
        }
        
}