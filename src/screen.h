/* ** por compatibilidad se omiten tildes **
================================================================================
 TRABAJO PRACTICO 3 - System Programming - ORGANIZACION DE COMPUTADOR II - FCEN
================================================================================
  definicion de funciones del scheduler
*/

#ifndef __SCREEN_H__
#define __SCREEN_H__

/* Definicion de la pantalla */
#define VIDEO_FILS 50
#define VIDEO_COLS 80

#include "colors.h"
#include "defines.h"
#include "game.h"

/* Estructura de para acceder a memoria de video */
typedef struct ca_s {
    unsigned char c;
    unsigned char a;
} ca;

void print(const char * text, unsigned int x, unsigned int y, unsigned short attr);

void print_hex(unsigned int numero, int size, unsigned int x, unsigned int y, unsigned short attr);

void print_int(unsigned int n, unsigned int x, unsigned int y, unsigned short attr);

void screen_inicializar();

void escribir_nombre_grupo();

void actualizar_display_estatico();

void actualizar_display_punto(unsigned int x, unsigned int y);

void actualizar_display_vidas();

void actualizar_display_puntos();

void actualizar_display_cursores();

void actualizar_display_debug_mode();

void actualizar_display_tareas();

void actualizar_display_mapeadas();

void mostrar_debug(unsigned int* registros);

//void print_registro32(const char* registro);

void print_char(unsigned char c, unsigned int x, unsigned int y, unsigned short attr);

void actualizar_display_relojJ();

void actualizar_display_relojS();

#endif  /* !__SCREEN_H__ */
