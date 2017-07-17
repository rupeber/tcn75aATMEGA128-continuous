#define F_CPU 11059200UL
#include <avr/io.h>
#include <util/delay.h>
#include "waitDelay.h"
#include "printNumber.h"


#define zero 0b10000001
#define one 0b11010111
#define two 0b10100100
#define three 0b10010100
#define four 0b11010010
#define five 0b10011000
#define six 0b10001000
#define seven 0b11010101
#define eight 0b10000000
#define nine 0b10010000


void printNumber(int number){

   DDRC = 0xFF;


   DDRF = (1<<PF3); //sw2
   PORTF = 0x08;

   DDRG = (1<<PG3); //sw3
   PORTG = 0x08;

   DDRG = (1<<PG4); //sw4
   PORTG = 0x10;

   DDRE = (1<<PE7); //sw5
   PORTE = 0x80;



  if(number ==0){
    PORTC = (zero); waitDelay();
  
  } else if(number == 1) {
PORTC = (one);  waitDelay();
  
}else if(number ==2){
PORTC = (two); waitDelay();

 }else if(number ==3){
PORTC = (three);  waitDelay();

 }else if(number ==4){
PORTC = (four);  waitDelay();

 }else if(number ==5){
PORTC = (five);  waitDelay();

 }else if(number ==6){
PORTC = (six);  waitDelay();

 }else if(number ==7){
PORTC = (seven); waitDelay();

 }else if(number ==8){
PORTC = (eight); waitDelay();
  
}else {
PORTC = (nine);  waitDelay();
  }

}
