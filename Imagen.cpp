void Imagen(){

    unsigned char Entrada;
    short unsigned int **Patron  = ;
    short unsigned int ValorC = 0;
    bool FilaOn = false;
    short unsigned int aux = 0;

    Serial.print("\n\n\n\n\n\n\n\n\n\n\n");  
    Serial.print("¿Cuantas filas estaran prendidas en el patron?:");

    while(Serial.available() == 0){
        
    }
        aux = Serial.parseInt();
        Patron = new short unsigned int*[aux];
        aux=0;

    Serial.print("\n\n\n\n\n\n\n\n\n\n\n");  
    Serial.print("Ingrese cada fila por separado en binario, siendo 1 encendido y 0 apagado:");

    for(short int i = 0; i<8; i ++){
        for(short int j = 0; j<8; j++){

            while(Serial.available() == 0){
                
            }

            Entrada = Serial.read();

            if (Entrada == '0'){
                FilaOn = true;
                ValorC += pow(2, j);
                
            }

            if (Entrada != '1' && Entrada != '0'){
                Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
                Serial.print("El tiempo ingresado no es valido");
                delay(3000);
            }
        }

        if(FilaOn == true){
            Patron[aux] = new short unsigned int[2]{ValorC,pow(2,i)};
            aux += 1;
        }

        ValorC = 0;
        FilaOn = false;
    }
    EjecPatron(Patron, aux, 400);
}

short int ownpow(short int base, short int expo){
    short int r = base;
    for(short int i = 1; i <expo; i++){
        if (expo !=0){
            r *= base;
        }
        else{
            return 1;
        }
    }
    return r;
}
