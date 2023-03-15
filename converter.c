#include <stdio.h>
#include <ctype.h>
#include "converter.h"

//Main function

int main(){
    char category;

    printf("Welcome to Unit Converter! \n");
    printf("Here is a lit of conversation to choose from: \n");
    printf("Temperature(T), Currency(C), Mass(M) \n");
    printf("Please enter the letter you want to convert.\n");
    scanf("%c", &category);
    
    if(toupper(category) == 'T')
        temperatureConverter();
    else if(toupper(category) == 'C')
        currencyConverter();
    else if(toupper(category) == 'M')
        massConverter();

    return 0;
}


void temperatureConverter(){
    int tempChoice, userinputF, userinputC, fahrenheitToCelcius, celciusToFahrenheit;

    printf("Welcome to Temperature Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for Fahrenheit to Celsius. \n");
    printf("Enter 2 for Celsius to Fahrenheit. \n");
    scanf("%d", &tempChoice);

    if (tempChoice == 1){
        printf("Please enter the Fahrenheit degree: \n");
        scanf("%d",&userinputF);
        fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
        printf("Celcius: %d\n",fahrenheitToCelcius);
    }
    else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d\n",celciusToFahrenheit);
    }
    //if none of the choice selected, tell the user to enter the correct choice
    else
        printf("Please enter the correct choice. \n");
}

void currencyConverter(){
    //variables
    int currencyChoice, userinputUSDtoEuro,userinputUSDtoJPY,userinputUSDtoRMB;
    float USDtoEURO, USDtoJPY,USDtoRMB;

    //Get the user choice from the screeen and store it in currencyChoice
    printf("Welcome to Currency Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for USD to JPY. \n");
    printf("Enter 2 for USD to Euro. \n");
    printf("Enter 3 for USD to RMB. \n");
    scanf("%d",&currencyChoice);

    //convert USD to JPY
    if(currencyChoice == 1){
        printf("Please enter the USD amount. \n");
        scanf("%d", &userinputUSDtoJPY);
        USDtoJPY = userinputUSDtoJPY * 134.19;
        printf("JPY: %.2f\n", USDtoJPY);

    }
    //convert USD to EURO
    else if( currencyChoice == 2){
        printf("Please enter the USD amount. \n");
        scanf("%d", &userinputUSDtoEuro);
        USDtoEURO = userinputUSDtoEuro * 0.93;
        printf("EURO: %.2f\n", USDtoEURO);
    }

    //convert USD to RMB
    else if(currencyChoice == 3){
        printf("Please enter the USD amount. \n");
        scanf("%d", &userinputUSDtoRMB);
        USDtoRMB = userinputUSDtoRMB * 6.88;
        printf("RMB: %.2f\n", USDtoRMB);
    }

    //if none of the choice selected, tell the user to enter the correct choice
    else 
        printf("Please enter the correct choice. \n");   
}
void massConverter(){
    //variables
    int massChoice, userinputOunce, userinputGram;
    float ounceToPounds, gramsToPounds;

    printf("Welcome to Mass Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for ounces to pounds. \n");
    printf("Enter 2 for gram to pounds. \n");
    scanf("%d",&massChoice);

    if(massChoice == 1){
        printf("Please enter the ounce amount: \n");
        scanf("%d",&userinputOunce);
        ounceToPounds = userinputOunce * 0.0625;
        printf("Pounds: %.2f\n",ounceToPounds);
    }
    else if (massChoice == 2){
        printf("Please enter the ounce amount: \n");
        scanf("%d",&userinputOunce);
        ounceToPounds = userinputOunce * 0.0625;
        printf("Pounds: %.2f\n",ounceToPounds);
    }
    //if none of the choice selected, tell the user to enter the correct choice
    else   
        printf("Please enter the correct choice. \n");
}
