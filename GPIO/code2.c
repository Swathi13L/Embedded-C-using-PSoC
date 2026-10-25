
#include "cybsp.h"
#include "cyhal.h"

int main(void)
{
    cybsp_init();
    __enable_irq();


    cyhal_gpio_init(BUTTON_PIN,
                    CYHAL_GPIO_DIR_INPUT,
                    CYHAL_GPIO_DRIVE_PULLUP,
                    1);

   
    cyhal_gpio_init(LED_PIN,
                    CYHAL_GPIO_DIR_OUTPUT,
                    CYHAL_GPIO_DRIVE_STRONG,
                    1);

    while (1)
    {
        int button_state = cyhal_gpio_read(BUTTON_PIN);

        if (button_state == 0)
        {
            cyhal_gpio_write(LED_PIN, 0);  
        }
        else
        {
            cyhal_gpio_write(LED_PIN, 1); 
        }
    }

    return 0;
}
