#define LED_PIN 2

void setup()
{
	pinMode(LED_PIN, OUTPUT);
	digitalWrite(LED_PIN, LOW);
}

void loop()
{
	digitalWrite(LED_PIN, HIGH);
	delay(2000);

	digitalWrite(LED_PIN, LOW);
	delay(1000);
}