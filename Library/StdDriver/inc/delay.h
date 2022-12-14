
#define TIMER0        0
#define TIMER1        1
#define TIMER2        2
#define TIMER3        3


#define UNIT_1US      0
#define UNIT_10US     1
#define UNIT_100US   2
#define UNIT_1MS     3
#define UNIT_10MS     4
#define UNIT_100MS    5
#define UNIT_1S       6


void Timer0_Delay(unsigned long u32SYSCLK, unsigned int u16CNT, unsigned int u6DLYUnit);
void Timer1_Delay(unsigned long u32SYSCLK, unsigned int u16CNT, unsigned int u6DLYUnit);
void Timer2_Delay(unsigned long u32SYSCLK,unsigned int u16TMDIV, unsigned int u16CNT, unsigned long u32DLYUnit);
void Timer3_Delay(unsigned long u32SYSCLK,unsigned char u8TMDIV, unsigned int u16CNT, unsigned long u32DLYUnit);
void Timer_Interrupt_Enable(unsigned char u8TM);

void Timer0_Delay1ms(unsigned int u16CNT);
void Timer0_Delay10ms(unsigned int u16CNT);
void Timer0_Delay50ms(unsigned int u16CNT);

void Timer1_Delay1ms(unsigned int u16CNT);
void Timer1_Delay10ms(unsigned int u16CNT);
void Timer1_Delay50ms(unsigned int u16CNT);

void Timer2_Delay1ms(unsigned int u16CNT);
void Timer2_Delay10ms(unsigned int u16CNT);
void Timer2_Delay100ms(unsigned int u16CNT);
void Timer2_Delay200ms(unsigned int u16CNT);
void Timer2_Delay1s(unsigned int u16CNT);

void Timer3_Delay500us(unsigned int u16CNT);
void Timer3_Delay1ms(unsigned int u16CNT);
void Timer3_Delay10ms(unsigned int u16CNT);
void Timer3_Delay100ms(unsigned int u16CNT);
void Timer2_Delay200ms(unsigned int u16CNT);