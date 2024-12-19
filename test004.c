//写一个LED驱动函数，实现LED的闪烁功能，频率为1Hz
//LED闪烁的频率为1Hz，即每隔500ms亮灭一次

void LED_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
}

void LED_Flash(void)
{
    while (1)
    {
        GPIO_SetBits(GPIOB, GPIO_Pin_5);
        delay_ms(500);
        GPIO_ResetBits(GPIOB, GPIO_Pin_5);
        delay_ms(500);
    }
}

