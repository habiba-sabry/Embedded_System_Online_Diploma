#include "uart.h"
unsigned char string_buffer[100] ="Learn-in-depth:< Habiba >";
unsigned char const string_buffer2[100] ="Learn-in-depth:< Habiba >";
void main(void){
    Uart_Send_String(string_buffer);
}
