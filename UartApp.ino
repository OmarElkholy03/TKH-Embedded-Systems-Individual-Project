#include <avr/io.h>
#include <util/delay.h> 
#include "uart.h"

// define some macros
#define BAUD 9600                                   // define baud
void init(){
  uart_init(BAUD);
}
int main(void){
  init();
pinMode(4,INPUT);
pinMode(5,OUTPUT);
 char button_onText[15] = "Button Pressed\n";
  while (1)   // superloop 
  {
   int button = digitalRead(4);
    if (button==1){  // if condition for the button 
      uart_transmit_array(button_onText,15); // display "Button Pressed" after pressing 
      _delay_ms(100);    
    }
    char led_command=uart_recieve();
    if(led_command=='h'){    // high voltage for the led to light on 
      digitalWrite(5,HIGH);
    }
  else if(led_command=='l'){  //low voltage for the led so no light
   digitalWrite(5,LOW);
}
  

 }

}




  