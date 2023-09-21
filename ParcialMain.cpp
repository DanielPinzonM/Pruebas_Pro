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
    
    //Se imprime menú principal
    Serial.println("\n\n\n\n\n\n\n\n\n\n\n");
    Serial.println("Seleccione una de las siguientes opciones: \n");
    Serial.println("1. Verificar leds (verificación)");
    Serial.println("2. Ingresar imagen por teclado (imagen)");
    Serial.println("3. Ejecutar patrones predeterminados");

    //Se espera hasta que se envien datos por el monitor serie (Serial.availabe)
    while(Serial.available() == 0){
    
    }

    //Se almacena el dato ingresado
    Opcion = Serial.read();

    //Se direcciona según el dato ingresado
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