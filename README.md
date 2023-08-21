# QAZ-Fold-Vial

This is a Vial firmware hex file for the QAZ Fold keyboard sold by Coffee Break Keyboards for both big space and split.
Due to space constraints, there are only 4 combo slots, and no support for mouse keys. If you want this let me know.

This follows the wiring diagram listed here: https://github.com/CoffeeBreakKeyboards/QAZ-Fold-Documentation/
My implementation looks like this https://imgur.com/gallery/qPbZHFs

This firmware will show up as "MANUFACTURER Tominabox1/qaz" when using it with either Vial desktop or vial.rocks.
This will be correct since it's based on that pcb and you will see the extra keys up top. 
For the toggle switches, make sure to use locking keycodes like Locking Caps instead of Caps Lock.
You can also set one as a momentary layer to make it literally a layer toggle.

This uses about 95% of the firmware space on the Atmega. 

NOTE: Has NOT been tested with a pro micro version of the pcb, and has NOT been tested with a split space. 

Hope this gets yall up and running!
