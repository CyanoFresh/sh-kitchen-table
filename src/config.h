#ifndef ROOM1_SECONDARY_LIGHT_CONFIG_H
#define ROOM1_SECONDARY_LIGHT_CONFIG_H

#include <Arduino.h>

namespace config {
    const char WIFI_SSID[] = "Solomaha";
    const char WIFI_PASSWORD[] = "solomakha21";

    const auto MQTT_HOST = IPAddress(192, 168, 1, 230);
    const uint16_t MQTT_PORT = 1883;
    const char MQTT_ID[] = "kitchen-table";
    const char MQTT_PASSWORD[] = "fsdknmjhdfeukit876n23nt86c231t86n7ixr32tb";

    const uint8_t DHT_PIN = D3;

    const uint8_t SENSOR_READ_INTERVAL = 36;
    const uint8_t SENSOR_READ_COUNT = 5;
}

#endif
