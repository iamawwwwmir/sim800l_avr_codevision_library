#include "sim800l.h"
#include <mega32.h>
#include <delay.h>
#include <mega32.h>
#include <stdio.h>
#include <delay.h>
#include <string.h>
#include <stdint.h> 


char data[100];
char call[100];
 char sms[100];
 char hour[20];
char minute[20] ;
char number[17];
char por[100];
char number_s[100];
int i;
int t;
int counter=0;

 void sim800l_init(void)
 {
  puts("AT+Cmgf=1\r\n");
    puts("AT+CNMI=2,2,0,0,0\r\n"); 
    delay_ms(500);

 
 }












void send_sms(  char *a,char *number_s)
{
    
   sprintf(call,"AT+Cmgf=1\r\n");
    puts(call);     
    delay_ms(500);
   sprintf(call,"AT+CSMP=17,167,0,0\r\n");
    puts(call); 
    delay_ms(500);
    sprintf(call,"AT+CMGS=");    
    strcat(call,number_s);
    sprintf(por,"\r\n");
    strcat(call,por) ;
    puts(call);                                                                                                                                                                  
      delay_ms(500);
      puts(a); 
      delay_ms(100);
       UDR=(26);
       
}




 void phone_number_seprate(void)
 {
  for(i=0;i<15;i++)
  {
   number[i]=data[i+8] ;
   t=2;

  } 

 }  



void sms_seprate(void)
 {
 for(i=0;i<13;i++)
{
sms[i]=data[i+51] ;
}

}



 void time_hour_seprate(void)
 {
 for(i=0;i<2;i++)
{
hour[i]=data[i+37] ;
}
 
}







 void time_minute_seprate(void)
 {
 for(i=0;i<2;i++)
{
minute[i]=data[i+40] ;
}

}





