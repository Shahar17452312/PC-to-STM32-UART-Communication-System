#include <stdint.h>
#include "UARTSender.h"

#define UART_4_ADRESS 0x40004C00

#define UART4_SR_ADDR  (UART_4_ADRESS + 0x00)
#define UART4_DR_ADDR  (UART_4_ADRESS + 0x04)

static volatile uint32_t *const UART4_SR = (uint32_t *)UART4_SR_ADDR;
static volatile uint32_t *const UART4_DR = (uint32_t *)UART4_DR_ADDR;

static void UART4_SendChar(char c)
{
    while ((*UART4_SR & (1 << 7)) == 0)   // TXE
    {
    }

    *UART4_DR = (uint8_t)c;
}

static void UART4_SendString(const char *message)
{
    while (*message != '\0')
    {
        UART4_SendChar(*message);
        message++;
    }
}

void sendLedOn()
{
    UART4_SendString("\r\nLED ON: ACTIVE\r\n");
}

void sendLedOff()
{
    UART4_SendString("\r\nLED OFF: ACTIVE\r\n");
}
