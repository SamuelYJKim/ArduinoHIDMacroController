# ArduinoHIDMacroController
Steps to use the device:
1. Plug a micro USB cable into the device to power it on
2. Check to see if the Bluetooth module has connected. The app will look for the connection automatically. If the red LED is flashing consistently, the device has not connected yet. If the red LED stops flashing and stays red, the device has connected to the host device. If the app can’t find the device, then force close app and restart.
3. Open the app on the host device. Wait for the app to connect to the device. Once connected, the user may start using the app to control the macro keypad device.

If the user wants to disconnect from the device, Go to the top right corner and select the 3 dot button. Press “Stop this Application”. Next, select the “Stop and Exit” button to confirm. The other way to disconnect from the device is to force close the app. If the user doesn’t do either of these actions, the app will continue to be connected to the device even if the user goes back to the home screen.

Device Specifications:
The Arduino will constantly have a red LED on. This is showing that the device is turned on.
If the device isn’t working properly, either restart the app or restart the device by unplugging and replugging the micro USB cable.
There may be only 1 connection at a time. If the user wants to change devices, make sure to close any previous connections by exiting the app.

