/*FREDDY MANUEL RUIZ RIOS 
1M3-CO
2019-0027U*/

/*LLAMADO DE LAS LIBRERIAS DE C*/
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
/*VARIABLES GLOBALES*/
#define UP 72
#define DOWN 80

/*INICIALIZACION DE FUNCIONES*/
/* Prototipos de las funciones*/
void logo(void);
void figura(void);
void figurainv(void);
void barra(void);
void presentacion(void);
void menu(void);
void esqueleto(void);
void Mostrar(void);
void datos_facturas(void);
void mostrar_a(void);
void mes(void);
void salir(void);
void mostrarfichero(void);
/*void examen(void);*/
/*ESTRUCTURA DE DATOS EMPLEADA EN EL PROYECTO*/
struct factura
{
	char NIC[20],NOMBRE[50],DIRECCION[100],CIUADAD[50];
	char CATASTRAL[30],EMISION[30],LISTA[20],SECUENCIA[20],DIRECCION_T[50];
	char N_medidor[20];
	int ANTERIOR_L,ACTUAL_L,ACTUAL_C, D_fac,DEUDA_ST,DEUDA_T;
	char fecha_Ant[20],fecha_Act[20],fact_mes[20];
	int mes;

	char sagua[20],sdia[20],slecac[20],sdeudast[20],sdeudaT[20];
}cliente[12];
/*FUNCION DE EVALUADA*/
/*****************************************************************************************/
/*struct funcion
{
	char clase[50],tutor[50];
	float ar1[3], ar2[3];
}datos;*/

/*void examen(void)
{
	int i;
	clrscr();

	printf("Ingrese el nombre de la clase: \n");
	gets(datos.clase);

	printf("Ingrese el nombre del tutor: \n");
	gets(datos.tutor);

	for(i=0;i<3;i++)
	{
		printf("Ingrese el primer valor \n");
		scanf("%f",&datos.ar1[i]);

		printf("Ingrese el segundo valor \n");
		scanf("%f",&datos.ar2[i]);		

		printf("El resultado es: %f \n",datos.ar1[i]+datos.ar2[i]);
	}
	getch();	
}*/
/*****************************************************************************************/
void main(void) /*CUERPO PRINCIPAL*/
{
	/*INICIALIZAR EL MODO GRAFICO*/
	int driver=0,modo;
	/*examen();*/
	logo(); /*Logos de la UNI*/
	barra(); /*Mostrar barra de carga*/
	initgraph(&driver,&modo,"C:\\TURBOC3\\bgi");
	/*FUNCIONES QUE CONTIENEN AL PROGRAMA*/
	presentacion(); /*Mostrar la presentacion*/
	menu(); /*Mostrar el menu*/
	closegraph(); /* Cerramos el modo grafico */
}

void figura(void) /*FIGURA 1 DE LA UNI*/
{
	int a=219,x=4,y=3;
	gotoxy(x,y);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+1);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+2);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+3);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+4);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+5);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+6);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c                %c%c%c%c%c%c%c%c%c%c%c  ",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+7);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+9);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+10);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+11);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+12);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+13);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+14);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c               %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+15);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+16);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+17);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+18);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+19);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+20);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
}

void figurainv(void)
{
	int a=219,x=4,y=3;
	gotoxy(x,y+20);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+19);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+18);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+17);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+16);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+15);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+14);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c               %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+13);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+12);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+11);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+10);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+9);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+7);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+6);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c                %c%c%c%c%c%c%c%c%c%c%c  ",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+5);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+4);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+3);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+2);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y+1);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
	delay(50);
	gotoxy(x,y);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
	printf("\n");
}

