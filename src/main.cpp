#include <Arduino.h>
#include <esp32_smartdisplay.h>
#include <ui.h>

void setup()
{
#ifdef ARDUINO_USB_CDC_ON_BOOT
    delay(5000);
#endif

    Serial.begin(115200);
    Serial.setDebugOutput(true);

    smartdisplay_init();

    smartdisplay_lcd_set_backlight(1); // 0 is off, 0.5 is half and 1 is full brightness.

    __attribute__((unused)) auto disp = lv_disp_get_default();
    // lv_disp_set_rotation(disp, LV_DISP_ROT_90);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_180);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_270);

    ui_init();

   /*  while (1) {
        // Your code to handle LVGL tasks
        lv_task_handler();
        usleep(5000); // Sleep for 5 milliseconds
    } */
}

void loop()
{
    lv_timer_handler();
    delay(5);
}