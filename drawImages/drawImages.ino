/* Simple firmware for a ESP32 displaying a static image on an EPaper Screen.
 *
 * Write an image into a header file using a 3...2...1...0 format per pixel,
 * for 4 bits color (16 colors - well, greys.) MSB first.  At 80 MHz, screen
 * clears execute in 1.075 seconds and images are drawn in 1.531 seconds.
 */

#include <Arduino.h>
#include "epd_driver.h"
#include "pic1.h"
#include "pic2.h"
#include "pic3.h"

uint8_t *framebuffer;
long randomNumber;

void setup()
{
    Serial.begin(115200);
    epd_init();
    framebuffer = (uint8_t *)heap_caps_malloc(EPD_WIDTH * EPD_HEIGHT / 2, MALLOC_CAP_SPIRAM);
    memset(framebuffer, 0xFF, EPD_WIDTH * EPD_HEIGHT / 2);

}


void loop()
{
    
    // Random number between 1-3 (depends on amount of images)
    randomNumber = random(1,4)

    epd_poweron();
    epd_clear();
    
    // IF ELSE LOOP for images in pic1.h pic2.h and pic3.h
    if(randomNumber == 1){
    	epd_draw_grayscale_image(area, (uint8_t *) pic1_data);
    } 
    if(randomNumber == 2){
    	epd_draw_grayscale_image(area, (uint8_t *) pic2_data);
    } 
    if(randomNumber == 3){
    	epd_draw_grayscale_image(area, (uint8_t *) pic3_data);
    } 
    
    epd_poweroff();
    // Update new picture in 20 sec
    delay(20000);

    
}
