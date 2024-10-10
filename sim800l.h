#ifndef _LED_H
#define _LED_H

extern char data[100];
extern int counter;
extern char data[100];
extern char call[100];
extern char sms[100];
extern char hour[20];
extern char minute[20] ;
extern char number[17];
extern char por[100];
extern char number_s[100];


void send_sms(  char *a,char *number_s);
void phone_number_seprate(void);
void sms_seprate(void);
void time_hour_seprate(void);
void time_minute_seprate(void);
void sim800l_init(void);

#endif