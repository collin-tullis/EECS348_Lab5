#include <stdio.h>

float celsius_to_fahrenheit(float celsius)
    {
        float f;
        f = (((1.8) * celsius)) + 32;
        return f;
    }

float fahrenheit_to_celsius(float fahrenheit)
    {
        float c;
        c = (((float)5/(float)9)) * (fahrenheit - 32);
	return c;
    }

float celsius_to_kelvin(float celsius)
    {
        float k;
        k = celsius + 273.15;
	if(k < 0){
		k = 0;
	}
        return k;
    }

float kelvin_to_celsius(float kelvin)
    {
        float c;
        c = kelvin -273.15;
        return c;
    }
//the conversion methods
void categorize_temperature(float temp){
	if(temp < 0){
		printf("Freezing. Please stay indoors.");
	}else if(temp < 11){
		printf("Cold. Please wear a coat.");
	}else if(temp <26){
		printf("Comfortable. Please enjoy the weather.");
	}else if(temp <36){
		printf("Hot. Stay hydrated.");
	}else{
		printf("Exteme Heat. Do not stay outside for long.");
	}
}
//says how hot it is

int main()
{
        float temp, scale, convert_to, temp2;
        int move_on;
        move_on = 1;
        while(move_on)
	{
            	printf("Enter a temperature: ");
		scanf("%f", &temp);
		printf("Choose the current scale 1. Celsius, 2. Fahrenheit,  3. Kelvin: ");
		scanf("%f", &scale);
		printf("Convert to 1. Celsius, 2.Fahrenheit, 3. Kelvin: ");
		scanf("%f", &convert_to);
		temp2 = temp;
		
		//takes the input
		if(scale == 1)
		{
			if(convert_to == 1)
			{
				printf("Invalid Input");
			}
			if(convert_to == 2)
			{
				temp = celsius_to_fahrenheit(temp);
				printf("%f", temp);
				move_on = 0;
			}
			if(convert_to == 3)
			{
				temp = celsius_to_kelvin(temp);
				printf("%f", temp);
				move_on = 0;
			}
		} //above converts celsius to different systems
		if(scale == 2)
		{
			if(convert_to == 1)
			{
				temp = fahrenheit_to_celsius(temp);
				printf("%f", temp);
				move_on = 0;
			}
			if(convert_to == 2)
			{
				printf("Invalid Input");
			}
			if(convert_to == 3)
			{
				temp = fahrenheit_to_celsius(temp);
				temp = celsius_to_kelvin(temp);
				printf("%f", temp);
				move_on = 0;
			}//above converts fahrenheit to different systems
		}
		if(scale == 3){
			if(temp > 0){
				if(convert_to == 1){
					temp = kelvin_to_celsius(temp);
					printf("%f", temp);
					move_on = 0;
				}
				if(convert_to == 2){
					temp = kelvin_to_celsius(temp);
					temp = celsius_to_fahrenheit(temp);
					printf("%f", temp);
					move_on = 0;
				}
				if(convert_to == 3){
					printf("Invalid Input");
				}
			}
			else{
				printf("Invalid Input");
			} // above converts kelvin to different system
		}
	}

	if(scale == 2){
		temp2 = fahrenheit_to_celsius(temp2);
	}
	if(scale == 3){
		temp2 = kelvin_to_celsius(temp2);
	}
	//converts the temps to celcius for the categorize function

	categorize_temperature(temp2);
	return 0;
}


