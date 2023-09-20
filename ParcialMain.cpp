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
    char Opcion;

    Serial.println("\n\n\n\n\n\n\n\n\n\n\n");
    Serial.println("Seleccione una de las siguientes opciones: \n");
    Serial.println("1. Verificar leds");
    Serial.println("2. Ingresar imagen por teclado");
    Serial.println("3. Ejecutar patrones predeterminados");

    while(Serial.available() == 0){
    
    }
    Opcion = Serial.read();

    switch(Opcion){
        case '1':
            //ejecutar función correspondiente
            break;
        case '2':
            //ejecutar función correspondiente;
            break;
        case '3':
            //ejecutar función correspondiente;
        default:
            Serial.print("\n<");
            Serial.print(Opcion);
            Serial.print(">");
            Serial.println(" no es una opcion valida");
            delay(3000);
    }
}