/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by Firstname Lastname
 * Mar xx, 2015
 *
 */

// Add #define pre-processor below
#define FRONT_LED_PIN	10
#define REAR_LED_PIN	9
 
void setup() {
	pinMode(FRONT_LED_PIN,OUTPUT);
	pinMode(REAR_LED_PIN,OUTPUT);

}

void loop() {
	digitalWrite(FRONT_LED_PIN,HIGH);
	digitalWrite(REAR_LED_PIN,LOW);
	delay(1000);

	digitalWrite(FRONT_LED_PIN,LOW);
	digitalWrite(REAR_LED_PIN,HIGH);
	delay(1000);

}
