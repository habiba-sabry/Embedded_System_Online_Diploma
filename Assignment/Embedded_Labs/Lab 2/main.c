typedef volatile unsigned int vunit32_t;
#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x40010800
#define RCC_APB2ENR *((volatile unsigned int*)(RCC_BASE +0x18))
#define GPIOA_CRH *((volatile unsigned int*)(GPIOA_BASE +0x04))
#define GPIOA_ODR *((volatile unsigned int*)(GPIOA_BASE +0x0C))

#define RCC_IOPAEN (1<<2)
#define GPIOA13 (1UL<<13)

typedef union{
    vunit32_t all_fields;
    struct{
        vunit32_t reserved:13;
        vunit32_t P_13:1;
    } pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE+0x0C);
unsigned char g_variables[3]={1,2,3};
unsigned char const const_variables[3]={1,2,3};

int main(){
    RCC_APB2ENR |= RCC_IOPAEN;
    GPIOA_CRH &= 0xFF0FFFFF;
    GPIOA_CRH |= 0x00200000;
    while(1){
        R_ODR->pin.P_13=1;
        for(int i=0; i<5000;i++);
        R_ODR->pin.P_13=0;
        for(int i=0; i<5000;i++);
    }
}
