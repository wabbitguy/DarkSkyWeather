# ESP8266 and ESP32 Dark Sky weather client

Arduino client library for https://darksky.net/dev

Collects current weather plus daily forecasts.

March 10, 2019 - current code in use is in the Examples-->TFT_eSPI_weather folder
* Added signal strength for ESP8266 - top right corner of display
* Added current UV index 0 - 9 bar graph under signal strength
* Removed baromatric pressure reading (really needs a history to show rising or falling to be useful)
* Added ESP8266 captive portal for setup (removed router network and password from settings)
* Added ESP9266 OTA update ability (shows as "HOSTNAME" IP in Arduino IDE).
* Default HOSTNAME is WeatherMate
* Updates NTP once per hour
* Updates DarkSky every 30 minutes
* Added POP (probility of precipitation) to future forecast
* Coloured POP - green low prob, orange (more or less a 50/50 chance), red for 75% or higher
* Expanded date for last update info
* Fixed 12hr midnight clock (reads 12:xx now)...

AllSettings.h options
* Time displayed 12 or 24 hr
* AutoDimDusk (clock will dim (light grey) at sunset, change to yellow at sunrise for the day)

Requires the JSON parse library here:
https://github.com/Bodmer/JSON_Decoder

Requires the TFT_eSPI library here:
https://github.com/Bodmer/TFT_eSPI

The DarkSkyWeather_Test example sketch sends collected data to the Serial port for API test. It does not not require a TFT screen.

The TFT_eSPI_Weather example works with the ESP8266 and ESP32, it displays the weather data on a TFT screen.  These examples use anti-aliased fonts and newly created icons:

![Weather isons](https://i.imgur.com/luK7Vcj.jpg)

Latest screen grabs:

![TFT splash screen](https://i.imgur.com/gh75gd6.png)

![TFT screenshot 1](https://www.wabbitwanch.net/arduino/WeatherMate_Display.png)

