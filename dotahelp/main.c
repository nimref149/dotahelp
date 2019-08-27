#include <stdio.h>
#include <stdlib.h>
void ingresarPalabra(void);
void mostrarHeroes();
int main()
{
    printf("*Dota help 1.0*\n");
    printf("1-Lista de heroes");
    printf("2-Fortalezas");
    printf("3-Debilidades");
    printf("4-Consejos");
    printf("5-Items recomendados");
    prinrd("Salir");
    int opcion;
    printf("Ingrese opcion");
    scanf("%d",&opcion);

    switch(opcion){
    case 1:
        mostrarHeroes();
    break;
    case 2:
        printf("Fortalezas");
    break;
    case 3:
        printf("Debilidades");
    break;
    case 4:
        printf("Consejos");
    break;
    case 5:
        printf("Items recomendados");
    break;
    default:
    printf("Esta saliendo del programa");

    }
    system("pause");

    return 0;
}
void mostrarHeroes(){

printf("1-Huskar/n2-Mortre/n3-Nevermore/n4-Pudge/n5-NagaSiren");

}






















