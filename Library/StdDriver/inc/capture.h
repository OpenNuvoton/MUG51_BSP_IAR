#define IC0    0
#define IC1    1
#define IC2    2

#define CAPTUREFALLING    0
#define CAPTURERISING     1
#define CAPTUREEITHER     2

#define TM2_FSYS    0
#define TM2_P40     1
#define TM2_P54     2 
#define TM2_P32     3

#define IC_GPIO     0
#define ACMP0_O     1
#define ACMP1_O     2

void TIMER2_Capture(unsigned char u8CAPChannel, unsigned char u8CAPSource, unsigned char u8CAPLevel, unsigned char u8TM2DIV);
void TIMER2_Capture_Interrupt(unsigned char u8CAPINT);
void TIMER2_Clcok_Source(unsigned char u8TM2CKSource);