void mostrarfichero()
{
	int i;
	FILE * carpeta;
	FILE * deuda;
	carpeta = fopen("INFORME.txt","r");
	deuda = fopen("DEUDA.txt","r");
	 clrscr();
	 cleardevice();
	outtextxy(30,20,"ELIJA EL MES DE LA  FACTURA:");

	settextstyle(1,0,2);
	outtextxy(50,100,"1) ENERO");
	outtextxy(200,100,"2) FEBRERO");
	outtextxy(350,100,"3) MARZO");
	outtextxy(50,200,"4) ABRIL");
	outtextxy(200,200,"5) MAYO");
	outtextxy(350,200,"6) JUNIO");
	outtextxy(50,300,"7) JULIO");
	outtextxy(200,300,"8) AGOSTO");
	outtextxy(350,300,"9) SEPTIEMBRE");
	outtextxy(50,400,"10) OCTUBRE");
	outtextxy(250,400,"11) NOVIEMBRE");
	outtextxy(450,400,"12) DICIEMBRE");

	gotoxy(40,2);scanf("%d",&cliente[0].mes);

	clrscr();
	cleardevice();
	setbkcolor(0);
	
	for(i=0;i<13;i++)
	{
		if (i == cliente[0].mes-1) 
		{
			printf("Factura %i\n\n",cliente[0].mes);
			if (carpeta != NULL)
			{
				
			 	fgets(cliente[i].NOMBRE,50,carpeta);
			 	
				printf("Nombre de Usuario\n");
				puts(cliente[i].NOMBRE);
				
				fclose(carpeta);
			  
			}
			
			
			if(deuda != NULL)
			{
				fgets(cliente[i].sdeudaT,20,deuda);
				
				printf("\nDeuda \n");
				puts(cliente[i].sdeudaT);
				
				fclose(deuda);
			}
		}
		
	i=13;
	}	
	getch();	
}

void logo()
{
	clrscr();	/*Limpiar pantalla*/
	printf("\n\n"); /*Doble salto de linea*/

	textcolor(BLUE); /*Texto color azul*/
	figura(); /*Llamado a la funcion figura*/
	delay(100); /*Restraso de 100 ms*/

	textcolor(RED); /*Texto color rojo*/
	figurainv(); /*Llamado a la funcion figura invertida*/
	delay(100); /*Retraso de los 100 ms*/

	textcolor(YELLOW); /*Texto color Verde*/
	figura();	/*Llamado a la funcion figura*/
	delay(100); /*Retraso de 100 ms*/

	textcolor(BLUE); /*Texto de color azul*/
	figurainv();  /*Llamado a la funcion figura invertida*/
}

void barra()
{
	int i,x,a;
	clrscr();
	textcolor(WHITE);
	a=0;
	x=0;
	for ( i = 0; i<=100; i++)
	{
		if ( i<=100)
		{
			textcolor(WHITE);
	  		delay(5);
	    	gotoxy(38,18);
			cprintf("%i",i);
			gotoxy(43,18);
			printf("%" );
		}
	    if (i>=30 && a<=50)
	    {
	    	x=a+1;
	    	delay(30);
	    	textcolor(GREEN);
	    	gotoxy(15+x,17);
			cprintf("ß");
	    	gotoxy(15+x,17.5); 
			cprintf("ß");
			a=a+1;
	    }
	}
	textcolor(CYAN);gotoxy(26,22);cprintf("PULSE UNA TECLA PARA CONTINUAR");	
	getch();	
}

void presentacion (void) /*Inicio de la presentacion*/
{
	int i; /*Variable contadora*/
	setbkcolor(BLACK); /*Color de fondo*/
	setlinestyle(SOLID_LINE,8,THICK_WIDTH); /*Grosor(linea solida,relleno,ancho)*/
	setcolor(WHITE); /*Color de los elementos graficos*/
	setfillstyle(SOLID_FILL,WHITE); /*Relleno(tipo de relleno,color)*/
	setcolor(BLUE); /*Color de los elementos graficos*/
	rectangle(1,1,getmaxx()-1,getmaxy()-1); /*Crear marco*/
	rectangle(8,8,getmaxx()-8,getmaxy()-8); /*Crear marco*/
	/*LOGO DE LA UNI*/
	settextstyle(5,0,2); setcolor(8);
	setcolor(1); /*Color de los elementos graficos*/
	for (i=89;i<=184;i++) { rectangle(240,88,263,i); delay(5); }
	for (i=264;i<=338;i++) { rectangle(263,157,i,184); delay(5); }
	for (i=156;i>=126;i=i-1) { rectangle(315,i,338,157); delay(5); }
	for (i=149;i>=88;i=i-1) { rectangle(276,i,300,150); delay(5); }
	for (i=301;i<=371;i++) { rectangle(300,88,i,115); delay(5); }
	for (i=116;i<=184;i++) { rectangle(348,115,371,i); delay (5);}
	for (i=372;i<=410;i++) { rectangle(371,157,i,184); delay (5); }
	for (i=156;i>=124;i=i-1) { rectangle(387,i,410,157); delay (5); }
	for (i=113;i>=88;i=i-1) { rectangle(387,i,410,114); delay (5); }
	delay(400); /*Animacion del logo*/
	settextstyle(8,0,2);	/*Estilo de letra(fuente,posicion,size)*/
	setcolor(15);			/*Color de los elementos graficos*/
	settextstyle(8,0,1);
	outtextxy(170,30,"Universidad Nacional de Ingenieria");	/*Impresion en pantalla*/
	outtextxy(50,200,"Alumno:");
	outtextxy(50,230,"Freddy Manuel Ruiz Rios");
	outtextxy(50,260,"Carne:");
	outtextxy(50,290,"2019-0027U");
	outtextxy(470,320,"Grupo: 1M3-C0");
	outtextxy(50,320,"Docente: Juan Francisco Gomez");
	settextstyle(8,0,1);
	outtextxy(200,405,"Copyright 2020,UNI"); /*Imprimir texto(coordenada x, coordenada y)*/
	outtextxy(170,435,"Presione ENTER para continuar");
	getch();	
} /*Fin Presentacion*/
 
