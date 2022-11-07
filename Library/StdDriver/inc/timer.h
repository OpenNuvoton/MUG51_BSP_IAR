
#define TIMER0        0
#define TIMER1        1
#define TIMER2        2
#define TIMER3        3


#define UNIT_1US      0
#define UNIT_10US     1
#define UNIT_100US    2
#define UNIT_1MS      3
#define UNIT_10MS     4
#define UNIT_100MS    5
#define UNIT_1S       6



void Timer0_AutoReload_Interrupt_Initial(unsigned char u8SYSCLK, unsigned long u32DLYUnit);
void Timer1_AutoReload_Interrupt_Initial(unsigned char u8SYSCLK, unsigned long u32DLYUnit);
void Timer2_AutoReload_Interrupt_Initial(unsigned char u8SYSCLK, unsigned long u32DLYUnit);
void Timer3_AutoReload_Interrupt_Initial(unsigned char u8SYSCLK, unsigned long u32DLYUnit);
