//  Use the DarkSkyWeather library: https://github.com/Bodmer/DarkSkyWeather

//  The weather icons and fonts are in the sketch data folder, press Ctrl+K
//  to view.


//                >>>       IMPORTANT TO PREVENT CRASHES      <<<
//>>>>>>  For ESP8266 set SPIFFS to at least 2Mbytes before uploading files  <<<<<<


//                >>>           DON'T FORGET THIS             <<<
//  Upload the fonts and icons to SPIFFS using the "Tools"  "ESP32 Sketch Data Upload"
//  or "ESP8266 Sketch Data Upload" menu option in the IDE.
//  To add this option follow instructions here for the ESP8266:
//  https://github.com/esp8266/arduino-esp8266fs-plugin
//  To add this option follow instructions here for the ESP32:
//  https://github.com/me-no-dev/arduino-esp32fs-plugin

//  Close the IDE and open again to see the new menu option.

//////////////////////////////
// Setttings defined below

#define TIMEZONE usPT // See NTP_Time.h tab for other "Zone references", UK, usMT etc

// Update every 15 minutes, up to 1000 request per day are free (viz average of ~40 per hour)
const int UPDATE_INTERVAL_SECS = 30 * 60UL; // 30 minutes

// Pins for the TFT interface are defined in the User_Config.h file inside the TFT_eSPI library

// For units codes see https://darksky.net/dev/docs, not all supported by library at the moment!
const String units = "us";

// Sign up for an account at Dark Sky, change x's to your API key
const String api_key = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

// For language codes see https://darksky.net/dev/docs
const String language = "en"; // Default language = en = English

// Set both longitude and latitude to at least 4 decimal places
String latitude =  "49.154"; // 90.0000 to -90.0000 negative for Southern hemisphere
String longitude = "-122.772"; // 180.000 to -180.000 negative for West
// End of user settings
//////////////////////////////
