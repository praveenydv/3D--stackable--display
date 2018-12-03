 
void light(int x,int y,int z){
	    int a,b,c,d,e,f,g,h,i;
		  
		 a=b=c=d=e=f=g=h=i=0;
		 c=x%2;
		 x=x/2;
		 b=x%2;
		 x=x/2;
		 a=x%2;
		 
		 f=z%2;
		 z=z/2;
		 e=z%2;
		 z=z/2;
		 d=z%2;
		 
		 i=y%2;
		 y=y/2;
		 h=y%2;
		 y=y/2;
		 g=y%2;
		 
		PORTA=(a<<PA0)|(b<<PA1)|(c<<PA2)|(d<<PA3)|(e<<PA4)|(f<<PA5)|(g<<PA6)|(h<<PA7);
		PORTC=(i<<PC7);
		 
	if(z==0){
		PORTD=(1<<PD0);
	}
	else if(z==1){
		PORTD=(1<<PD1);
	}
	else if(z==2){
		PORTD=(1<<PD2);
	}
	else if(z==3){
		PORTD=(1<<PD3);
	}
	else if(z==4){
		PORTD=(1<<PD4);
	}
	else if(z==5){
		PORTD=(1<<PD5);
	}
     else if(z==6){
	      PORTD=(1<<PD6);
	 }
    else if(z==7){
	     PORTD=(1<<PD7);
}
    }
	
	
 
void A(int x){
    

  int i,j,k;

	while(k<x){
		 
	   for(i=0;i<7;i++){
		    
			 light(1,i,7);
			 _delay_us(3);  
			 light(6,i,7);
			 _delay_us(4);
			 
		   
		   }
		   for(j=1;j<7;j++){
			   light(j,7,7);
			   _delay_us(3);
			   light(j,4,7);
			   _delay_us(4);
		   }
	 k++;  }
	}

void layer(int x){

  int i,j,k;
   while(k<x){
   for(i=0;i<8;i++){
for(J=0;J<8;J++){
light(i,j,7);
}}

  }

}