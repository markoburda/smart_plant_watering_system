# Smart plant watering system - a project for Principles of Computer Organization
## Short documentation about project's goals and materials used in this project

## Should do the following:
- Measure moisture of soil in the pot and output data to the board
- Read data from the soil capacitor and decide when to turn on the water pump
- Check the moisture with certain frequency and keep the soil wet
- Be able to view all information from smartphone
- Be able to choose mode and frequency of watering from smartphone
- Output current mode and moisture level on the screen
- Transfer information to the server using a Wi-Fi module
- Implement proper lighting to keep the plants in 

## Materials used for the project:
- STM32F411EDISCOVERY
![STM32F411EDISCOVERY](https://media.digikey.com/Photos/STMicro%20Photos/STM32F411E-DISCO.JPG)
- ULN2003A High-Current Darlington Transistor Arrays to properly power the water pump
![ULN2003A](https://botland.com.pl/61583-large_default/integrated-circuit-uln2003a-7xdarlington-smd.jpg)
- Capacitive Soil Moisture Sensor v1.2 for measuring soil moisture and feeding data
![Sensor](https://cdn.shopify.com/s/files/1/0069/6513/3376/products/5pcs-Capacitive-Soil-Sensor-Module-Soil-Moisture-Detection-Sensor-Analog-Output-DIY-Electronic-for-Arduino_1.jpg?v=1557471842)
- Water pump for watering the soil
![Pump](https://1436477554.rsc.cdn77.org/wp-content/uploads/2018/06/2PCs-Mini-Water-Pump-3V-0.5W-Tube-02-640x444.jpg)
- NodeMCU Wi-Fi module for connection with server
![Pump](https://www.cytron.io/image/cache/catalog/products/NODEMCU-V3/NodeMCU%20V3%20Lolin%20(1)-0-1-1-800x800.jpg)
- Photoresistor to check if current brightness around is enough for our plant.
![Pump](https://cdn.awsli.com.br/600x700/468/468162/produto/19414320/sensor-fotoresistor-ldr-de-5mm-6344c5f4.jpg)

## Circuit Diagram:
![Diagram](https://i.imgur.com/CAKITe5.jpg)
