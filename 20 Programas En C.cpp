#include <iostream>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h> 
#include <limits>

#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2
#define CENTENAS 1


using namespace std;
void getSuma(); 
int getPar();
int getKil ();
int getpalabra();
int getRomanos();
int getNumerosaletras();
//NO FUNCIONO
//int getde();
int getTabla();
int getTablas10();
int getGrafica();
int getBinario();
int getHexadecimal();
int getGeometria();
int getpunto();
int getCa();
int getHi();
int getMin();
int getSdosN();
int getMaYMe();
int getTo();

 main(){ 
 int op;
 do{
 	system("cls");
 	printf(" ¿QUE PROGRAMA DESEA EJECUTAR? \n");
 	printf("----------------------------------------------------------------------------------------\n");
	printf("1. Suma, Resta Multiplicacion y Divicion de dos numeros                                |\n");
	printf("2. Determine si un numero es Par o Ipmar                                               |\n");
	printf("3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa  |\n");
	printf("4. Determinar si una palabra o un numero es palindromo                                 |\n");
	printf("5. Conversion de numeros arabigos a romanos (minimo 1,000)                             |\n");
	printf("6. Conversion de numeros enteros a letras                                              |\n");
	printf("7. Conversión de numeros enteros con decimal a letras                                  |\n");
	printf("8. Una tabla de multiplicar                                                            |\n");
	printf("9. Todas las tablas de multiplicar del 1 al 10                                         |\n");
	printf("10 Crear de forma grafica la multiplicacion manual                                     |\n");
	printf("11.Conversion de numeros decimales a binario                                           |\n");
	printf("12.Conversión de numeros decimales a hexadecimales                                     |\n");
	printf("13.Crear Figuras Geometricas Básicas                                                   |\n");
	printf("14.Mover un punto en toda la pantalla                                                  |\n");
	printf("15.Simulacion de un Cajero (Automata)                                                  |\n");
	printf("16.Calcular la hipotenusa                                                              |\n");
	printf("17.El minimo comun Multiplo                                                            |\n");
	printf("18.Suma de dos numeros                                                                 |\n");
	printf("19.Calcular el numero mayor                                                            |\n");
	printf("20.Numeros naturales del 0 al 100                                                      |\n");
	printf("----------------------------------------------------------------------------------------\n");
	printf("21.salir                                                                               |\n");
	printf("----------------------------------------------------------------------------------------\n");
	printf("\n\ndigite una opcion\n");
	scanf("%i",&op);
	
	switch(op){
		case 1:
		system("cls");
		getSuma();
		system("pause");
		break;
		
		case 2:
		system("cls");
		getPar();
		system("pause");
		break;
		
		case 3:
		system("cls");
		getKil ();
		system("pause");
		break;
		
		case 4:
		system("cls");
		getpalabra();
		system("pause");
		break;
		
		case 5:
		system("cls");
		getRomanos();
		system("pause");
		break;
		
		case 6:
		system("cls");
		getNumerosaletras();
		system("pause");
		break;
		
		case 7:
		system("cls");
		//getde();
		//Falta
		system("pause");
		break;
		
		case 8:
		system("cls");
		getTabla();
		system("pause");
		break;
		
		case 9:
		system("cls");
		getTablas10 ();
		system("pause");
		break;
		
		case 10:
		system("cls");
		getGrafica();
		system("pause");
		break;
		
		case 11:
		system("cls");
		getBinario();
		system("pause");
		
		break;
		case 12:
		system("cls");
		getHexadecimal();
		system("pause");
		break;
		
		case 13:
		system("cls");
		getGeometria();
		system("pause");
		break;
		
		case 14:
		system("cls");
		getpunto();
		system("pause");
		break;
		
		case 15:
		system("cls");
		getCa();
		system("pause");
		break;
		
		case 16:
		system("cls");
		getHi();
		system("pause");
		break;
		
		case 17:
		system("cls");
		getMin();
		system("pause");
		break;
		
		case 18:
		system("cls");
		getSdosN();
		system("pause");
		break;
		
		case 19:
		system("cls");
		getMaYMe();
		system("pause");
		break;
		
		case 20:
		system("cls");
		getTo();
		system("pause");
		break;
		
		case 21:
		system("cls");
		printf("\n saliendo");
		system("pause");
		break;
		default:
		if (op<1 && op>21){
		printf("\n ERROR. No hay ninugun programa");
		system("pause");
		}
		break;
	}
 	

 }while(op != 21); 
}
 
 //PROGRAMA 1
 void getSuma(){
float c;
float d;	
int s;
	printf("ESCRIBIR DOS NUMEROS\n");
	scanf("%f",&c);
	scanf("%f",&d);
	s = 0;	
	while (s!=5) {
	printf("ELIGE UNA OPCION \n");
	printf("1 = SUMA\n");
	printf("2 = RESTA\n");
	printf("3 = MULTIPLICACION \n");
	printf("4 = DIVISION\n");
	printf("5 = salir\n");
	scanf("%i",&s);
	switch (s) {	
	case 1:
	printf("LA SUMA ES %f + %f = %f\n",c,d,c+d);
	break;
	case 2:
	printf("LA RESTA ES %f - %f = %f\n",c,d,c-d);
	break;
	case 3:
	printf("LA MULTIPLICAION ES %f x %f = %f\n",c,d,c*d);
	break;
	case 4:
	printf("LA DIVISION ES %f / %f = %f\n",c,d,c/d);
	break;
	default:
	s = 5;
	}
}
}

