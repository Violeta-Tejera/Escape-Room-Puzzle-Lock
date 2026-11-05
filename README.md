# Piano based Escape Room Lock


## Disclaimer
The information displayed here is provided as is, you are using it at your own risk. Under no circumstances shall the author be liable for any kind of damages resulting from the use, misuse or inability to use of this code and information even though if the author had previously advised of the possibility of such damages.

## Summary

This purpose is part of a much bigger project that probably will not be published anywhere anytime soon, which is a Escape Room I have designed for my partner's birthday.

In previous not disclosed puzzles she will achieve the correct sequence to input in this lock, which is:

![Green](https://img.shields.io/badge/green-22C55E?style=flat-square) ![Green](https://img.shields.io/badge/green-22C55E?style=flat-square) ![Yellow](https://img.shields.io/badge/yellow-EAB308?style=flat-square) ![Green](https://img.shields.io/badge/green-22C55E?style=flat-square) ![Red](https://img.shields.io/badge/red-EF4444?style=flat-square) ![Orange](https://img.shields.io/badge/orange-F97316?style=flat-square) ![Green](https://img.shields.io/badge/green-22C55E?style=flat-square) ![Green](https://img.shields.io/badge/green-22C55E?style=flat-square)

![Yellow](https://img.shields.io/badge/yellow-EAB308?style=flat-square) ![Green](https://img.shields.io/badge/green-22C55E?style=flat-square) ![Pink](https://img.shields.io/badge/pink-EC4899?style=flat-square) ![Red](https://img.shields.io/badge/red-EF4444?style=flat-square) ![Green](https://img.shields.io/badge/green-22C55E?style=flat-square) ![Green](https://img.shields.io/badge/green-22C55E?style=flat-square) ![Green](https://img.shields.io/badge/green-22C55E?style=flat-square) ![Purple](https://img.shields.io/badge/purple-A855F7?style=flat-square) ![Red](https://img.shields.io/badge/red-EF4444?style=flat-square)

![Orange](https://img.shields.io/badge/orange-F97316?style=flat-square) ![Yellow](https://img.shields.io/badge/yellow-EAB308?style=flat-square) ![Blue](https://img.shields.io/badge/blue-3B82F6?style=flat-square) ![Blue](https://img.shields.io/badge/blue-3B82F6?style=flat-square) ![Purple](https://img.shields.io/badge/purple-A855F7?style=flat-square) ![Red](https://img.shields.io/badge/red-EF4444?style=flat-square) ![Pink](https://img.shields.io/badge/pink-EC4899?style=flat-square) ![Red](https://img.shields.io/badge/red-EF4444?style=flat-square)

Each button has assigned a musical note, and playing this sequence will reproduce a simple version of the Happy Birthday tune.

[Wanna change the sequence? Check it out here!](#what-if-i-want-to-use-a-different-custom-sequence)

If the sequence is being introduced correctly, the red led will be lit. Any mistakes (or reset) will turn it off and the player shall start again to introduce it.

When the correct sequence is finally introduced, the 4 digit display will show a congratulating message before showing the 4 digit password (that unlocks a 4 digit lock in my game) and playing an enhanced version of the Happy Birthday song.

## Components

<details>
  <summary>1 Arduino Nano</summary>
  
  It is a small microcontroller <a href="https://en.wikipedia.org/wiki/Open_source">Open Source</a> board based on the <a href="https://en.wikipedia.org/wiki/ATmega328">ATmega328P</a> chip. It acts as the brain of the project, processing the input from the buttons according to the game logic and controlling the display, buzzer and LED.

  The Arduino I've used has a USB-C port, which is used to power it thus powering the entire system. 
  
</details>

<details>
  <summary>1 TM1637 module</summary>
  
  It is a 4-digit <a href="https://en.wikipedia.org/wiki/Segment_display#Seven-segment_display">7-segment</a> display module with an integrated controller, which facilitates the use of these kind of displays overall, and specially on developer boards with a scarcity of input pins.
  
</details>

<details>
  <summary>8 pushbuttons (Ideally with caps)</summary>
  
  <a href="https://en.wikipedia.org/wiki/Push-button">Pushbuttons</a> are momentary switches that close an electrical circuit when pressed. They are used as user inputs that allow the player to interact with the device.
  
</details>

<details>
  <summary>1 Passive Buzzer</summary>
  
  <a href="https://en.wikipedia.org/wiki/Piezoelectric_speaker">Passive buzzers</a> are electroacoustic transducers, which means that they turn electric signals into sound. 

  Unlike Active Buzzers, which contain an internal oscillator that generates a fixed-frequency tone when powered, Passive Buzzers require an external oscillating electric signal to produce sound, which causes the piezoelectric element to vibrate thus generate sound waves.

  By changing the frequency of the signal, different musical notes can be produced, making it suitable for playing melodies.  
</details>

<details>
  <summary>1 LED</summary>

  <a href="https://en.wikipedia.org/wiki/Light-emitting_diode">Light Emitting Diodes (LEDs)</a> are semiconductor components that convert electrical energy into light through electroluminescence. When an appropiate voltage is applied across its terminals in the correct polarity, electric current flows through the semiconductor junction, causing it to emit light.
</details>

<details>
  <summary>1 220Ω resistor</summary>
  <a href="https://en.wikipedia.org/wiki/Resistor">Resistors</a> are passive electronic components that oppose the flow of electric current, limiting the amount of current that can pass through a circuit. Its resistance is measured in Ohms (Ω), and its behaviour is described by <a href="https://en.wikipedia.org/wiki/Ohm%27s_law">Ohm's Law</a>, which establishes the relationship between Voltage, Current and Resistance.

  This resistor is connected in series with the LED to limit the current flowing through it, preventing the excessive current that could damage the LED and/or the Arduino's output pin. 
</details>

<details>
  <summary>8 10kΩ resistors</summary>
  These resistors are being used with the pushbuttons as <a href="https://en.wikipedia.org/wiki/Pull-up_resistor">pull-down resistors</a>, which ensures that the Arduino reads a stable LOW signal whenever the buttons are not pressed. 
</details>

- 9x15cm perfboard and solder / 1 protoboard if not confident with soldering
- Wire (I used 22awg solid core wire; you can use jumper wires if working with a protoboard)
- (Optional) Male/Female header pins

## Circuit

<p align="center">
<img width="550" src="https://github.com/Violeta-Tejera/Piano-Escape-Room-Lock/blob/main/img/circuit_bb.png">
</p>

## Software and using the project

This project has been developed using C/C++ in Visual Studio Code with the [PlatformIO extension](https://platformio.org/install/ide?install=vscode). Building and uploading actions can be performed directly through the PlatformIO toolbar, as well as making use of the Serial Monitor for debugging reasons.

You will need to install the [TM1637](https://github.com/avishorp/tm1637) library as well.

After you clone the project into your desired path and dowloading the previously mentioned software, you  can open it and work with it!

```
cd DESIRED_PATH
git clone https://github.com/Violeta-Tejera/Piano-Escape-Room-Lock
```

## Q&A

### What if I want to use a different custom sequence?