/*Comienza Menu*/
void menu(void)
{
	char move = ' ';
	int y=0;
	cleardevice();
	setcolor(WHITE);
	setbkcolor(BLACK);
	do{
		rectangle(20, 20, 620, 325);
		settextstyle(0,0,1);	/*Estilo de letra(fuente,posicion,size)*/
		/*IMPRESIONES DEL MENU*/
		outtextxy(284,80,"Nuevo");outtextxy(280,110,"Listar");
		outtextxy(270,140,"Ver Presentacion");outtextxy(241,170,"Consultar por mes");
		outtextxy(230,200,"Mostrar fichero");outtextxy(265,230,"salir");
	    /*	outtextxy(285,260,"Salir");*/
		outtextxy(200,80+y,"->");outtextxy(400,80+y,"<-");
		move = getch();
		cleardevice();
		if(move == DOWN)
		{
			if(y<150){y+=30;}
			else{y=0;}
			sound(392);
			delay(50);
			nosound();
		}
		else
		{
			if(move ==UP)
			{
				if(y>=30){y-=30;}
				else{y=150;}
				sound(392);
				delay(50);
				nosound();
			}
		}
	}while(move != 13);
	sound(839.3);delay(50);nosound();

	switch(y)
	{
	  case 0:
			cleardevice();
			setbkcolor(BLACK);
			datos_facturas();
			mostrar_a();
			break;
	  case 30:
			cleardevice();
			setbkcolor(BLACK);
			Mostrar();
			break;
	  case 60:
			presentacion();
			menu();
			break;
	  case 90:
			mes();
			menu();
			break;
	  case 120:
  			cleardevice();
  			mostrarfichero();
  			getch();
			break;
	  case 150:
			salir();
			break;
		/* case 180:
		printf("Salir");break; */

	}
}

