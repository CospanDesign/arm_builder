
#include <main.h>



static void main_task(void *params){
  do{
    //Toggle LED
    port_pin_set_output_level(LED_0_PIN, ~port_pin_get_input_level(LED_0_PIN));
    vTaskDelay(1000 / portTICK_RATE_MS);
  } while (1);
}

int main(void){
  system_init();
  
  xTaskCreate(&main_task,
    (const signed char *) "Main Task",
    configMINIMAL_STACK_SIZE + 100,
    NULL,
    tskIDLE_PRIORITY + 2,
    NULL);

  vTaskStartScheduler();
}
