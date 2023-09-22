//Función que enciende y apaga los 64 led con tiempo entre medio
void Verificar(void){

    short int Ajustes[2] =  {};

    while (true){
        Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
        Serial.print("Ingrese el tiempo entre encendido y apagado:");
        while(Serial.available() == 0){
            
        }
        Ajustes[0] = Serial.parseInt()*1000;
        
        if (Ajustes[0] != 0){
            break;
        }
        else{
            Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
            Serial.print("El tiempo ingresado no es valido");
            delay(3000);
        }
    }
    
    while (true){
        Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
        Serial.print("Ingrese el numero de secuencias:");
        while(Serial.available() == 0){
            
        }
        Ajustes[1] = Serial.parseInt();
        
        if (Ajustes[1] != 0){
            break;
        }
        else{
            Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
            Serial.print("El numero de secuencias ingresado no es valido");
            delay(3000);
        }
    }
    Serial.print("\n\n\n\n\n\n\n\n\n\n\n");  
    Serial.print("Ejecutando prueba de leds (");
    Serial.print(Ajustes[0]/1000);
    Serial.print(" segundos entre encendido y apagado - ");
    Serial.print(Ajustes[1]);
    Serial.print(" repeticiones)");
    
    EjecVerificar(&Ajustes[0]);
}

void EjecVerificar (short int *A){

    for(short int i = 0; i<(*(A+1)); i++){
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 255);
        digitalWrite(RclkF, HIGH);
    
        delay(*A);
    
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 0);
        digitalWrite(RclkF, HIGH);
        delay(1000);
    }
}