void esqueleto(void)
{
	cleardevice();
	setbkcolor(15); /* Color de pantalla modo grafico */
	setcolor(RED);  /* Color del rectangulo */
	rectangle(0,0,639,479);  /* Rectangulo dibujado   */

	setcolor(8); /* Color de los textos y lineas */

	/* Lineas Horizontales */
	line(1,30,639, 30 ); line(1,100,639,100);
	line(1,120,639,120);line(1,160,639,160);
	line(1,140,639,140);line(1,180,639,180);
	line(1,300,639,300);line(348,370,639,370);
	line(348,420,639,420);

	/* Lineas verticales */

	line(150,30,150,100);line(400,30,400,160); line(542,30,542,100);
	line(80,100,80,160);line(160,100,160,180);line(230,100,230,300);
	line(290,100,290,160);line(500,140,500,160);
	line(450,160,450,370);line(347,300,347,479);

	setfillstyle(1,11 );/* Estilo y color del relleno */
	bar(1,31,149,99); /* Relleno */
	bar(401,31,541,99); bar(1,101,79,119);
	bar(81,101,159,119); bar(161,101,229,119);
	bar(231,101,289,119); bar(291,101,399,119);
	bar(401,101,638,119); bar(1,141,79,159);
	bar(231,141,289,159); bar(401,141,499,159);
	bar(1,161,159,179); bar(231,161,449,179);
	bar(451,161,638,179);bar(348,301,449,369);
	bar(348,371,638,419);

	settextstyle(7,0,1); /* Cambiar el tamaÂ¤o y fuente del texto  */
	outtextxy(6,4,"ENACAL"); /* Impresion  */
	settextstyle(0,0,1);
	outtextxy(100,14,"EMPRESA NICARAGUA DE ACUEDUCTOS Y ALCANTARILLADOS SANITARIOS" );
	outtextxy(1,32,"NIC:");
	outtextxy(1,41,"NOMBRE DEL USUARIO:");
	outtextxy(1,51,"DIRECCION:");
	outtextxy(1,80,"CIUADAD/DPTO:");
	outtextxy(1,90,"INMOBILIARIA:");outtextxy(160,90,"N/A");

	outtextxy(401,32,"CUENTA CATASTRAL:");
	outtextxy(401,41,"FECHA DE EMISION:");
	outtextxy(401,51,"TARIFA:"); outtextxy(550,51,"DOM - MGA");
	outtextxy(401,71,"LISTA:");
	outtextxy(401,81,"SECUENCIA:");
	outtextxy(401,91,"DIRECCION TECNICA:");

	outtextxy(13,102,"NUMERO");outtextxy(13,112,"MEDIDOR");
	outtextxy(90,102,"LECTURA");outtextxy(90,112,"ANTERIOR");
	outtextxy(168,102,"LECTURA");outtextxy(168,112,"ACTUAL");
	outtextxy(233,102,"CONSUMO");outtextxy(233,112,"ACTUAL");
	outtextxy(300,102,"DIAS");outtextxy(300,112,"FACTURADOS");
	outtextxy(480,108,"DEUDA TOTAL");
	outtextxy(10,142,"FECHA"); outtextxy(10,152,"LECTURA");
	outtextxy(232,142,"FACTURA");outtextxy(232,152,"MES");
	outtextxy(415,142,"FACT.");outtextxy(415,152,"PENDIENTE."); outtextxy(550,148,"1");
	outtextxy(20,162,"HISTORICO DE");outtextxy(20,172 ,"CONSUMO PROMEDIO");
	outtextxy(240,168,"CONCEPTO DE FACTURACION");
	outtextxy(480,168,"VALOR DEL MES");

	outtextxy(10,192,"ESTIMADO USUARIO ENACAL");
	outtextxy(10,202,"LE RECUERDA CUMPLIR CON EL ");
	outtextxy(10,212,"PAGO DE SU FACTURA EN MORA");
	outtextxy(10,222,"YA QUE ESTA SUJETO A CORTE,");
	outtextxy(10,232,"EVITE LA SUSPENCION DEL");
	outtextxy(10,242,"SERVICIO Y EL PAGO DE");
	outtextxy(10,252,"RECONEXION");

	outtextxy(240,192,"C FIJO DOMICILIARIO");
	outtextxy(240,202,"C VAR AGUA DOMICILIARIA");
	outtextxy(240,212,"C VAR ALCA DOMICILIARIA");
	outtextxy(240,222,"TRAT AGUA RESI DOM");

	outtextxy(490,192,"C$");  outtextxy(550,192,"8.18");
	outtextxy(490,202,"C$");
	outtextxy(490,212,"C$");  outtextxy(550,212,"101.76");
	outtextxy(490,222,"C$");  outtextxy(550,222,"58.65");
	outtextxy(490,330,"C$");
	outtextxy(500,125,"C$");

	outtextxy(348,330,"TOTAL DEL MES");
	outtextxy(420,390,"FECHA DE VENCIMIENTO");

	outtextxy(2,400,"ººÛºÛººÛºÛººº");
	outtextxy(2,410,"ººÛºÛººÛºÛººº");
	outtextxy(70,400,"ÛºººÛºÛºÛºÛºÛ");
	outtextxy(70,410,"ÛºººÛºÛºÛºÛºÛ");
	outtextxy(130,400,"ÛºººÛºÛºÛºÛºÛ");
	outtextxy(130,410,"ÛºººÛºÛºÛºÛºÛ");
	outtextxy(230,400,"ÛºººÛºÛºÛºÛºÛ");
	outtextxy(230,410,"ÛºººÛºÛºÛºÛºÛ");
}

