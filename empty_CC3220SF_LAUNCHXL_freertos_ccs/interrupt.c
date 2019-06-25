/*
 * interrupt.c
 *
 *  Created on: Jun 17, 2019
 *      Author: Dell User
 */



#include <stdint.h>
#include <stddef.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>

/* Example/Board Header files */
#include "Board.h"

/*
 *  ======== gpioButtonFxn0 ========
 *  Callback function for the GPIO interrupt on Board_GPIO_BUTTON0.
 */
void gpioButtonFxn0(uint_least8_t index)
{
    /* Clear the GPIO interrupt and toggle an LED */
    GPIO_toggle(Board_GPIO_LED2);
}

/*
 *  ======== gpioButtonFxn1 ========
 *  Callback function for the GPIO interrupt on Board_GPIO_BUTTON1.
 *  This may not be used for all boards.
 */
//void gpioButtonFxn1(uint_least8_t index)
//{
    /* Clear the GPIO interrupt and toggle an LED */
//    GPIO_toggle(Board_GPIO_LED1);
//}

/*
 *  ======== mainThread ========
 */
void intTerrput(void *arg0)
{
    /* Call driver init functions */
   // GPIO_init();

    /* Configure the LED and button pins */
 //  GPIO_setConfig(Board_GPIO_LED0, GPIO_CFG_OUT_STD | GPIO_CFG_OUT_LOW);
   GPIO_setConfig(Board_GPIO_LED2, GPIO_CFG_OUT_STD | GPIO_CFG_OUT_LOW);
    GPIO_setConfig(Board_GPIO_BUTTON0, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);

   /* Turn on user LED */
  GPIO_write(Board_GPIO_LED2, Board_GPIO_LED_ON);

    /* install Button callback */
    GPIO_setCallback(Board_GPIO_BUTTON0, gpioButtonFxn0);

    /* Enable interrupts */
    GPIO_enableInt(Board_GPIO_BUTTON0);

    /*
     *  If more than one input pin is available for your device, interrupts
     *  will be enabled on Board_GPIO_BUTTON1.
     */
 //   if (Board_GPIO_BUTTON0 != Board_GPIO_BUTTON1) {
        /* Configure BUTTON1 pin */
 //       GPIO_setConfig(Board_GPIO_BUTTON1, GPIO_CFG_IN_PU | GPIO_CFG_IN_INT_FALLING);

        /* Install Button callback */
 //       GPIO_setCallback(Board_GPIO_BUTTON1, gpioButtonFxn1);
 //       GPIO_enableInt(Board_GPIO_BUTTON1);
    //}
    while(1){}

   // return (NULL);
}

