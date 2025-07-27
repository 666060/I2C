# I2C Communication Between Two ATmega32 Microcontrollers

This project demonstrates I2C communication between two ATmega32 microcontrollers.  
The *master* sends data over the I2C bus, and the *slave* receives it and displays the received value on an *LCD screen*.

## 📌 Project Description

- *Microcontroller Used*: ATmega32 (for both master and slave)
- *Communication Protocol*: I2C (Inter-Integrated Circuit)
- *Master Role*: Sends a byte of data via I2C.
- *Slave Role*: Receives the data and shows it on a 16x2 LCD.
- *Purpose*: To understand basic I2C communication and how to handle received data in real-time.

## 🧰 Tools Used
- *Eclipse IDE* with *AVR-GCC* compiler for writing and building the code
- *Proteus* for circuit simulation and testing
- *GitHub* for version control and sharing

## 📷 Simulation Output

![LCD Output](lcd_output.png)

## 📁 File Structure
- MASTER/ → Master code and Proteus design
- SLAVE/ → Slave code and Proteus design
- README.md → Project description
- LICENSE → MIT LICENSE 

---

Feel free to fork or modify this project for your own learning.
