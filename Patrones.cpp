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
    
    digitalWrite(RclkF, LOW);
    shiftOut(SerF, SrclkF, MSBFIRST, 0);//Filas off
    digitalWrite(RclkF, HIGH);
}

//Patron 2
void EjecPatron2(void){
    for (int i = 0; i<400; i++){
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0);//Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 126); //Columnas 01111110
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 129);//Filas 10000001
        digitalWrite(RclkF, HIGH);
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 189); //Columnas 10111101
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 66);//Filas 01000010
        digitalWrite(RclkF, HIGH);
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 219); //Columnas 11011011
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 36);//Filas 00100100
        digitalWrite(RclkF, HIGH);
        
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 231); //Columnas 11100111
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 24); //Filas 00011000
        digitalWrite(RclkF, HIGH);
        
        delay(5);
    }
    
    digitalWrite(RclkF, LOW);
    shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
    digitalWrite(RclkF, HIGH);
}

//Patron 3
void EjecPatron3(void){
    for (int i = 0; i<400; i++){
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0);//Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 36); //Columnas 00110011
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 51);//Filas 00110011
        digitalWrite(RclkF, HIGH);
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 73); //Columnas 01001001
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 204);//Filas 11001100
        digitalWrite(RclkF, HIGH);
        
        delay(5);
    }
    
    digitalWrite(RclkF, LOW);
    shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
    digitalWrite(RclkF, HIGH);
}

//Patron 4
void EjecPatron4(void){
    for (int i = 0; i<400; i++){
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0);//Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 240); //Columnas 11110000
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 129);//Filas 10000001
        digitalWrite(RclkF, HIGH);
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 225); //Columnas 11100001
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 66);//Filas 01000010
        digitalWrite(RclkF, HIGH);
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 195); //Columnas 11000011
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 36);//Filas 00100100
        digitalWrite(RclkF, HIGH);
        
        
        delay(5);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
        digitalWrite(RclkF, HIGH);
        
        digitalWrite(RclkC, LOW);
        shiftOut(SerC, SrclkC, MSBFIRST, 135); //Columnas 10000111
        digitalWrite(RclkC, HIGH);
        
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, MSBFIRST, 24); //Filas 00011000
        digitalWrite(RclkF, HIGH);
        
        delay(5);
    }
    
    digitalWrite(RclkF, LOW);
    shiftOut(SerF, SrclkF, MSBFIRST, 0); //Filas off
    digitalWrite(RclkF, HIGH);
}