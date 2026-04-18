# STM32 UART Command Interface

## 📌 Overview

This project implements a bidirectional UART communication system between a PC and an STM32F407 microcontroller using a CP2102 USB-to-UART bridge.

The system allows a user to send textual commands from a serial terminal (PuTTY) and receive real-time responses from the microcontroller.

---

## 🚀 Features

* UART communication using STM32 (UART4)
* Real-time data exchange between PC and microcontroller
* Command-based interface
* LED control via serial commands
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
5. Click **Open**
6. Start sending commands

---

## 📡 Example Commands

```text
LED_ON
LED_OFF
STATUS
```

### Example Response

```text
OK
LED ON
System Ready
```

---

## 🧠 Implementation Details

* UART communication implemented using HAL drivers
* Blocking receive/transmit functions
* Simple command parser for string comparison
* Real-time interaction via serial terminal

---

## 📈 What I Learned

* UART protocol and serial communication
* STM32 peripheral configuration (UART, GPIO, AF)
* Embedded C programming
* Hardware-software integration
* Debugging using serial tools

---

## 🔮 Future Improvements

* Interrupt-based UART (non-blocking)
* DMA support
* Advanced command parser
* Sensor integration (e.g., temperature sensor)
* Error handling and validation

---

## 📬 Author

Shahar Naim
