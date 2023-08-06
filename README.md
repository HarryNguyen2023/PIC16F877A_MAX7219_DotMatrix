# PIC16F877A_MAX7219_DotMatrix
## Author Harry Nguyen (Created 08/06/2023)

LED dot matrix is a commonly used display peripheral in embedded system, which can be seen in advertisement boards or elevators. The principle to control LED dot matrix is very simple, using quick scan to loop through rows or columns to sequentially switch on and off. However, this approach is not useful as it requires us to use at least 16 I/O pins for each dot matrix, which is a huge waste. To simply reduce the number of required pin, we can use MAX7219/7221 drivers via SPI to simply control not only one but multiple dot matrices at the same time using only 4 SPI pins.

In this project, I have programmed not only the applied executable for this project, but also layers of library executables for SPI and MAX7219 driver, which can be reused easily. This is considered as a good and professional programming way for any firmware developers to build their system.

### References
[1]. Khaled Magdy, SPI Tutorial with PIC Micocontroller, https://deepbluembedded.com/spi-tutorial-with-pic-microcontrollers/.

[2]. Khaled Magdy, 2022, STM32 MAX7219 Dot Matrix Display Interfacing Library, https://deepbluembedded.com/stm32-max7219-dot-matrix-display-interfacing-library/.

[3]. Microchip, PIC16F87XA Data Sheet.
