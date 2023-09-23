void Patrones(void){

	int **Patron = new int*[4]; //{memory1,memory2,memory3, memory4}
    Patron[0] = new int[2]{231,129};
    Patron[1] = new int[2]{195,66};
    Patron[2] = new int[2]{129,36};
    Patron[3] = new int[2]{0,24};

    EjecPatron(Patron1, 4);

}


void EjecPatron(int **Patron, short int Tamano){

    for (short int i = 0; i<400; i++){
        for (short int j = 0; j < Tamano; j++){
            
            digitalWrite(RclkF, LOW);
            shiftOut(SerF, SrclkF, MSBFIRST, 0);
            digitalWrite(RclkF, HIGH);
            
            digitalWrite(RclkC, LOW);
            shiftOut(SerC, SrclkC, MSBFIRST, Patron[j][0]);//Filas 10000001
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