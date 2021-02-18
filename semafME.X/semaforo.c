/*
 * File:   semaforo.c
 * Author: 20185087
 *
 * Created on 17 de Fevereiro de 2021, 16:25
 */


#include <xc.h>

#define VERMELHO       PORTDbits.RD7  
#define AMARELO        PORTDbits.RD6       
#define VERDE          PORTDbits.RD5
#define VERMELHOPED    PORTDbits.RD3   
#define VERDEPED       PORTDbits.RD2 
#define BOTAOPED       PORTDbits.RD1  


void init_semaforo( void )
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD1 = 1;

    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;
    PORTDbits.RD1 = 0;
}

void verde(int x)
{
    VERDE = x;
}

void amarelo(int x)
{
    AMARELO = x;
}

void vermelho(int x)
{
    VERMELHO = x;
}
void verdeped(int x)
{
    VERDEPED = x;
}

void vermelhoped(int x)
{
    VERMELHOPED = x;
}

int botaoped (void)
{
    return(BOTAOPED);
}