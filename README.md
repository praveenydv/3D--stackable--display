/*
 * 2dledblink.c
 *
 * Created: 28-05-2018 12:36:14
 * Author : Praveen Yadav
 */ 

#include <avr/io.h>
#include <util/delay.h >
#include <math.h>
void light(int x,int y){
	    int a,b,c,d;
		  
		 a=b=c=d=0;
		 b=x%2;
		 x=x/2;
		 a=x%2;
		 d=y%2;
		 y=y/2;
		 c=y%2;
		PORTA=(a<<PD0)|(b<<PD1)|(c<<PD2)|(d<<PD3);
	
}
int main(void)
{
    DDRA=0xFF;
	int i=0;
	while(1){
		
		light(0,0);
		_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
		light(0,1);
		_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
light(1,0);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
light(2,0);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
light(3,0);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
light(0,2);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
light(0,3);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
light(0,4);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
light(2,0);
_delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
light(2,1);
 _delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
 light(2,2);
 _delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
 light(2,3);
 _delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
 light(3,0);
 _delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
 light(3,1);
 _delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
 light(3,2);
 _delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
 light(3,3);
 _delay_ms(1000);_delay_ms(1000);_delay_ms(1000);
		 
		
				
	}
		 
	
}




