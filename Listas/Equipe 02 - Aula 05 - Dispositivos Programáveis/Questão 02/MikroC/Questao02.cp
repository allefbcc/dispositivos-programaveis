#line 1 "C:/Users/allef/Desktop/Equipe 02 - Aula 05 - Dispositivos Program�veis/Quest�o 02/MikroC/Questao02.c"




sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;

sbit LCD_D4 at RB2_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D7 at RB5_bit;


sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;

sbit LCD_D4_Direction at TRISB1_bit;
sbit LCD_D5_Direction at TRISB2_bit;
sbit LCD_D6_Direction at TRISB3_bit;
sbit LCD_D7_Direction at TRISB4_bit;



void main() {

int desloca;

TRISA. RA0  = 1;
TRISA. RA1  = 1;

PORTA. RA0  = 0;
PORTA. RA1  = 0;


TRISB = 0;
PORTB = 0;

Lcd_Init();
Lcd_Cmd(_LCD_CLEAR);
Lcd_Cmd(_LCD_CURSOR_OFF);
lcd_out(1,3, "IFPE");

while(1){

if(PORTA. RA0  == 0){

for(desloca = 1; desloca <= 1; desloca++){
Lcd_Cmd(_LCD_SHIFT_RIGHT);
Delay_ms(100);
}




}if(PORTA. RA1  == 0){

for(desloca = 1; desloca <= 1; desloca++){
Lcd_Cmd(_LCD_SHIFT_LEFT);
Delay_ms(100);
}


}


}

}
