//电机驱动函数
void Motor_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
}

void Motor_Run(void)
{
    while (1)
    {
        GPIO_SetBits(GPIOA, GPIO_Pin_0);
        delay_ms(1000);
        GPIO_ResetBits(GPIOA, GPIO_Pin_0);
        delay_ms(1000);
    }
}

//写一个延时函数
void delay_ms(unsigned int ms)
{
    unsigned int i, j;
    for (i = 0; i < ms; i++)
    {
        for (j = 0; j < 1000; j++)
            ;
    }
}