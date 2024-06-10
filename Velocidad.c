#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "es_ES.UTF-8"); // Set locale to Spanish 

    float n; /*n en rpm*/
    float ll; /*radio de la llanta en pulgadas*/
    float an; /*ancho en milimetros*/
    float pi; /*dientes del piñon*/
    float co; /*dientes de corona*/
    float ta; /*talon*/

    printf("\n\n\n\n\n");

    printf("                                  introduzca las rpm: ");
    scanf("%f", &n);

    printf("    introduzca el ancho de la cubierta en milimetros: ");
    scanf("%f", &an);

    printf("                       introduzca el valor del talon: ");
    scanf("%f", &ta);

    printf("       introduzca la medida de la llanta en pulgadas: ");
    scanf("%f", &ll);

    printf("                    introduzca los dientes del pinon: ");
    scanf("%f", &pi);
    
    printf("                 introduzca los dientes de la corona: ");
    scanf("%f", &co);

    printf("\n");

    float rd = co/pi; /*relacion piñon-corona*/
    //printf("%f\n", rd);
    float vel1 = ((3.141592654*n)/30)*3.6*((ll/2)*(2.54/100)+(an*ta)/(1000*100));
    //printf("%f\n", vel1);
    float vel2 = vel1/rd;
    printf("                              Velocidad del vehiculo: %fkm/h\n", vel2);
    printf("\n");
    getchar();
    printf("                   presione enter para salir del programa.");
    getchar();
    return 0;
}