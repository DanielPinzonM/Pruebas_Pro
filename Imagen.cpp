void Imagen(){

    unsigned char Entrada;
    short unsigned int **Patron;
    short unsigned int ValorC = 0;
    bool FilaOn = false;
    short unsigned int aux = 0;

    Serial.print("\n\n\n\n\n\n\n\n\n\n\n");  
    Serial.print("¿Cuantas filas estaran prendidas en el patron?(1-8):");

    while(Serial.available() == 0){
        
    }
        aux = Serial.parseInt();

        if (aux>0 && aux <=8){
            Patron = new short unsigned int*[aux];
            aux=0;
        }
        else{
            Serial.print("\n\n\n\n\n\n\n\n\n\n\n");  
            Serial.print("Se ingreso un numero invalido de filas");
            dealy(3000);
            
            return;
        }

    Serial.print("\n\n\n\n\n\n\n\n\n\n\n");  
    Serial.print("Ingrese cada fila por separado en binario, siendo 1 encendido y 0 apagado:");

    for(short int i = 0; i<8; i ++){ //Filas
        for(short int j = 0; j<8; j++){ //Bits en la fila (Columnas)

            while(Serial.available() == 0){
                
            }

            Entrada = Serial.read();

            if (Entrada == '1'){  //Si es 1 se suma la potencia de dos correspondiente a la columna
                FilaOn = true;
                ValorC += ownpow(2, j); 
            }

            if (Entrada != '1' && Entrada != '0'){
                
                for(short int i=0; i<=aux; i++){
                    delete [] Patron[i];
                }

                delete[] Patron;

                Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
                Serial.print("(Error) Se ingreso un dato diferente a unos y ceros.");
                delay(3000);

                return;
            }
        }

        if(FilaOn == true){
            Patron[aux] = new short unsigned int[2]{255-ValorC,ownpow(2,i)};
            aux += 1;
        }
		
        ValorC = 0;
        FilaOn = false;
    }
    EjecPatron(Patron, aux, 400);

    for(short int i=0; i<=aux; i++){
        delete [] Patron[i];
    }
    delete[] Patron;


}

short int ownpow(short int base, short int expo){
    short int r = base;
    if (expo !=0){
        for(short int i = 1; i <expo; i++){
            r *= base;
        }
    }
    else{
        return 1;
    }
    return r;
}