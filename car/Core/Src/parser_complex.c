/*
 * parser_complex.c
 *
 *  Created on: 12 maj 2021
 *      Author: Mateusz Salamon
 */
#include "main.h"
//#include "ring_buffer.h"
#include "parser_complex.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"

char rx_buffer[100];
char parsed_velocity[10];
char parsed_direction[10];
char parsed_turn[10];


void parse_data(char *data)
{
  sscanf(data, "Velocity=%[^,], Direction=%[^,], Turn=%s", parsed_velocity, parsed_direction, parsed_turn);
  printf("Parsed Velocity: %s\n", parsed_velocity);
  printf("Parsed Direction: %s\n", parsed_direction);
  printf("Parsed Turn: %s\n", parsed_turn);
}
//
//void Parser_ParseRC(uint8_t *DataToParse)
//{
////	char *ParsePointer = strtok((char*)DataToParse, "T"); // Create a sub-string
////
////	//char *ParsePointer = strtok((char*)DataToParse, "T"); // Create a sub-string
////	if(strcmp("T", ParsePointer) == 0)
////	{
////		Parser_ParseTurn();
////	}
////
////	if(strcmp("S", ParsePointer) == 0)
////	{
////		Parser_ParseGo();
////	}
//
//
//
//	for(uint8_t i=0; i< strlen((char*)DataToParse); i++)
//	{
//		uint8_t j=0;
//		if(DataToParse[i] == 'T')
//		{
//			HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
//			i++;
//			if(DataToParse[i] >= '0' && DataToParse[i] <= '9')
//			{
//				TabServo[j] = DataToParse[i] - '0';
//				i++;
//				j++;
//				KatServo = TabServo[0];
//
//				if(DataToParse[i] >= '0' && DataToParse[i] <= '9')
//				{
//					TabServo[j] = DataToParse[i] - '0';
//					KatServo = (TabServo[0] * 10) + TabServo[1];
//
//				}
//
//
//				return;
//			}
//
//		}
//		else if(DataToParse[i] == 'S')
//		{
//			HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
//			i++;
//			if(DataToParse[i] >= '0' && DataToParse[i] <= '9')
//			{
//				TabMotor[j] = DataToParse[i] - '0';
//				i++;
//				j++;
//				PwmMotor = TabMotor[0];
//
//				if(DataToParse[i] >= '0' && DataToParse[i] <= '9')
//				{
//					TabMotor[j] = DataToParse[i] - '0';
//					PwmMotor = (TabMotor[0] * 10) + TabMotor[1];
//				}
//				PwmMotor = PwmMotor * 20;
//
//				__HAL_TIM_SET_COMPARE(&htim9, TIM_CHANNEL_1, PwmMotor);
//
//
//				return;
//			}
//		}
//
//		else return;
//	}
//}