void datos_facturas(void)
{
	int i;
	FILE * carpeta;
	FILE * deuda;
	carpeta = fopen("INFORME.txt","w");
	deuda = fopen("DEUDA.txt","w");
	clrscr();
	cleardevice();

	outtextxy(30,20,"ELIJA EL MES DE LA NUEVA FACTURA:");

	settextstyle(1,0,2);
	outtextxy(50,100,"1) ENERO");
	outtextxy(200,100,"2) FEBRERO");
	outtextxy(350,100,"3) MARZO");
	outtextxy(50,200,"4) ABRIL");
	outtextxy(200,200,"5) MAYO");
	outtextxy(350,200,"6) JUNIO");
	outtextxy(50,300,"7) JULIO");
	outtextxy(200,300,"8) AGOSTO");
	outtextxy(350,300,"9) SEPTIEMBRE");
	outtextxy(50,400,"10) OCTUBRE");
	outtextxy(250,400,"11) NOVIEMBRE");
	outtextxy(450,400,"12) DICIEMBRE");

	gotoxy(40,2);scanf("%d",&cliente[0].mes);

	clrscr();
	cleardevice();


	for(i=0;i<13;i++)
	{

		if (i == cliente[0].mes-1)
		{

				printf("Factura %i\n\n",cliente[0].mes);
				printf("Nic:\n");
				gets(cliente[i].NIC);
				printf("Nombre de usuario:\n");
				gets(cliente[i].NOMBRE);
				printf("Direccion:\n");
				gets(cliente[i].DIRECCION);
				printf("Ciudad/DPTO:\n");
				gets(cliente[i].CIUADAD);
				printf("Cuenta catastral:\n");
				gets(cliente[i].CATASTRAL);
				printf("Fecha de emision:\n");
				gets(cliente[i].EMISION);
				printf("Lista:\n");
				gets(cliente[i].LISTA);
				printf("Secuencia:\n");
				gets(cliente[i].SECUENCIA);
				printf("Direccion tecnica:\n");
				gets(cliente[i].DIRECCION_T);
				printf("\n");
				printf("Numero medidor:\n");
				gets(cliente[i].N_medidor);
				/*printf("Lectura actual:\n");
				gets(cliente[i].ACTUAL_L);*/
				printf("\n\n");
				printf("Consumo actual:\n");
				scanf("%d",&cliente[i].ACTUAL_C);
				printf("Dias facturados:\n");
				scanf("%d",&cliente[i].D_fac);
				/*printf("Fecha lectura anterior:\n");
				gets(cliente[i].fecha_Ant);*/
				printf("Fecha lectura actual: \n");
				gets(cliente[i].fecha_Act);
				printf("Factura del mes:\n");
				gets(cliente[i].fact_mes);

				cliente[i].ACTUAL_L = cliente[i].ACTUAL_C *  cliente[i].D_fac;
				cliente[i].DEUDA_ST = cliente[i].ACTUAL_C * 9.83;
				cliente[i].DEUDA_T = cliente[i].DEUDA_ST + 8.18 + 101.76 + 56.65;

				itoa(cliente[i].ACTUAL_C,cliente[i].sagua,10);                 /*CONVERTIR UN ENTERO A UN STRING*/
				itoa(cliente[i].D_fac,cliente[i].sdia,10);
				itoa(cliente[i].ACTUAL_L,cliente[i].slecac,10);
				itoa(cliente[i].DEUDA_ST,cliente[i].sdeudast,10);
				itoa(cliente[i].DEUDA_T,cliente[i].sdeudaT,10);
				
			if (carpeta != NULL)
			{

				fputs(cliente[i].NOMBRE,carpeta);
	
				fclose(carpeta);
				
			}
			
			if(deuda != NULL)
			{
				
				fputs(cliente[i].sdeudaT,deuda);
				
				fclose(deuda);
			}
		
		i=13;
		}
		
	}	
}

