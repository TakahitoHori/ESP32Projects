/* DHT11 temperature sensor library

   Usage is straight forward:
   		Ser DHT PIN using  setDHTPin(pin) command
   		then use any of the getter functions to get temp/humidity data

   Sam Johnston 
   October 2016
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#ifndef DHT11_H_  
#define DHT11_H_

#define DHT_TIMEOUT_ERROR -2
#define DHT_CHECKSUM_ERROR -1
#define DHT_OKAY  0

// function prototypes

//Start by using this function
void setDHTPin(int PIN);
//Do not need to touch these three
void sendStart();
int getData();
void errorHandle(int response);
//call each function for live temperature updates
int getFtemp();
int getTemp();
int getHumidity();
#endif