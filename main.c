#include "lib/include.h"

int main(void)
{
    uint16_t valor = 0;
    char c='5';
    //char b='a';
    Configurar_PLL();  //Confiuracion de velocidad de reloj
    Configurar_UART0();//Yo FCLK 20MHZ Baudrate 9600

    //Experimento 1
    //  Configurar_UART1(); //Jorge,Alberto,Navarro,Saul,Fabela -fclk 25MHZ Baud-rate 57600
    //  Configurar_UART7(); //Angel,Fernanda,Sonia,Aleidis,Monse -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART4(); //Argelia,Roxana,Yesica,Vanesa,Christian,Abiu -fclk 10MHZ Baud-rate 4800
    //  Configurar_UART2(); //Brizet,Monse,Luis,Majo,Alonso -fclk 40MHZ Baud-rate 115200
    //  Configurar_UART3(); //Jesus,Yesica,Carlos,Dulce,Rodolfo,Leonardo -fclk 80MHZ Baud-rate 19200
    //  Configurar_UART2(); //Andrea,Avila,Pamela,Paulina -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART5(); //Hector,Cecilia,Carolina,Jozzafat -fclk 40MHZ Baud-rate 28800
    Configurar_GPIO();
   // Homogeneidad();
    //printString("Holis Bolis");
    printChar(c);
    //printChar(b);
    printString("\n");
   // char *arr = readString(',');
   // printString(&arr[0]);
    while(1)
    {
         c = readChar();
         switch(c)
         {
             case 'r':
                 //GPIODATA port F 662
                 printChar('a');
                 GPIOF_AHB->DATA = (1<<4) | (0<<0);
                 GPION->DATA = (0<<0) | (0<<1);
                 break;
             case 'b':
                 //GPIODATA port F 662
                 printChar('b');
                 GPIOF_AHB->DATA = (1<<0) | (0<<4);
                 GPION->DATA = (0<<0) | (0<<1);
                 break;
             case 'g':
                 //GPIODATA port F 662
                 printChar('c');
                 GPION->DATA = (1<<0) | (0<<1);
                 GPIOF_AHB->DATA = (0<<4) | (0<<0);
                 break;
             case 'y':
                 //GPIODATA port F 662
                 printChar('d');
                 GPION->DATA = (1<<1) | (0<<0);
                 GPIOF_AHB->DATA = (0<<4) | (0<<0);
                 break;
             default:
                 printChar((char)valor);
                 GPIOF_AHB->DATA = (0<<4) | (0<<0);
                 GPION->DATA = (0<<1) | (0<<0);
                 break;
         }
    }
}
