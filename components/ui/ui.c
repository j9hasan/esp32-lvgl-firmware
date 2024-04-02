#include <stdio.h>
#include <esp_log.h>
#include "lvgl.h"
#include "ui.h"
#include "sd_fat.h"

void ui_init()
{
	lv_obj_t *label = lv_label_create(lv_scr_act());
	lv_obj_center(label);
	lv_label_set_text(label, "HELLO");
}
