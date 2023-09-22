//Patron 1
void EjecPatron1(void){
    for (int i = 0; i<400; i++){
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 231);
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 129);//Filas 10000001
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 231); //Columnas 11100111
        digitalWrite(RclkC, HIGH);
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 66); //Filas 01000010
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 195); //Columnas 11000011
        digitalWrite(RclkC, HIGH);
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 36); //Filas 00100100
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 129); //Columnas 10000001
        digitalWrite(RclkC, HIGH);
        
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 24); //Filas 00011000
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 0); //Columnas 00000000
        digitalWrite(RclkC, HIGH);
        
        
        delay(5);
    }
}