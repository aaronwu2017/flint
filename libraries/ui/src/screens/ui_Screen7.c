// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"
#include "../../../lvgl/src/extra/widgets/keyboard/lv_keyboard_seed.h"

void ui_Screen7_screen_init(void)
{
ui_Screen7 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label12 = lv_label_create(ui_Screen7);
lv_obj_set_height( ui_Label12, lv_pct(22));
lv_obj_set_width( ui_Label12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_Label12, 15 );
lv_obj_set_y( ui_Label12, -122 );
lv_obj_set_align( ui_Label12, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label12," Enter your seed words");
lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_30, LV_PART_MAIN| LV_STATE_DEFAULT);

//ui_Keyboard1 = lv_keyboard_create(ui_Screen7);
ui_Keyboard1 = lv_ex_btnmatrix_seed(ui_Screen7);
// lv_keyboard_set_popovers(ui_Keyboard1,true);
lv_obj_set_width( ui_Keyboard1, 458);
lv_obj_set_height( ui_Keyboard1, 198);
lv_obj_set_x( ui_Keyboard1, 5 );
lv_obj_set_y( ui_Keyboard1, 62 );
lv_obj_set_align( ui_Keyboard1, LV_ALIGN_CENTER );

ui_TextArea1 = lv_textarea_create(ui_Screen7);
lv_obj_set_width( ui_TextArea1, 411);
lv_obj_set_height( ui_TextArea1, 70);
lv_obj_set_x( ui_TextArea1, 3 );
lv_obj_set_y( ui_TextArea1, -77 );
lv_obj_set_align( ui_TextArea1, LV_ALIGN_CENTER );
lv_textarea_set_placeholder_text(ui_TextArea1,"24-word or 12-word seed");



lv_keyboard_set_textarea(ui_Keyboard1,ui_TextArea1);
lv_obj_add_event_cb(ui_Keyboard1, ui_event_Keyboard1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_TextArea1, ui_event_TextArea1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Keyboard1, btnm_event_handler1, LV_EVENT_VALUE_CHANGED, ui_TextArea1);

}
