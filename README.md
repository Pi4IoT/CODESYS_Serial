# CODESYS_Serial
## CODESYS - Raspberry - Arduino – RS232(USB)

![RS232](https://user-images.githubusercontent.com/36192933/38459693-6970b904-3aad-11e8-9068-33f613c36dde.jpg)

This example demonstrates how serial communication can be implemented, how ports are opened, 
closed on Raspberry Pi to communicate with Arduino via COM Port RS232 by using CODESYS.

The Demo set the light of the LED bar and read out the temperature from the thermocouple.

First of all you need to download the free The CODESYS Development System (you need to register) after install it, 
you need to download CODESYS Control for Raspberry Pi SL (free version  runs for 2h and the you need it to restart)

## Links:
[CODESYS Development System ](https://store.codesys.com/codesys-23.html)<br />
[CODESYS Control for Raspberry Pi SL](https://store.codesys.com/codesys-control-for-raspberry-pi-sl.html?___store=en)

## Important
After install Codesys on Raspberry you need to edit the file “CODESYSControl.cfg” as following:
sudo nano /etc/CODESYSControl.cfg 
<hr>
[SysCom]<br />
<br />
Linux.Devicefile=/dev/ttyACM <br />
portnum := COM.SysCom.SYS_COMPORT1<br />
<br />
<hr>
Save it and restart the codesys controller <br />
sudo /etc/init.d/codesyscontrol restart<br />
