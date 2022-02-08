/*
 * gsm.c
 *
 *  Created on: 07-Feb-2022
 *      Author: hariom.intern
 */
#include"gsm.h"
#include "main.h"

hgsm SIM_NO = {"AT+CICCID","","",200};
hgsm IMEI = {"AT+IMEI","","",200};
hgsm Signal_strength = {"AT+CICCID","","",200};
hgsm SIM_status = {"AT+CICCID","","",200};
hgsm Echo = {"AT+CICCID","","",200};
hgsm IMSI = {"AT+IMSI","","",200};

gsm gsm_main;

char gsm_commands[3][50] = {
	"AT+CICCID\r\n",
	"AT+COPN\r\n",
	"AT+CSQ\r\n"
};

char gsm_responses[3][50] = {
	"+ICCID: <ICCID>",
	"AIRTEL",
	"CSQ: <rssi>,<ber>"
};


int get_size(char* str)
{
	int size=0;
	int i=0;
	while(str[i]!='\0')
	{
		size++;
		i++;
	}

	return size;
}

int compare_strings(char* src_ptr, char* rec_ptr)
{
	if(get_size(src_ptr) != get_size(rec_ptr))
		return 0;

	int i = 0;
	for(i = 0; src_ptr[i] != '\0'; i++)
		if(src_ptr[i] != rec_ptr[i])
			return 0;


	return 1;
}

void copy_strings(char* dest, char* src)
{
	int i;

	for(i = 0; src[i] != '\0'; i++){
		dest[i] = src[i];
	}

	dest[i] = '\0';

}

void AT_Command_send(hgsm* atcommand)
{
	// empty response buffer

	int i = 0;
	for(i = 0; i < gsm_main.count; i++){
		gsm_main.gsm_rx_data[i] = '\0';
	}

	gsm_main.count = 0;


	// transmit at command data
	HAL_UART_Transmit(&huart3,atcommand->gsm_cmd,,200);

	// \r \n in command
	HAL_UART_Transmit(&huart3,"\r\n",2,100);

	//wait for time
//	HAL_Delay(100);

//	copy_strings(atcommand->gsm_response,rx_msg);
//	strcpy(atcommand->gsm_response,rx_msg);

	return;

}

