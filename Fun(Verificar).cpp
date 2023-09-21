//Función que enciende y apaga los 64 led con tiempo entre medio
void Verificar(void){

    short int Tiempo, NumSec;

    while (true){
        Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
        Serial.print("Ingrese el tiempo entre cambios de estado:");
        while(Serial.available() == 0){
            
        }
        Tiempo = Serial.parseInt();
        Tiempo = Tiempo*1000;
        if (Tiempo != 0){
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
        NumSec = Serial.parseInt();
        if (NumSec != 0){
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
    Serial.print(Tiempo/1000);
    Serial.print(" segundos entre cambios de estado - ");
    Serial.print(NumSec);
    Serial.print(" repeticiones)");
    
    EjecVerificar(&Tiempo, &NumSec);
}

void EjecVerificar (short int *T, short int *NS){

    for(short int i = 0; i<(*NS); i++){
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 255);
        digitalWrite(RclkF, HIGH);
    
        delay(*T);
    
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 0);
        digitalWrite(RclkF, HIGH);
        delay(*T);
    }
}