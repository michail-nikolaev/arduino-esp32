/* Class of Zigbee Range Extender endpoint inherited from common EP class */

#pragma once

#include "soc/soc_caps.h"
#include "sdkconfig.h"
#if CONFIG_ZB_ENABLED

#include "ZigbeeEP.h"
#include "ha/esp_zigbee_ha_standard.h"

class ZigbeeRangeExtender : public ZigbeeEP {
public:
  ZigbeeRangeExtender(uint8_t endpoint);
  ZigbeeRangeExtender(uint8_t endpoint, uint8_t app_device_version);
  ~ZigbeeRangeExtender() {}
};

#endif  // CONFIG_ZB_ENABLED
