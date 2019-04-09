#include "stdio.h"
#include "stdbool.h"
int main(int argc, char const *argv[]) {
  char letra;
  char palabra[6];
  palabra [0]='a',palabra [1]='l',palabra [2]='c',palabra [3]='h',palabra [4]='o',palabra [5]='f';
  int aciertos = 0;
  int f1=0;
  printf("Bienvenido al Dark Souls de los ahoracados.\n");
  printf("Suerte, la necesitaras.\n");
  printf("Tienes 5 intentos para hallar la palabra\n");
  printf("_ _ _ _ _ _ _ _ _\n");
  for (size_t i = 0; i < 5; i++) {
    printf(" ________\n");
    if (f1 == 1 || f1 == 2 || f1 == 3 || f1 == 4 || f1 == 5) {printf("|       |\n");}
    if (f1 == 2 || f1 == 3 || f1 == 4 || f1 == 5) {           printf("|       o\n");}
    if (f1 == 3 || f1 == 4 || f1 == 5) {                      printf("|      /|\\ \n");}
    if (f1 == 4 || f1 == 5) {                                 printf("|       |\n");}
    if (f1 == 5) {                                            printf("|      / \\ \n");}
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("========\n");
    printf("Palabras acertadas : %d\n", aciertos);
    printf("Intentos restastes: %d\n", intentos);
    printf("Introduce una letra\n");
    scanf("%c", &letra);

    if (letra == palabra[0] ) {

      aciertos++;
    }
    if (aciertos = 6){
      printf("Has terminado, la palabra era : alcachofa.\n");
      break;
    }
  }
  return 0;
}
