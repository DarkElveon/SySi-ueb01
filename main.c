/* 
 * File:   main.c
 * Author: Elveon
 *
 * Created on 24. April 2014, 18:20
 */

#include "main.h"

/*
 * Gibt das aktuelle Datum mit Uhrzeit aus
 */
int main() {
    time_t zeit;
    time(&zeit);                                // Sekunden seit 1. Jan 1970
    struct tm *lokaleZeit = localtime(&zeit);   // Pointer vom Typ tm
    char ausgabeZeit[MAX_SIZE];
    
    printf("Aktuelles Datum: %s\n", ctime(&zeit));

    /* Ausgabe als String mit Formatieranweisungen */
    strftime(ausgabeZeit, MAX_SIZE, "%a %b %d %H:%M:%S %Y", lokaleZeit);
    
    printf("Aktuelles Datum: %s\n", ausgabeZeit);
    
    return 0;
}

