#ifndef BUTTON_LIB_H
#define BUTTON_LIB_H

int lib_init();
int button_init(void (*callback)(void));
int spi_init(void);
int spi_opertation(unsigned char *data, int len);
#endif