//PROGRAMA 2

int getPar(){
	
    int n = 0;
 	cout<<"Ingrese Numero:";
 	
 	cin>>n;
 	if ((n%2)==0){
 	 	cout<<"Par"<<endl;
	  }else{
	  	cout<<"Impar"<<endl;
	}
 		
system("pause");	
}

//PROGRAMA 3

int getKil (){
	int k; int m; int lb; 
	float a; float b; float c; float d; float e; float f;
	
	printf("Ingresar los Kilometros que desea convertir a Millas \n\n ");
	scanf("%i",&k); 
	a=k/1.60934;
	printf("La kilometros a millas son: %f\n",a);
	b=k*1.60934;
	printf("La conversion viceversa a Kilometros es: %i \n\n\n",k);
	
	printf("Ingresar los de Metros que desea converir a Pulgadas:\n\n");
	scanf("%i",&m);
	c=m*39.3701;
	printf("Los Metros a pulgadas son:%f \n",c);
	d=m/39.3701;
	printf("La conversion viceversa a Metros es:%i \n\n\n",m);

	printf("Ingresar las libras que desea converir a Kilos: \n\n");
	scanf("%i",&lb);
	e=lb*0.453592;
	printf("Las Libras a kilos son: %f \n",e);
	f=lb/0.453592;
	printf("La conversion viceversa a Libras son: %i \n",lb);

	return 0;
}

//PROGRAMA 4
int getpalabra() {
    string palabra;
    int a = 0, b = 0;

    printf("Ingrese palabra o numero:\n");
    getline(cin >> ws, palabra);

    for(int ind = palabra.length() - 1; ind >= 0; ind--) {
	if(palabra[ind] == palabra[a]) {
    b++;
    }
    a++;
    }
    if(palabra.length() == b) {
    printf("el numero o palabra si es palindromo: \n");
    } else {
    printf("el numero o palabra no es es palindromo: \n");
    }
    system("pause");
}

//PROGRAMA 5

int getRomanos(){
	while(1){
	int numero;
	int unidades;
	int decenas;
	int centenas;
	int millares;
		
	printf("\nIngresa un numero entre [1-1000] para convertirlo a romano: ");
	cin >> numero;
		
	unidades = numero%10; numero /= 10;
	decenas = numero%10; numero /= 10;
	centenas = numero%10; numero /= 10;
	millares = numero%10; numero /= 10;
		
	switch(millares){
	case 1: printf("M"); break;
	case 2: printf("MM"); break;
	case 3: printf("MMM"); break;

	}
		
	switch(centenas){
	case 1: printf("C"); break;
	case 2: printf("CC"); break;
	case 3: printf("CCC"); break;
	case 4: printf("CD"); break;
	case 5: printf("D"); break;
	case 6: printf("DC"); break;
	case 7: printf("DCC"); break;
	case 8: printf("DCCC"); break;
	case 9: printf("CM"); break;
	}
		
	switch(decenas){
	case 1: printf("X"); break;
	case 2: printf("XX"); break;
	case 3: printf("XXX"); break;
	case 4: printf("XL"); break;
	case 5: printf("L"); break;
	case 6: printf("LX"); break;
	case 7: printf("LXX"); break;
	case 8: printf("LXXX"); break;
	case 9: printf("XC"); break;
	}
		
	switch(unidades){
	case 1: printf("I"); break;
	case 2: printf("II"); break;
	case 3: printf("III"); break;
	case 4: printf("IV"); break;
	case 5: printf("V"); break;
	case 6: printf("VI"); break;
	case 7: printf("VII"); break;
	case 8: printf("VIII"); break;
	case 9: printf("IX"); break;
	}
	}

}

