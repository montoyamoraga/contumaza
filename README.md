# contumaza

## About

contumaza is an instrument by [Aarón Montoya-Moraga](http://montoyamoraga.io/).

## Hardware

contumaza is built using a [Teensy](https://www.pjrc.com/teensy/).

## Software

All the source code can be found on this repository.

## Available modes

### mode0: randomNote

*randomNote* receives a note on message and modifies the note value, keeping the velocity.

Hardware:
* knob_left: value0 [0 - 127]
* knob_right: value1 [0 - 127]
* knob_center: probability [0.0 - 1.0]

### mode1: randomVelocity

*randomVelocity* receives a note on MIDI message and replaces its velocity with a random one, keeping the note number.

Hardware:
* knob_left: value0 [0 - 127]
* knob_right: value1 [0 - 127]
* knob_center: probability [0.0 - 1.0]

### mode2: randomDelay

*randomDelay* receives a MIDI message and delays it a random amount of time, keeping everything else intact

Hardware:
* knob_left: value0 [0 - 127]
* knob_right: value1 [0 - 127]
* knob_center: probability [0.0 - 1.0]

### mode3: randomControlChange

*randomControlChange* receives a control change MIDI message and replaces its value with a random one, keeping the controller number.

Hardware:
* knob_left: value0 [0 - 127]
* knob_right: value1 [0 - 127]
* knob_center: probability [0.0 - 1.0]

## Contribute

If you want to contribute to this project, you can submit an issue or a pull request.

## Acknowledgements




## License

MIT
