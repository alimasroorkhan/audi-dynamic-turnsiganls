# AUDI Sequential Turn Signals

This project replicates the sequential turn signal effect found in Audi vehicles using an Arduino or ESP8266 board and a series of LEDs.

## About Audi Sequential Turn Signals

Audi's sequential turn signals, also known as "dynamic turn signals," are a unique feature found in many Audi models. Instead of a traditional blinking turn signal, Audi's system uses a series of LEDs that light up in a sequential pattern, creating a visually appealing and distinctive effect.

The turn signals start at the inner corner of the headlight or taillight and progress outward in a sweeping motion, mimicking the movement of a baton. This design not only looks stylish but also helps to make the vehicle more visible and noticeable to other drivers on the road.

## How It Works

The code provided in this repository controls a series of LEDs connected to an Arduino or ESP8266 board. It creates a sequential lighting effect similar to Audi's turn signals by turning on and off the LEDs in a specific order with a short delay between each LED.

The code includes the following features:

- Supports an arbitrary number of LEDs
- Configurable delay time between LED activations
- Separate functions for left and right turn signals
- Compatibility with both Arduino and ESP8266 boards

## Usage

1. Connect the LEDs to the corresponding pins on your Arduino or ESP8266 board.
2. Modify the `NUM_LEDS` and `ledPins` array in the code to match your LED setup.
3. Adjust the `delayTime` variable to change the speed of the sequential indicators.
4. Upload the code to your board using the Arduino IDE or the appropriate tools for your ESP8266 board.

## Contributing

If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request on the [GitHub repository](https://github.com/your-username/audi-sequential-turn-signals).

## License

This project is licensed under the [MIT License](LICENSE).
