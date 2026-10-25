
#include "cybsp.h"
#include "cyhal.h"

int main(void)
{
    cybsp_init();
    __enable_irq();


    cyhal_gpio_init(LED_PIN,
                    CYHAL_GPIO_DIR_OUTPUT,
                    CYHAL_GPIO_DRIVE_STRONG,
                    1);


    while (1)
    {
            cyhal_gpio_write(LED_PIN, 0); 
            cyhal_system_delay_ms(1000);
       
            cyhal_gpio_write(LED_PIN, 1);  
            cyhal_system_delay_ms(1000);
    }

    return 0;
}
