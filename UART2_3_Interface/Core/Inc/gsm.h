/*
 * gsm.h
 *
 *  Created on: 07-Feb-2022
 *      Author: hariom.intern
 */

#ifndef SRC_GSM_H_
#define SRC_GSM_H_

#define MAX_BUFFER_SIZE	512




typedef struct{
	char gsm_cmd[50];
	char gsm_response[50];
	char response_status[20];
	int timeout;
} hgsm;

typedef struct{
	unsigned char gsm_rx_data[MAX_BUFFER_SIZE];
	unsigned char gsm_tx_data[MAX_BUFFER_SIZE];
	int count;

} gsm;

extern gsm gsm_main;



//void clear_buffer(char* , int);
void print_response();
void process_command();
int compare_strings(char* , char*);
void copy_strings(char* , char*);
int get_size(char*);
void AT_Command_send(hgsm* );



#endif /* SRC_GSM_H_ */

