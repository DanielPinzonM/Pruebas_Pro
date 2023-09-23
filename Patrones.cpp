void Patrones(){

    short unsigned int Ajustes[2] =  {};
    short unsigned int **Patron;

        while(true){
            Serial.print("\n\n\n\n\n\n\n\n\n\n\n");  
            Serial.print("Ingrese el tiempo de retardo entre patrones:");

            while(Serial.available() == 0){
                
            }

            Ajustes[0] = Serial.parseInt()*40;

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
            Serial.print("Ingrese el numero de repeticiones:");
            while(Serial.available() == 0){
        
            }
            Ajustes[1] = Serial.parseInt();
            if (Ajustes[1] != 0){
                break;
            }
            else{
                Serial.print("\n\n\n\n\n\n\n\n\n\n\n");
                Serial.print("El numero de repeticiones ingresado no es valido");
                delay(3000);
            }
        }

        while(Ajustes[1]>0, Ajustes[1]--){

            Patron = new short unsigned int*[4]; //Patron1[4][2]={{231,129},{195,66},{129,36},{0,24}};
            Patron[0] = new short unsigned int[2]{231,129};  //11100111, 10000001
            Patron[1] = new short unsigned int[2]{195,66};   //11000011, 01000010
            Patron[2] = new short unsigned int[2]{129,36};   //10000001, 00100100
            Patron[3] = new short unsigned int[2]{0,24};     //00000000, 00011000

            EjecPatron(Patron, 4, Ajustes[0]);

            for(short int i=0; i<4; i++){
                delete [] Patron[i];
            }

            Patron = new short unsigned int*[4]; //Patron2[4][2]={{126,129},{189,66},{219,36},{231,24}};
            Patron[0] = new short unsigned int[2]{126,129};  //
            Patron[1] = new short unsigned int[2]{189,66};
            Patron[2] = new short unsigned int[2]{219,36};
            Patron[3] = new short unsigned int[2]{231,24};

            EjecPatron(Patron, 4, Ajustes[0]);

            for(short int i=0; i<4; i++){
                delete [] Patron[i];
            }

            Patron = new short unsigned int*[2]; //Patron1[2][2]={{36,51},{73,204}};
            Patron[0] = new short unsigned int[2]{36,51};
            Patron[1] = new short unsigned int[2]{73,204};

            EjecPatron(Patron, 2, Ajustes[0]*2);

            for(short int i=0; i<2; i++){
                delete [] Patron[i];
            }

            Patron = new short unsigned int*[4]; //Patron2[4][2]={{240,129},{225,66},{195,36},{135,24}};
            Patron[0] = new short unsigned int[2]{240,129};
            Patron[1] = new short unsigned int[2]{225,66};
            Patron[2] = new short unsigned int[2]{195,36};
            Patron[3] = new short unsigned int[2]{135,24};

            EjecPatron(Patron, 4, Ajustes[0]);

            for(short int i=0; i<4; i++){
                delete [] Patron[i];
            }
        }
}

void EjecPatron(short unsigned int **Patron, short int Tamano, short int tiempo){

    for (short int i = 0; i<tiempo; i++){
        for (short int j = 0; j < Tamano; j++){
            
            digitalWrite(RclkF, LOW);
            shiftOut(SerF, SrclkF, MSBFIRST, 0);
            digitalWrite(RclkF, HIGH);
            
            digitalWrite(RclkC, LOW);
            shiftOut(SerC, SrclkC, MSBFIRST, Patron[j][0]);
            digitalWrite(RclkC, HIGH);
            
            digitalWrite(RclkF, LOW);
            shiftOut(SerF, SrclkF, MSBFIRST, Patron[j][1]);
            digitalWrite(RclkF, HIGH);
            
            delay(5);
        }
    }

    digitalWrite(RclkF, LOW);
    shiftOut(SerF, SrclkF, MSBFIRST, 0);
    digitalWrite(RclkF, HIGH);
}