void Mostrar()
{
	int i;
	char nic[80],nom[70],dir[50],ciu[50],cat[30],emi[30],list[30];
	char sec[30],DT[50],NM[20];
	char Ant_L[30], Act_L[30],Act_C[30],DF[30];
	char F_ANT[20],F_Act[20],fact_mes[20];
	char DST[20],DTF[20];
	clrscr();
	cleardevice();

	for ( i = 0; i < 12; ++i)
	{
		sprintf(nic,"%s",cliente[i].NIC);
		sprintf(nom,"%s",cliente[i].NOMBRE);
		sprintf(dir,"%s",cliente[i].DIRECCION);
		sprintf(ciu,"%s",cliente[i].CIUADAD);
		sprintf(cat,"%s",cliente[i].CATASTRAL);
		sprintf(emi,"%s",cliente[i].EMISION);
		sprintf(list,"%s",cliente[i].LISTA);
		sprintf(sec,"%s",cliente[i].SECUENCIA);
		sprintf(DT,"%s",cliente[i].DIRECCION_T);
		sprintf(NM,"%s",cliente[i].N_medidor);
		sprintf(Ant_L,"%s",cliente[i-1].slecac);
		sprintf(Act_L,"%s",cliente[i].slecac);
		sprintf(Act_C,"%s",cliente[i].sagua);
		sprintf(DF,"%s",cliente[i].sdia);
		sprintf(F_ANT,"%s",cliente[i-1].fecha_Act);
		sprintf(F_Act,"%s",cliente[i].fecha_Act);
		sprintf(fact_mes,"%s",cliente[i].fact_mes);
		sprintf(DST,"%s",cliente[i].sdeudast);
		sprintf(DTF,"%s",cliente[i].sdeudaT);
		clrscr();
		cleardevice();
		esqueleto();

		setcolor(RED);

		outtextxy(160,32,nic);
		outtextxy(160,41,nom);
		outtextxy(160,51,dir);
		outtextxy(160,80,ciu);
		outtextxy(550,32,cat);
		outtextxy(550,41,emi);
		outtextxy(550,71,list);
		outtextxy(550,81,sec);
		outtextxy(550,91,DT);
		outtextxy(10,128,NM);
		outtextxy(90,128,Ant_L);
		outtextxy(170,128,Act_L);
		outtextxy(240,128,Act_C);
		outtextxy(300,128,DF);
		outtextxy(90,145,F_ANT);
		outtextxy(170,145,F_Act);
		outtextxy(300,145,fact_mes);
		outtextxy(550,202,DST);
		outtextxy(550,330,DTF);
		outtextxy(550,125,DTF);

		getch();
	}
	menu();
}

void mostrar_a()
{

	int i;
	char nic[80],nom[70],dir[50],ciu[50],cat[30],emi[30],list[30];
	char sec[30],DT[50],NM[20];
	char Ant_L[30], Act_L[30],Act_C[30],DF[30];
	char F_ANT[20],F_Act[20],fact_mes[20];
	char DST[20],DTF[20];
	clrscr();
	cleardevice();

	for(i=0;i<13;i++)
	{

		if (i == cliente[0].mes-1)
		{

			sprintf(nic,"%s",cliente[i].NIC);
			sprintf(nom,"%s",cliente[i].NOMBRE);
			sprintf(dir,"%s",cliente[i].DIRECCION);
			sprintf(ciu,"%s",cliente[i].CIUADAD);
			sprintf(cat,"%s",cliente[i].CATASTRAL);
			sprintf(emi,"%s",cliente[i].EMISION);
			sprintf(list,"%s",cliente[i].LISTA);
			sprintf(sec,"%s",cliente[i].SECUENCIA);
			sprintf(DT,"%s",cliente[i].DIRECCION_T);
			sprintf(NM,"%s",cliente[i].N_medidor);
			sprintf(Ant_L,"%s",cliente[i-1].slecac);
			sprintf(Act_L,"%s",cliente[i].slecac);
			sprintf(Act_C,"%s",cliente[i].sagua);
			sprintf(DF,"%s",cliente[i].sdia);
			sprintf(F_ANT,"%s",cliente[i-1].fecha_Act);
			sprintf(F_Act,"%s",cliente[i].fecha_Act);
			sprintf(fact_mes,"%s",cliente[i].fact_mes);
			sprintf(DST,"%s",cliente[i].sdeudast);
			sprintf(DTF,"%s",cliente[i].sdeudaT);
			clrscr();
			cleardevice();
			esqueleto();

			setcolor(RED);

			outtextxy(160,32,nic);
			outtextxy(160,41,nom);
			outtextxy(160,51,dir);
			outtextxy(160,80,ciu);
			outtextxy(550,32,cat);
			outtextxy(550,41,emi);
			outtextxy(550,71,list);
			outtextxy(550,81,sec);
			outtextxy(550,91,DT);
			outtextxy(10,128,NM);
			outtextxy(90,128,Ant_L);
			outtextxy(170,128,Act_L);
			outtextxy(240,128,Act_C);
			outtextxy(300,128,DF);
			outtextxy(90,145,F_ANT);
			outtextxy(170,145,F_Act);
			outtextxy(300,145,fact_mes);
			outtextxy(550,202,DST);
			outtextxy(550,330,DTF);
			outtextxy(550,125,DTF);

			i=13;
		}
	}
	getch();
	menu();
}

