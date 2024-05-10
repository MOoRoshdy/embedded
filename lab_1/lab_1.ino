// Define constants for pin numbers
const int buttonPin = 13;  // Pin for the push button
const int ledPin = 0;    // Pin for the LED

// Variable to store the state of the button
int buttonState = 0;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Initialize the push button pin as an input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the push button
  buttonState = digitalRead(buttonPin);

  // If the button is pressed (buttonState is LOW)
  if (buttonState == LOW) {
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Otherwise, turn off the LED
    digitalWrite(ledPin, LOW);
  }
}
