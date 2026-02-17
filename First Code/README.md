# ATmega32A PlatformIO Project

This folder contains the actual firmware project.

## Quick start
```bash
cd "First Code"
pio run
pio run -t upload
pio device monitor -b 9600
```

## What it does
- Blinks an LED on `PB0` once per second.
- Prints `Hello from ATmega32A!` at 9600 baud.

## Hardware setup assumptions
- MCU: **ATmega32A**
- Clock: **11.0592 MHz external crystal**
- Programmer: **USBasp**

## Important config
See `platformio.ini` for:
- `board_build.f_cpu = 11059200L`
- `upload_protocol = usbasp`
- Fuse settings for external crystal use.
