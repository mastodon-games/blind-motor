#define DDRB (*(volatile unsigned char *)0x24)
#define PORTB (*(volatile unsigned char *)0x25)

#include "test/timing.h"

void delay(long);

int main() {

  // Set PORTB5 as an output
  DDRB |= (1 << 5);

  // Infinite loop
  while (1) {
    // Set PORTB5 to HIGH
    PORTB |= (1 << 5);
    delay(1000000);

    // Set PORTB5 to LOW
    PORTB &= ~(1 << 5);
    delay(1000000);
  }
}
