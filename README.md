# Task 3 - Data Logger: Sensor to SD Card

## Objective

To collect temperature and light sensor data and log the readings for monitoring and analysis. The project demonstrates sensor interfacing, data acquisition, and data logging using Arduino.

## Components Used

* Arduino UNO
* DHT22 Temperature Sensor
* LDR Sensor Module
* SD Card Module
* RTC Module (DS3231)
* Potentiometer
* Breadboard
* Jumper Wires

## Software Used

* Wokwi Simulator
* Arduino IDE

## Working Principle

The DHT22 sensor measures temperature while the LDR sensor module measures light intensity. Arduino continuously reads the sensor values and generates data samples in CSV format. The RTC module can be used for timestamp generation and the SD card module can be used for data storage in real hardware implementations. In the simulation environment, the collected data is displayed through the Serial Monitor in CSV format.

## Files Included

* Task3_Report.pdf
* data_logger.ino
* Screenshots Folder

## Output

Temperature and light sensor readings were successfully collected and logged in CSV format through the Serial Monitor. The system generated continuous sensor data samples suitable for monitoring and analysis.

## Author

Praveena Reddy
