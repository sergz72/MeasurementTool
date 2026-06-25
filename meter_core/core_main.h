#ifndef CORE_MAIN_H
#define CORE_MAIN_H

#ifndef MAX_SUBDEVICES
#define MAX_SUBDEVICES 4
#endif

struct _DeviceObject;

void configure_hal(void);
void blink_led(void);
void main_comm_port_write_bytes(const unsigned char *data, int len);
int main_comm_port_read_bytes(unsigned char *buffer, int buffer_size);
unsigned long long int time_us(void);
void delay_us(unsigned int us);
void core_main(void);
void release_reset(void);
void change_channel(int);
void init_interrupt_pin(const struct _DeviceObject *o);
int get_interrupt_pin_level(const struct _DeviceObject *o);

#endif
