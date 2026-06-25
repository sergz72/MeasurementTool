#ifndef CORE_MAIN_MASTER_H
#define CORE_MAIN_MASTER_H

#define I2C_SOFT
#define I2C_TIMEOUT 1000000
#define i2c_dly delay_us(5)

#define SI5351_XTAL_FREQ 25000000
#define SI5351_CHANNELS 4

struct _DeviceObject;

int I2CCheck(int idx, int device_id);
void SCL_HIGH(int);
void SCL_LOW(int);
void SDA_HIGH(int);
void SDA_LOW(int);
int SDA_IN(int);
int SCL_IN(int);
int i2c_transfer(struct _DeviceObject *o, const void *txdata, unsigned int txdatalength, void *rxdata,
                        unsigned int rxdatalength);
int spi_transfer(struct _DeviceObject *o, const void *txdata, unsigned int txdatalength, void *rxdata,
                        unsigned int rxdatalength);
void init_spi(int module_id);

#endif
