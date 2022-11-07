#define FSYSCLK  7372800


extern BIT BIT_TMP;
extern unsigned char __data  TA_REG_TMP,SFRS_TMP,BYTE_TMP;

unsigned char Read_APROM_BYTE(unsigned int __code *u16_addr);
void Global_Interrupt(unsigned char u8IntStatus);
void PowerDown_Level(unsigned char u8PDLevel);
void _delay_(void);