//PROGRAMA 6

int getNumerosaletras(){
    int num;

    printf( "Ingrese un numero entero de (0 a 20): \n",20 );
    scanf( "%i", &num );

    if ( num >= 0 && num <= 20 )

    switch ( num )
    {
    case  0 : printf( "\n   cero\n" ); break;
	case  1 : printf( "\n   uno\n" ); break;
    case  2 : printf( "\n   dos\n" ); break;
    case  3 : printf( "\n   tres\n" ); break;
    case  4 : printf( "\n   cuatro\n" ); break;
    case  5 : printf( "\n   cinco\n" ); break;
    case  6 : printf( "\n   seis\n" ); break;
    case  7 : printf( "\n   siete\n" ); break;
    case  8 : printf( "\n   ocho\n" ); break;
    case  9 : printf( "\n   nueve\n" ); break;
    case 10 : printf( "\n   diez\n" ); break;
    case 11 : printf( "\n   once\n" ); break;
    case 12 : printf( "\n   doce\n" ); break;
    case 13 : printf( "\n   trece\n" ); break;
    case 14 : printf( "\n   catorce\n" ); break;
    case 15 : printf( "\n   quince\n" ); break;
    case 16 : printf( "\n   dieciseis\n" ); break;
    case 17 : printf( "\n   diecisiete\n" ); break;
    case 18 : printf( "\n   dieciocho\n" ); break;
    case 19 : printf( "\n   diecinueve \n" ); break;
    case 20 : printf( "\n   veinte \n" ); break;
    }

    else
    printf( "ERROR: El numero debe ser (0 a 20).\n\n", 20 );
    return 0;
}


//PROGRAMA 7
//NO FUNCIONA

