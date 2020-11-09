#include <stdio.h>

float celsiusToFahrenheit(int temperatura) {
	return (((temperatura/5)*9)+32);
}

float fahreneitToCelsius(int temperatura) {
	return (((temperatura-32)*5)/9);
}

int main() {
	int i;
	
	for(i = -100; i <= 100; i=i+10) {
		printf("Celsius: %d | Fahrenheit: %f\n",i, celsiusToFahrenheit(i));
	}
	
	for(i = -100; i <= 300; i=i+20) {
		printf("Fahrenheit: %d | Celsius: %f\n",i, fahreneitToCelsius(i));	 
	}
}