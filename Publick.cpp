void Publick(void){
    char Opcion;
    
    //Se imprime menú principal
    Serial.println("\n\n\n\n\n\n\n\n\n\n\n");
    Serial.println("Seleccione una de las siguientes opciones: \n");
    Serial.println("1. Verificar leds (verificacion)");
    Serial.println("2. Ingresar imagen por teclado (imagen)");
    Serial.println("3. Ejecutar patrones predeterminados de forma alternda");

    //Se espera hasta que se envien datos por el monitor serie (Serial.availabe)
    while(Serial.available() == 0){
    
    }

    //Se almacena el dato ingresado
    Opcion = Serial.read();

    //Se direcciona según el dato ingresado
    switch(Opcion){
        case '1':
            Verificar();
            break;
        case '2':
            Imagen();
            break;
        case '3':
            Patrones();
            break;
        default:
            Serial.print("\n<");
            Serial.print(Opcion);
            Serial.print(">");
            Serial.println(" no es una opcion valida");
            delay(3000);
    }
}