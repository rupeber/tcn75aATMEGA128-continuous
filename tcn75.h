
#ifndef TCN75
#define TCN75

#include "i2c.h"

/*! Slave write address 1001 111 R/W */
#define ADDR 0x9e

/*! Register configuration
 * 10 bit resolution and shutdown mode
 */
#define TCN_CONF 0x21
/*! Time in msec to wait for a sample in
 * single shot mode.
 * Depend on the resolution setting.
 */
#define TCN_TSAMPLE 250

void tcn75_init(void);
uint8_t tcn75_read_config_reg(uint8_t *reg);
float tcn75_read_temperature(void);

#endif
