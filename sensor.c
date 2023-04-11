/**********************************
* Smart HVAC System Launchpad Program
*
* Takes input Voltage from LM334(P1.1) into ADC A1
* Configures WiFi Module to TX mode
* Sends Data from UART to WiFi Module
*
* Author: Johnathan Schiede, Eddie Rosa, Omar Bedewy
* Version: 1.0
*
* Peripherals Used:
* ADC12 - Channel 1 (Pin 1.1)
* GPIO - Pin
* TimerB0 - UP Mode, CCR1 for PWM Control, controls Pin 6.0
*/


//function prototyping
void adcConfig();
void wifiConfig();
void uartConfig();
void gpioConfig();


//Main function
int main(){

    while(1){

        //@TODO Temperature Conversion From ADC Value


    }
    return 0;
}



//@TODO ADC Configure
void adcConfig(){
    //Config ADC A1
}



//@TODO WIFI Configure
void wifiConfig(){
    //I dont even have an idea
    //check datasheet
}



//@TODO UART Configure
void uartConfig(){
    //configure P1.7
}



//@TODO GPIO Configure
void gpiioConfig(){

}


