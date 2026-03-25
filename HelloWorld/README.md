# HelloWorld Arduino Project

A minimal Arduino project demonstrating:

- LED blinking
- Serial output
- Modular configuration with `Config.h`
- Simple functions in `MathFunctions.h`

## Setup

1. Copy `Config.example.h` → `Config.h` and fill in your settings (pins, API keys, etc.).
2. Open `HelloWorld.ino` in Arduino IDE or compile using Arduino CLI.
3. Connect your Arduino board and upload the sketch.

## Notes

- Keep `Config.h` out of version control; only `Config.example.h` should be committed.
- Modify `MathFunctions.h` to add reusable functions.