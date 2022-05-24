/*----------------------------------------------------------------
 *
 * esp-01.h
 *
 * WiFi Driver for esp-01
 *
 *---------------------------------------------------------------*/

#ifndef _ESP_01_H_
#define _ESP_01_H_

/*
 * Function Prototypes
 */
void         esp01_init(void);                    // Initialize the device
bool         esp01_restart(void);                 // Take control and reset the device

char         esp01_read(void);                    // Read a character from the queuue
unsigned int esp01_available(void);               // Return the number of available characters
bool         esp01_send(char* str, int channel);  // Send out a string to the channel
void         esp01_receive(void);                 // Take care of receiving characters from the IP channel
bool         esp01_connected(void);               // TRUE if any channel is connected.
bool         esp01_is_present(void);              // TRUE if an ESP-01 was found
void         esp01_test(void);                    // Diagnostic self test
void         esp01_close(unsigned int channel);   // Close this connection

/*
 * Definitions
 */
#define ESP01_N_CONNECT 4                         // Allow up to 4 connections

#endif
