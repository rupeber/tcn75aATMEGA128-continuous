

#ifndef I2C_DEF
#define I2C_DEF

#define START 1
#define STOP 2
#define SLA 3
#define DATA 4
#define ACK 5
#define NACK 6

#define WRITE 0
#define READ 1

uint8_t i2c_send(const uint8_t code, const uint8_t data);
void i2c_init(void);
uint8_t i2c_master_send_b(const uint8_t addr, const uint8_t data);
uint8_t i2c_master_send_w(const uint8_t addr, const uint8_t msb, const uint8_t lsb);
uint8_t i2c_master_read_b(const uint8_t addr, uint8_t *byte);
uint8_t i2c_master_read_w(const uint8_t addr, uint16_t *code);

#endif
