
#define     PAGE_SIZE               128

extern unsigned char __xdata DIDBuffer[4];
extern unsigned char __xdata UIDBuffer[12];
extern unsigned char __xdata UCIDBuffer[16];
extern unsigned char __xdata IAPDataBuf[128];
extern unsigned char __xdata IAPCFBuf[5];
extern unsigned char __xdata CHECKSUMBuf[1];

void LDROM_Erase(unsigned int u16IAPStartAddress, unsigned int u16IAPDataSize);
void LDROM_Blank_Check(unsigned int u16IAPStartAddress, unsigned int u16IAPDataSize);
void LDROM_Program(unsigned int u16IAPStartAddress, unsigned int u16IAPDataSize);
void LDROM_Read_Verify(unsigned int u16IAPStartAddress, unsigned int u16IAPDataSize);
void APROM_Erase(unsigned int u16IAPStartAddress, unsigned int u16IAPDataSize);
void APROM_Blank_Check(unsigned int u16IAPStartAddress, unsigned int u16IAPDataSize);
void APROM_Program(unsigned int u16IAPStartAddress, unsigned int u16IAPDataSize);
void APROM_Read_Verify(unsigned int u16IAPStartAddress, unsigned int u16IAPDataSize);
void UID_Read(void);
void UCID_Read(void);
void DID_Read(void);
void APROM_Checksum_Run(unsigned int u16IAPStartAddress,unsigned char u8ChecksumSize);
unsigned char APROM_Checksum_Read(unsigned int u16IAPStartAddress);
void LDROM_Checksum_Run(unsigned int u16IAPStartAddress,unsigned char u8ChecksumSize);
unsigned char LDROM_Checksum_Read(unsigned int u16IAPStartAddress);
void SPROM_Checksum_Run(void);
unsigned char SPROM_Checksum_Read(void);
void CONFIG_Checksum_Run(void);
unsigned char CONFIG_Checksum_Read(void);