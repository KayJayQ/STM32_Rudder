# STM32_Rudder
A game controller designed for simulate "Rudder" input in flight simulation game. Implemented by STM32 platform,

Models are uploaded and used to 3D print.

# How to use?
Things you need to prepare:
  STM32F103RCT6 MCU or same level products if you know how to regenerate code by CubeIDE
  Development board based on MCU that can connect USB cable to PC
  3 Potentiometer (detail scale parameters work in progress)
  3D print the STL models in rar file provided (due to accuracy of 3D printer, you need a sandpaper)
  9mm diameter, 25cm length piston rod (cylindrical) x4
  
Assemble the printed model, with potentiometers. 
Open the project with CubeIDE, and download it onto development board. 
Connect 3 potentiometer to 3 ADC channel to simulate X,Y,Z axis.
Adjust driver program (dead zone, range) to adopt your model.
