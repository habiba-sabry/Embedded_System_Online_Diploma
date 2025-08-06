#include <stdint.h>
#define STACK_start_SP 0x20001000
extern int main();
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
extern unsigned int _E_text;

void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));
void H_fault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void MM_fault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void Bus_fault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void Usage_fault_Handler(void) __attribute__((weak, alias("Default_Handler")));

void Rest_Handler(){
    unsigned int DATA_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA;
    unsigned char* P_src = (unsigned char*)&_E_text;
    unsigned char* P_dst = (unsigned char*)&_S_DATA;
    for(int i=0; i< DATA_size; i++){
        *((unsigned char*)P_dst++)=*((unsigned char*)P_src++);
    }

    unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
    P_dst = (unsigned char*)&_S_bss;
    for(int i=0; i< DATA_size; i++){
        *((unsigned char*)P_dst++)= (unsigned char)0;
    }
    main();
}
void Default_Handler(){
    Rest_Handler();
}


uint32_t vectors[] __attribute__((section(".vectors")))={
    (uint32_t) STACK_start_SP,
    (uint32_t) &Rest_Handler,
    (uint32_t) &NMI_Handler,
    (uint32_t) &H_fault_Handler,
    (uint32_t) &MM_fault_Handler,
    (uint32_t) &Bus_fault_Handler,
    (uint32_t) &Usage_fault_Handler,
};


