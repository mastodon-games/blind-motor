default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o timing.o timing.c
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o main.o main.c
	avr-gcc -o main.bin main.o
	avr-objcopy -O ihex -R .eeprom main.bin main.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:main.hex

  avr-gcc -c -mmcu=atmega328p main.c
	avr-gcc -c -mmcu=atmega328p timing.c
	avr-gcc -mmcu=atmega328p main.o timing.o
	avr-objcopy -O ihex -j.text -j.data a.out a.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:a.hex

  avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o timing.o timing.c
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o main.o main.c
	avr-gcc -mmcu=atmega328p -o blind.out main.o timing.o
	avr-objcopy -O ihex -j.text -j.data blind.out blind.hex
	sudo avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:blind.hex