void mes()
{
	int i;
	char nic[80],nom[70],dir[50],ciu[50],cat[30],emi[30],list[30];
	char sec[30],DT[50],NM[20];
	char Ant_L[30], Act_L[30],Act_C[30],DF[30];
	char F_ANT[20],F_Act[20],fact_mes[20];
	char DST[20],DTF[20];
	clrscr();
	cleardevice();
	outtextxy(30,20,"ELIJA EL MES QUE DESEA VISUALIZAR:");

	settextstyle(1,0,2);
	outtextxy(50,100,"1) ENERO");
	outtextxy(200,100,"2) FEBRERO");
	outtextxy(350,100,"3) MARZO");
	outtextxy(50,200,"4) ABRIL");
	outtextxy(200,200,"5) MAYO");
	outtextxy(350,200,"6) JUNIO");
	outtextxy(50,300,"7) JULIO");
	outtextxy(200,300,"8) AGOSTO");
	outtextxy(350,300,"9) SEPTIEMBRE");
	outtextxy(50,400,"10) OCTUBRE");
	outtextxy(250,400,"11) NOVIEMBRE");
	outtextxy(450,400,"12) DICIEMBRE");

	gotoxy(40,2);scanf("%d",&cliente[0].mes);

	clrscr();
	cleardevice();


	for(i=0;i<13;i++)
	{
		if (i == cliente[0].mes-1)
		{
			sprintf(nic,"%s",cliente[i].NIC);
			sprintf(nom,"%s",cliente[i].NOMBRE);
			sprintf(dir,"%s",cliente[i].DIRECCION);
			sprintf(ciu,"%s",cliente[i].CIUADAD);
			sprintf(cat,"%s",cliente[i].CATASTRAL);
			sprintf(emi,"%s",cliente[i].EMISION);
			sprintf(list,"%s",cliente[i].LISTA);
			sprintf(sec,"%s",cliente[i].SECUENCIA);
			sprintf(DT,"%s",cliente[i].DIRECCION_T);
			sprintf(NM,"%s",cliente[i].N_medidor);
			sprintf(Ant_L,"%s",cliente[i-1].slecac);
			sprintf(Act_L,"%s",cliente[i].slecac);
			sprintf(Act_C,"%s",cliente[i].sagua);
			sprintf(DF,"%s",cliente[i].sdia);
			sprintf(F_ANT,"%s",cliente[i-1].fecha_Act);
			sprintf(F_Act,"%s",cliente[i].fecha_Act);
			sprintf(fact_mes,"%s",cliente[i].fact_mes);
			sprintf(DST,"%s",cliente[i].sdeudast);
			sprintf(DTF,"%s",cliente[i].sdeudaT);
			clrscr();
			cleardevice();
			esqueleto();

			setcolor(RED);

			outtextxy(160,32,nic);
			outtextxy(160,41,nom);
			outtextxy(160,51,dir);
			outtextxy(160,80,ciu);
			outtextxy(550,32,cat);
			outtextxy(550,41,emi);
			outtextxy(550,71,list);
			outtextxy(550,81,sec);
			outtextxy(550,91,DT);
			outtextxy(10,128,NM);
			outtextxy(90,128,Ant_L);
			outtextxy(170,128,Act_L);
			outtextxy(240,128,Act_C);
			outtextxy(300,128,DF);
			outtextxy(90,145,F_ANT);
			outtextxy(170,145,F_Act);
			outtextxy(300,145,fact_mes);
			outtextxy(550,202,DST);
			outtextxy(550,330,DTF);
			outtextxy(550,125,DTF);
			i=13;
		}
	}
	getch();
	menu();
}

void salir()
{
	outtextxy(300,200,"Ha salido exitosamente");
}
