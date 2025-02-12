// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1112_screen_init(void)
{
ui_Screen1112 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1112, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1112, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1112, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label1131 = lv_label_create(ui_Screen1112);
lv_obj_set_width( ui_Label1131, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1131, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1131, -4 );
lv_obj_set_y( ui_Label1131, -69 );
lv_obj_set_align( ui_Label1131, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1131,"Scan Unsigned Transaction ");
lv_obj_add_state( ui_Label1131, LV_STATE_PRESSED );     /// States
lv_obj_set_style_text_color(ui_Label1131, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label1131, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label1131, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button2229 = lv_btn_create(ui_Screen1112);
lv_obj_set_width( ui_Button2229, 51);
lv_obj_set_height( ui_Button2229, 53);
lv_obj_set_x( ui_Button2229, -212 );
lv_obj_set_y( ui_Button2229, -135 );
lv_obj_set_align( ui_Button2229, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2229, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button2229, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button2229, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button2229, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Button2229, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Button2229, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ImgButton116 = lv_imgbtn_create(ui_Screen1112);
lv_imgbtn_set_src(ui_ImgButton116, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_white_background_resized_25x20_png, NULL);
lv_obj_set_height( ui_ImgButton116, 26);
lv_obj_set_width( ui_ImgButton116, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_ImgButton116, lv_pct(-45) );
lv_obj_set_y( ui_ImgButton116, lv_pct(-40) );
lv_obj_set_align( ui_ImgButton116, LV_ALIGN_CENTER );

ui_Label1110 = lv_label_create(ui_Screen1112);
lv_obj_set_width( ui_Label1110, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1110, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1110, -4 );
lv_obj_set_y( ui_Label1110, -2 );
lv_obj_set_align( ui_Label1110, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1110,"progress");
lv_obj_add_state( ui_Label1110, LV_STATE_PRESSED );     /// States
lv_obj_set_style_text_color(ui_Label1110, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label1110, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label1110, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button2229, ui_event_Button2229, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_ImgButton116, ui_event_ImgButton116, LV_EVENT_ALL, NULL);

}
