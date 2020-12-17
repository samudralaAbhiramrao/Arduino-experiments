# ARDUINO UNO

![Arduino uno](https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/images/arduino-uno.jpg "arduino image")

## About:

Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read **inputs** - light on a sensor, a finger on a button, or a Twitter message - and turn it into an **output** - activating a motor, turning on an LED, publishing something online. You can tell your board what to do by sending a set of instructions to the microcontroller on the board. To do so you use the Arduino programming language (based on Wiring), and the [Arduino Software IDE](https://www.arduino.cc/en/software), based on Processing.

### Board Components:
1.Microcontroller-ATMega328p

2.USB port(Used to upload code to the Board)

3.Power jack(Used to give power Supply to the board)

4.16MHZ Crystal Oscillator (used to calculate the time for Micro controller)


## Pin diagram

![pins](https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/images/Arduino-Uno-Pin-Diagram.png " PinDiagram")


1.Digital pins :14
   - 6pins used for Pulse Width Modulation(pwd)


2.Analog Pins :6


# Sensors:

## 1.  **LED Sensor**:


![LED SENSOR](https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/LED_Blink/LED_sensor.jpg "LED")


**LED** - Light Dependent Sensor

Basically a **LED** is used when a input is given through Analog device based on that input we can able to identify the solution and the ouput can be given through LED's .
Mostly LED is used in Traffic Signals , emergency services , etc;


## 2. **Water Sensor**:

![Water SENSOR]( https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/Water_Sensor/Water-Level-Sensor.jpg "Water Sensor")

Water sensors find applications in nuclear power plants, automobiles for measuring the amount of gasoline left in the fuel tank, engine oil, cooling water, and brake/power steering fluid.  Industrial applications of water level sensors include water level sensing in transport and storage tanks and water treatment tanks


**WS10 Series Water Sensor**

The WS10 series water sensor developed by Pall Corporation is an efficient, inexpensive sensor that measures dissolved water content in insulating, lubricating and hydraulic fluids. It is designed for use in harsh and remote industrial environments, and includes a high pressure option of up to 100 bar.

The major advantages of WS10 series water sensor include:

- Simple and flexible installation


- Easy to operate


- Robust sensing probe design.


The following are the major applications of WS10 series water sensor:


- Automotive


- Petrochemicals


- Power generation


- Pulp, paper and metal industries.


## 3. **Ultrasonic Sensor**:

![Ultrasonic_Sensor](https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/Ultra_sonic_RangeFinder/Ultrasonic-sensor.png "Ultrasonic sensor")

Ultrasonic sensors are used primarily as proximity sensors. They can be found in automobile self-parking technology and anti-collision safety systems. Ultrasonic sensors are also used in robotic obstacle detection systems, as well as manufacturing technology.Ultrasonic waves travel faster than the speed of audible sound (i.e. the sound that humans can hear). Ultrasonic sensors have two main components: the transmitter (which emits the sound using piezoelectric crystals) and the receiver (which encounters the sound after it has travelled to and from the target).


In order to calculate the distance between the sensor and the object, the sensor measures the time it takes between the emission of the sound by the transmitter to its contact with the receiver. The formula for this calculation is D = ½ T x C (where D is the distance, T is the time, and C is the speed of sound ~ 343 meters/second). For example, if a scientist set up an ultrasonic sensor aimed at a box and it took 0.025 seconds for the sound to bounce back, the distance between the ultrasonic sensor and the box would be:


**Advantages of Ultrasonic Sensors**

- Not affected by color or transparency of objects

- Can be used in dark environments

- Low-cost option


- Not highly affected by dust, dirt, or high-moisture environments

- They have greater accuracy than many other methods at measuring thickness and distance to a parallel surface

- Their high frequency, sensitivity, and penetrating power make it easy to detect external or deep objects

- Ultrasonic sensors are easy to use and not dangerous during operation to nearby objects, people or equipment

**Applications of Ultrasonic Sensor**


- Ultrasonic sensor is used in oil, chemical, milk or water tanks for level measurements or for liquid level control.


- This sensor is used in thru beam detection for high speed counting.


- This sensor is used in robotic industry for robot sensing.


- This sensor is used in car parking system where car entry is controlled through barrier system, the barrier must not be lowered when there is beneath a vehicle. This whole  process is controlled through ultrasonic sensor.


- This sensor is used with bottle cutting and drink filling machines, where bottle is detecting at serval points and for this continuous monitoring the ultrasonic sensor is used.


- This sensor is used in transporting printed circuit boards (PCBs) industry where smart phones, computer mother boards and home appliances circuit boards are designed and print.


- This sensor is used in car manufacturing industry for manufacturing or assemble the car automatically.


- This sensor is used in car washing system for detecting and washing the car automatically.


- This sensor is used for detecting the speed of motor or generator.


- This sensor is also used in presence detection system


## 4. **Touch Sensor**:

![Touch_Sensor]( https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/Touch_Sensor/Touch_sensor.jpg "Touch sensor")

A touch sensor is an electronic sensor used in detecting and recording physical touch. Also known as tactile sensors, it’s a small, simple, low-cost sensor made to replace old mechanical switches we seen in the past.

A touch sensor works like a switch, where when there’s contact, touch, or pressure on the surface of a touch sensor, it opens up an electrical circuit and allows currents to flow through it.

**Advantages of Touch Sensor**


- It is easy for inexperienced user to learn and operate with the help of touch of any one of the fingers.



- ➨It saves lot of space and avoids external devices such as keyboard or mouse.


- ➨It provides quick and efficient selection of menu options.


- ➨The interface is very easy to maintain as no dirt gets accumulated.


- ➨It is easy to change the GUI on the touch screen interface with the help of software upgrades.


- ➨It offers very high durability and reliability.


**Applications of Touch Sensor**

- The capacitive touch sensors can be easily manufactured with an attractive design and in less investment. Hence these are widely preferred in mobile phones, iPods,  various industrial and automotive applications.

- The most common application of touch sensors can be seen in water taps such that with one touch, the flow of running water can be controlled.



## 5. **Humidity Sensor** :

![Humidity_sensor](https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/DTH%20sensor/DHT11-pin.jpg "Humidity sensor")



A humidity sensor is a device that detects and measures water vapor. TE Connectivity (TE) manufactures a complete range of calibrated and amplified sensor products that measure relative humidity (RH). Based on our robust capacitive technology, these humidity sensors provide accurate measurement of dew point and absolute humidity by combining relative humidity (RH) and temperature (T) measurements. 


**Advantages of Humidity Sensor**


- Can withstand below temperature of 0oC


- It does not require any maintenance for longer periods


- Flexibility to use


- atm. pressure independent, it works when pressure is being applied


## 6. **Soil Moisture Sensor**:

![Soil Moisture Sensor]( https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/Soil_Moisture_Sensor/soil_moisture_sensor.jpg "Soil Moisture Sensor")


The soil moisture sensor is one kind of sensor used to gauge the volumetric content of water within the soil. As the straight gravimetric dimension of soil moisture needs eliminating, drying, as well as sample weighting. These sensors measure the volumetric water content not directly with the help of some other rules of soil like dielectric constant, electrical resistance, otherwise interaction with neutrons, and replacement of the moisture content.

**Soil Moisture Sensor Pin Configuration**

- VCC pin is used for power


- A0 pin is an analog output


- D0 pin is a digital output


- GND pin is a Ground


**Soil Moisture Sensor Applications**

- Agriculture


- Landscape irrigation


- Research


- Simple sensors for gardeners


## 7. **LDR Sensor**:

![LDR_SENSOR](https://github.com/samudralaAbhiramrao/Arduino-experiments/blob/main/LDR/LDR_sensor.jpg "LDR Sensor")


A photoresistor (also known as a light-dependent resistor, LDR, or photo-conductive cell) is a passive component that decreases resistance with respect to receiving luminosity (light) on the component's sensitive surface.The working principle of an LDR is photoconductivity, that is nothing but an optical phenomenon. When the light is absorbed by the material then the conductivity of the material reduces. When the light falls on the LDR, then the electrons in the valence band of the material are eager to the conduction band.


**LDR advantages**


- High sensitivity (due to the large area it can cover).


- Easy employment.


- Low cost.


- There is no union potential.


- High light-dark resistance ratio.
