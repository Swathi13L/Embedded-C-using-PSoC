#include "cyhal.h"
#include "cybsp.h"

int main(void)
{
    cybsp_init();
    __enable_irq();

    cyhal_gpio_init(LED_PIN,
                    CYHAL_GPIO_DIR_OUTPUT,
                    CYHAL_GPIO_DRIVE_STRONG,
                    0);

    cyhal_gpio_write(LED_PIN, 1);

    while (1)
    {
    }
}