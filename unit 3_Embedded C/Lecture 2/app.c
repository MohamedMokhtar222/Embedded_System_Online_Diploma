#include "uart.h"
unsigned char string_buffer[100]="learn-in-depth:<Mohamed>";
unsigned char const string_buffer1[100]="learn-in-depth:<Mohamed>";
void main(void)
{
Uart_Send_string(string_buffer);
}