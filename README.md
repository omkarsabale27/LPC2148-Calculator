# 🧮 LPC2148 Calculator Using ARM7 Microcontroller

## 📌 Project Overview

The **LPC2148 Calculator Using ARM7 Microcontroller** is an embedded system project developed using the **ARM7 LPC2148 32-bit RISC microcontroller**. The main purpose of this project is to design a hardware-based calculator capable of performing basic arithmetic operations such as **addition, subtraction, multiplication, and division**.

The user provides input through a **4x4 matrix keypad**, which is interfaced with the LPC2148 GPIO pins. The microcontroller processes the input values, performs the selected mathematical operation, and displays the calculated result on a **16x2 LCD display**.

This project is developed using **Embedded C programming** and demonstrates important embedded system concepts such as **GPIO programming, LCD interfacing, matrix keypad scanning, register-level programming, bit manipulation, and modular firmware development**.

---

# 🚀 Features

- ✅ ARM7 LPC2148 Microcontroller based calculator
- ✅ 4x4 Matrix Keypad for user input
- ✅ 16x2 LCD Display for output
- ✅ Supports basic arithmetic operations:
  - ➕ Addition
  - ➖ Subtraction
  - ✖ Multiplication
  - ➗ Division
- ✅ Real-time calculation and result display
- ✅ Efficient GPIO interfacing
- ✅ Modular Embedded C programming
- ✅ Low-level register programming

---

# 🛠️ Hardware Components

| Component | Description |
|-----------|-------------|
| LPC2148 Development Board | ARM7 32-bit Microcontroller |
| 16x2 LCD Display | Displays input values and results |
| 4x4 Matrix Keypad | User input interface |
| Crystal Oscillator | Clock source for controller |
| Voltage Regulator | Stable power supply |
| Connecting Wires | Hardware connections |

---

# ⚙️ Working Principle

The LPC2148 microcontroller initializes the LCD and keypad modules during startup. The **4x4 matrix keypad** is continuously scanned to detect the pressed keys.

The user enters numbers and selects the required arithmetic operation using keypad buttons. The ARM7 processor reads the input data, performs the selected calculation using Embedded C logic, and sends the final result to the **16x2 LCD display**.

The project uses GPIO pins for communication between the LPC2148 and external peripherals. The LCD acts as an output device, while the keypad provides an input interface for performing calculations.

---

# 🔌 Hardware Interfacing

## LCD Interfacing

The 16x2 LCD is connected with LPC2148 GPIO pins.

LCD operations implemented:

- LCD Initialization
- Command Transmission
- Data Transmission
- Character Display
- String Display
- Clear Display

## Keypad Interfacing

The 4x4 matrix keypad is connected to LPC2148 GPIO pins.

Keypad operations implemented:

- Row scanning
- Column detection
- Key identification
- Input processing

---

# 🧠 Concepts Used

- ARM7 LPC2148 Architecture
- Embedded C Programming
- GPIO Register Configuration
- LCD Interfacing
- 4x4 Matrix Keypad Scanning
- Bitwise Operations
- Peripheral Interfacing
- Firmware Development

---

# 📌 Applications

- Embedded system learning projects
- ARM7 programming practice
- Digital calculator applications
- Microcontroller-based user interfaces
- Firmware development training

---

# 🔮 Future Enhancements

- Floating point calculations
- Scientific calculator functions
- EEPROM storage for calculation history
- Bluetooth/WiFi based remote calculator
- Touchscreen keypad interface

---

# 👨‍💻 Author

**Omkar Sabale**

Embedded Systems | ARM7 | IoT | Firmware Development

GitHub:
https://github.com/omkarsabale27

---

# ⭐ Project Highlights

This project demonstrates the practical implementation of an **ARM7 LPC2148-based embedded application** by integrating a keypad input system and LCD output interface. It provides hands-on experience in firmware development, hardware interfacing, and real-time embedded programming concepts used in industrial applications.
