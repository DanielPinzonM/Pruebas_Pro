void Patrones(void){

    short unsigned int Patron1[4][2]={{231,129},{195,66},{129,36},{0,24}};
    short unsigned int Patron2[4][2]={{126,129},{189,66},{219,36},{231,24}};
    short unsigned int Patron3[2][2]={{36,51},{73,204}};
    short unsigned int Patron4[4][2]={{240,129},{225,66},{195,36},{135,24}};

    EjecPatron(Patron1[0], (sizeof(Patron1)/sizeof(Patron1[0])));

}


void EjecPatron(short unsigned int *Patron, short int Tamano){

    for (short int i = 0; i<400; i++){
        for (short int j = 0; j < Tamano*2; j+=2){
            
            digitalWrite(RclkF, LOW);
            shiftOut(SerF, SrclkF, MSBFIRST, 0);
            digitalWrite(RclkF, HIGH);
            
            digitalWrite(RclkC, LOW);
            shiftOut(SerC, SrclkC, MSBFIRST, *(Patron+j));//Filas 10000001
            digitalWrite(RclkC, HIGH);
            
            digitalWrite(RclkF, LOW);
            shiftOut(SerF, SrclkF, MSBFIRST, *(Patron+1+j));
            digitalWrite(RclkF, HIGH);
            
            delay(5);
        }
    }

    digitalWrite(RclkF, LOW);
    shiftOut(SerF, SrclkF, MSBFIRST, 0);
    digitalWrite(RclkF, HIGH);
}