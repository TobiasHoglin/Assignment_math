#include<iostream>
/*
 Store current price data in a vector 
 */

storePrice()
{

}

//Get floating 3 days price info, reurns mean value
{

}

/*
read serial input temp. If temperature > 20 returns 0 else 1.
Later used to turn of heating system.
For simplicity reasons, this DH11 sensor ouputs  16 bits 
*/

bool readSerialTemp( int port, int baud)
{
    int serialdata;
    readserial(port, baud, serialdata)
    int temperature, humidity;
    temperature = serialdata >> 8;   
    humidity = serial_data & 0xFF;

    if(temperature > 20)
        return 0;
    else
        return 1;
}
/*
Floorheating adding current consumption to total usage;
Function supposed to be called every 60 seconds.
*/
void energyUsage(double currentusage, double &totalUsage)

{   
    double Kwh = (currentusage/1000)/60; 
    totalUsage =+ Kwh;
}
