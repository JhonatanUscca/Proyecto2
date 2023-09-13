#include "ControladorPrincipal.h"
#include "Vista_general.h"
#include "Modelo_Principal.h"
#include <filesystem>
#include <string>


ControladorPrincipal::ControladorPrincipal() :
    ventana(1088, 640, "JUEGO")
{}

void ControladorPrincipal::runGame() {



    while (ventana.isOpen()) {
        
        ventana.processEvents();

        ventana.display();
        ventana.clear();
    };


}