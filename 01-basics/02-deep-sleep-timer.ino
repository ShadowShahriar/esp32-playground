int sleepInterval = 5;
unsigned long long uS2S = 1000000;
RTC_DATA_ATTR int bootCount = 0;

void setup()
{
	Serial.begin(115200);
	bootCount++;

	Serial.print("Boot number: ");
	Serial.println(bootCount);

	Serial.println("Going to sleep now");

	esp_sleep_enable_timer_wakeup(sleepInterval * uS2S);
	Serial.flush();
	esp_deep_sleep_start();
}

void loop()
{
}