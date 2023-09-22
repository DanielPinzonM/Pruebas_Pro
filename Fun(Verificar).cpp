void Verificar(void){ 

    /*Función que pide los ajustes para la prueba de verificaion de
    los leds, los almacena e invoca la ejecucón.*/

    short int Ajustes[2] =  {};
    
    //Se pide y almacena el tiempo entre apagados en Ajustes[0]
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
    
    //Se pide y almacena la cantidad de repeticiones en Ajustes[1]
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

    //Se notifica el inicio y atributos de la prueba de verificacion
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
        
        //Accion de encender
        digitalWrite(RclkF, LOW); 
        shiftOut(SerF, SrclkF, LSBFIRST, 255); //Filas 11111111
        digitalWrite(RclkF, HIGH);
        
        delay(*A);
        
        //Accion de apagar
        digitalWrite(RclkF, LOW);
        shiftOut(SerF, SrclkF, LSBFIRST, 0); //Filas 00000000
        digitalWrite(RclkF, HIGH);
        
        delay(1000);
    }
}