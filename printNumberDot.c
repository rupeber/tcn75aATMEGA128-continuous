#define F_CPU 11059200UL
#include <avr/io.h>
#include <util/delay.h>
#include "waitDelay.h"
#include "printNumberDot.h"


#define zerod 0b00000001
#define oned 0b01010111
#define twod 0b00100100
#define threed 0b00010100
#define fourd 0b01010010
#define fived 0b00011000
#define sixd 0b00001000
#define sevend 0b01010101
#define eightd 0b00000000
#define nined 0b00010000


void printNumberDot(int number){

   DDRC = 0xFF;


  if(number ==0){
    PORTC = (zerod); waitDelay();
  
  } else if(number == 1) {
PORTC = (oned);  waitDelay();
  
}else if(number ==2){
PORTC = (twod); waitDelay();

 }else if(number ==3){
PORTC = (threed);  waitDelay();

 }else if(number ==4){
PORTC = (fourd);  waitDelay();

 }else if(number ==5){
PORTC = (fived);  waitDelay();

 }else if(number ==6){
PORTC = (sixd);  waitDelay();

 }else if(number ==7){
PORTC = (sevend); waitDelay();

 }else if(number ==8){
PORTC = (eightd); waitDelay();
  
}else {
PORTC = (nined);  waitDelay();
  }

}