int getde(int argc, char* argv[]) {
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
    {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
    {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
    {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenaDecenas[9][15]={"once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
 
    int parteEntera,parteDecimal;
    double num;
    do{
    printf( "Introduce un numero (0 a 9999.99):");
    cin >> num;
    if(num < LIMITE_INF || num >= LIMITE_SUP)
    printf("El numero introducido excede del rango valido. Vuelva a intentarlo.");
    }while(num < LIMITE_INF || num >= LIMITE_SUP);
 
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
    string salida;
    int digitos[N_DIGITOS_ENTERO];
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
    digitos[i]=parteEntera%10;
    bool termina=false;
    for(int i=0; i<N_DIGITOS_ENTERO && !termina; i++){
    bool compuesta=false;
    switch(digitos[i]){
    case 0: 
    if(i==N_DIGITOS_ENTERO-1){
    for(int j=0;j<N_DIGITOS_ENTERO;j++){ 
	if(digitos[j] != 0){
    compuesta=true;
    break;
    }
    }
    if(!compuesta) 
    salida += cadenas[i][digitos[i]];
    }
    break;
    default: 
    for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ 
    if(digitos[j] != 0){
    compuesta=true;
    break;
    }
    }
    if(compuesta){ 
    if(digitos[i]==1 && i == CENTENAS){ 
    salida += "ciento ";
    }else if(i==DECENAS){ 
    switch(digitos[i]){
    case 1: 
	salida += cadenaDecenas[digitos[i+1]-1];
    termina=true;
    break;
    case 2: 
    salida += "veinti";
    break;
    }
    }else{ 
	salida += cadenas[i][digitos[i]]; 
    if(i==DECENAS) 
	salida += "y ";
    }
    }else{ 
    salida += cadenas[i][digitos[i]];
    }
    }
 
    }
    if(salida[salida.length()-1]!= ' ')
    salida += " ";
 	cout << salida << parteDecimal << "/100"<< endl;
    printf("Pulsa intro para salir...");
   
}

//PROGRAMA 8 

int getTabla () {
int tabl = 1;
int tabla = 1;
int resultado;


while (tabl <=10) {
	resultado = tabl * tabla;
	cout << tabl << "x" << tabla << "=" << resultado << endl;
	tabla++;
	if (tabla==2) {
	tabla = 1; 
	tabl ++; cout << endl;		
	}			
}
system("pause");
return 0;	
	
}

//PROGRAMA 9

int getTablas10 () {
int tabl = 1;
int tabla = 1;
int resultado;
while (tabl <=10) {
	resultado = tabl * tabla;
	cout << tabl << "x" << tabla << "=" << resultado << endl;
	tabla++;
	if (tabla==11) {
	tabla = 1; 
	tabl ++;
	cout << endl;		
	}			
}
system("pause");
return 0;	
	
}

//PROGRAMA 10

int getGrafica() {
    int num1;
	int num2;
	int a;
	int b;
	int d;
	int e; 
	int f;

    printf("Ingrese numero 1\n");
    scanf("%i",&num1);
    printf("Ingrese numero 2\n");
    scanf("%i",&num2);

    printf("          %i\n ",num1);
    printf("         %i ""X\n",num2);
    printf("        ""-------\n");

    if (num2<99)
    {
    a=num2%100/10;
    b = num2%10/1;
	d = b*num1;    
        printf("         %i\n",d);
         e= a*num1;
    printf("        %i\n",e);
    printf("      ""-------\n");
    f = num1 * num2;
    printf("       %i\n ",f);
    }
    system("pause");
    return 0;
}

//PROGRAMA 11

int getBinario() {
    printf("Ingrese un numero entero positivo: \n");
    int num;
    string binario = "";
    cin >> num;
    if (num > 0) {
    while (num > 0) {
    if (num%2 == 0) {
    binario = "0"+binario;
    } else {
    binario = "1"+binario;
    }
    num = (int) num/2;
    }
    } else if (num == 0) {
    binario = "0";
    } else {
    binario = "No se puede realizar la conversión. Ingrese solo numeros positivos \n";
    }
    cout << "El resultado de la conversion es: " << binario<<endl;
    
	return 0;

}

//PROGRAMA 12

int getHexadecimal(){
	int n, i = 0, hexadecimal[999]; 
    printf("Ingresa un numero en sistema decimal: ");
    scanf("%i",&n);
    while (n!=0)
    {
    hexadecimal[i] = n%16; 
    n = n /16; 
    i++; 
    } i--;
	printf("Resultado en Hexadecimal: ");
 
    while (i>=0) 
    {
    switch(hexadecimal[i]) {
    case 10:
    printf("A"); break;
    case 11:
    printf("B"); break;
    case 12:
    printf("C"); break;
    case 13:
    printf("D"); break;
    case 14:
    printf("E"); break;
    case 15:
    printf("F"); break;
    default:
    printf("%i",hexadecimal[i]); 
    } i--;
    }
    printf("\n");
	return 0;
}

//PROGRAMA 13

int getGeometria(){
    int num,a,b,c;
    int fil,col,espa,la;
    char caracter;
    char sino;
 
    printf("Para (TRIANGULOS) Ingrese Solo Numeros En (RELLENO) \n\n");
    printf("Para (CUADRADOS) Y RECTANGULO)) Ingrese Solo (*) En (RELLENO)\n\n");
	printf("Introduce Numero De Filas (1-15):");
    scanf("%d",&num);
    printf("numero de espacios:");
    scanf("%d",&espa);
    printf("caracter de relleno:");
    fflush (stdin);
    scanf("%c",&caracter);
    if(caracter>='0' && caracter<='9'){
 
    for (fil=1; fil<=num; fil++)
    {
    for (la=1; la<=num-fil+espa; la++)
    printf(" ");
    for (col=1; col<=2*fil-1; col++)
    printf("%c",caracter);
    printf("\n");
    }
   }
    else
 	for (a=1;a<=num;a++)
    {
    for (c=1; c<=espa; c++)
    printf(" ");
    {
    for (b=1;b<=num;b++)
    printf("%c",caracter);
    printf("\n");
    }
    }
    return 0;
}

//PROGRAMA 14

 void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 int getpunto(){ 
 printf("\n\nNO ACTIVAR LAS LETRAS NAYUSCULAS, PRESIONAR-------[A][W][S][D] PARA MOVER\n");
 int x=20 , y=20;
 
	  char cursor;
	  while(cursor!=27)
	  {
	  	cursor=getch();
	  	if(cursor=='a')
	  	x--;
	  	if(cursor=='d')x++;
	  	
	  	if(cursor=='w')y--;
	  	if(cursor=='s')y++;
	  	
	  	system("cls");
	  	gotoxy(x,y);    
    	printf("."); 
		 
    
	  }
      
      return 0;  
}

//PROGRAMA 15

int getCa(){
	int caj,opc;
	float a,b,c;
	caj=1000;
	printf("Bienevendio a tu cajero Automatico\n");
	printf("Seleccione una opcion\n");
	printf(" 1.Ingresar dinero a  cuena.\n 2.Retirar dinero de la cuenta.\n 3.Saldo en la cuenta.\n 4.Salir del cajero Automatico.\n");
	printf("Seleccione una opcion\n");

	scanf("%i",&opc);
	if(opc==1){
	printf("¿Cuanto dinero desea ingresar al cajero Automatico?\n");
	scanf("%f",&a);
	c=caj+a;
	printf("El dinero a sido ingresado\n");
	printf("Su saldo actual es de %f \n",c);			
	}
	 
	else if (opc==2){
	printf("¿Cuanto dinero desea retirar del cajero Automatico?\n");
	scanf("%f",&b);
	if(b>caj){
	printf("Error el dinero no a sido ingresado. NO DISPONE DE TANTO DINERO. \n");
	printf("\n El saldo actual es de %d\n",caj);
	}else {
	c=caj-b;
	printf("Se a completado exitosamenete el retiro de la cuenta\n");
	printf("Su saldo actual es de %f \n",c);
	}
	}else if(opc==3){
    printf("\n El saldo actual es de %d\n",caj);
    }else if(opc==4){
    printf("\nGracias por utilizar este cajero Automatico.\n\n");
    }else if(opc==0){
    printf("\nDisculpe, se ha equivocado al marcar.\n\n");
	}
	
system("pause");	
}

//PROGRAMA 16

int getHi() {
	float c1,c2,hipotenusa;
	printf("ingrese cateto 1 \n");
	scanf("%f",&c1);
	printf("ingrese cateto 2 \n");
	scanf("%f",&c2);
	hipotenusa=sqrt(c1*c1+c2*c2);
	printf("la hipotenusa mide %f \n",hipotenusa);
}

//PROGRAMA 17

int getMin(){
	int x,y,mcd;
	int n1,n2;	

	printf("Digite primer numero positivo:\n");
	scanf("%d", &x);
	printf("Digite segundo numero positivo\n");
	scanf("%d", &y);

	n1=x;
	n2=y;

	while(n1!=n2){
		if (n1>n2)
		n1 -= n2;
		else
		n2 -= n1;
	}
	mcd=n1;
	printf("El m.c.d. de %d y %d es %d\n", x, y, mcd);
}

//PROGRAMA 18

int getSdosN() {
	int a,b,suma;
	printf("ingrese primer numero\n");
	scanf("%i",&a);
	printf("ingrese segundo numero\n");
	scanf("%i",&b);
	suma=a+b;
	printf("el resultado es %i \n",suma);
	return 0;
}

//PROGRAMA 19

int getMaYMe() {
	int a,b;
	printf("ingrese primer numero\n");
	scanf("%i",&a);
	printf("ingrese segundo numero\n");
	scanf("%i",&b);
	
	if (a>b) {
	printf("El mayor es %i \n");
	} 
	else if (b>a) {
	printf("El mayor es %i \n");
	}
	else{
	printf("Los 2 numeros son iguales %i \n");
	}
system("pause"); 	
return 0;	
}

//PROGRAMA 20

int getTo() {
	
	int i=101;
	const int tope=101;
	for(i=0;i<=101;i=i+2) {
	printf("%i \n",i);

	}
	printf("fin del programa\n");
system("pause"); 	
}
