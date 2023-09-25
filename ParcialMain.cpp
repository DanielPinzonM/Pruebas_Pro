//Puertos de Columnas
#define SerC 5
#define RclkC 6
#define SrclkC 7

//Puertos de Filas
#define SerF 8
#define RclkF 9
#define SrclkF 10

void setup(){
    //Set up Columnas
    pinMode(SerC, OUTPUT);
    pinMode(RclkC, OUTPUT);
    pinMode(SrclkC, OUTPUT);
    
    //Set up Filas
    pinMode(SerF, OUTPUT);
    pinMode(RclkF, OUTPUT);
    pinMode(SrclkF, OUTPUT);

    Serial.begin(9600);
}

void loop(){
    
    Publick();

}