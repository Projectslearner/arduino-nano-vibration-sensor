# Arduino Nano Vibration Sensor

#### Project Overview

This project demonstrates how to use a vibration sensor with an Arduino Nano to detect vibrations or movement. The vibration sensor outputs a digital signal when vibrations are detected, which can be used to trigger actions or alerts in your project.

#### Components Needed

- **Arduino Nano**
- **Vibration Sensor Module**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup

1. **Connect Vibration Sensor Module to Arduino Nano:**
   - **Signal Pin:** Connect to digital pin 2 on Arduino Nano.
   - **VCC Pin:** Connect to 5V on Arduino Nano.
   - **GND Pin:** Connect to GND on Arduino Nano.

#### Instructions

1. **Circuit Setup:**
   - Connect the vibration sensor module to the Arduino Nano as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Nano.
   - Open the serial monitor with a baud rate of 9600.
   - Tap or shake the vibration sensor module. Observe the serial monitor output displaying "Vibration detected!" when vibrations are detected.

#### Applications

- **Security Systems:** Use for detecting unauthorized movement or tampering.
- **Monitoring Systems:** Implement in systems where detecting vibrations is critical, such as equipment monitoring.
- **Alarm Systems:** Trigger alarms or notifications based on detected vibrations.

#### Notes

- Ensure the vibration sensor module is correctly connected to the Arduino Nano and powered.
- Adjust the delay in the code (`delay(500)`) to control how long the "Vibration detected!" message stays on the serial monitor.
- Consider adding debounce techniques if false positives are detected due to sensor sensitivity.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-nano-vibration-sensor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner