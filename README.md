# STM32 UART Command Interface

## 📌 Overview

This project implements a bidirectional UART communication system between a PC and an STM32F407 microcontroller using a CP2102 USB-to-UART bridge.

The system allows a user to send textual commands from a serial terminal (PuTTY), process them on the microcontroller, control an LED, and receive real-time status responses back from the STM32.

---

## 🚀 Features

* UART communication using STM32 (UART4)
* Real-time data exchange between PC and microcontroller
* Command-based interface
* LED control via serial commands
* Status response sent back to PuTTY after each valid command
* Proper terminal line formatting using CRLF (`\r\n`)
* Modular and scalable code structure

---

## 🛠️ Hardware

* STM32F407 (Discovery / custom board)
* CP2102 USB to UART converter
* USB cable

---

## 🔌 Wiring

| CP2102 | STM32F407       |
| ------ | --------------- |
| TXD    | RX (PC11 / PA1) |
| RXD    | TX (PC10 / PA0) |
| GND    | GND             |

> ⚠️ TX and RX must be crossed

---

## ⚙️ Configuration

* UART Peripheral: **UART4**
* Baud Rate: **115200**
* Data Bits: 8
* Stop Bits: 1
* Parity: None
* Alternate Function: **AF8**
* Terminal line ending: **CRLF (`\r\n`)**

---

## 💻 Software

* STM32CubeIDE
* PuTTY (for serial communication)

---

## ▶️ How to Run

1. Connect CP2102 to STM32 (TX ↔ RX, GND ↔ GND)
2. Connect CP2102 to PC
3. Open PuTTY
4. Select:

   * Serial
   * COM Port (e.g., COM4)
   * Baud Rate: 115200
   * Data Bits: 8
   * Stop Bits: 1
   * Parity: None
   * Flow Control: None
5. Click **Open**
6. Start sending commands
7. Press **Enter** to complete a command and trigger the STM32 response

---

## 📡 Example Commands

```text
LED ON
LED OFF
