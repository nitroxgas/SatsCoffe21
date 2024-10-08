// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Inicial_screen_init(void)
{
    ui_Inicial = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Inicial, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Inicial, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Inicial, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_expresso = lv_img_create(ui_Inicial);
    lv_img_set_src(ui_expresso, &ui_img_expresso_png);
    lv_obj_set_width(ui_expresso, LV_SIZE_CONTENT);   /// 69
    lv_obj_set_height(ui_expresso, LV_SIZE_CONTENT);    /// 89
    lv_obj_set_x(ui_expresso, -100);
    lv_obj_set_y(ui_expresso, -31);
    lv_obj_set_align(ui_expresso, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_expresso, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_expresso, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_expresso, 400);

    ui_lungo = lv_img_create(ui_Inicial);
    lv_img_set_src(ui_lungo, &ui_img_lungo_png);
    lv_obj_set_width(ui_lungo, LV_SIZE_CONTENT);   /// 71
    lv_obj_set_height(ui_lungo, LV_SIZE_CONTENT);    /// 92
    lv_obj_set_x(ui_lungo, 100);
    lv_obj_set_y(ui_lungo, -33);
    lv_obj_set_align(ui_lungo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_lungo, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_lungo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_lungo, 400);

    ui_LabelExpresso = lv_label_create(ui_Inicial);
    lv_obj_set_width(ui_LabelExpresso, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelExpresso, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelExpresso, -100);
    lv_obj_set_y(ui_LabelExpresso, 50);
    lv_obj_set_align(ui_LabelExpresso, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelExpresso, "Expresso");
    lv_obj_set_style_text_decor(ui_LabelExpresso, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelExpresso, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelLungo = lv_label_create(ui_Inicial);
    lv_obj_set_width(ui_LabelLungo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelLungo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelLungo, 100);
    lv_obj_set_y(ui_LabelLungo, 50);
    lv_obj_set_align(ui_LabelLungo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelLungo, "Lungo");
    lv_obj_set_style_text_decor(ui_LabelLungo, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelLungo, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Coffe21 = lv_label_create(ui_Inicial);
    lv_obj_set_width(ui_Coffe21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Coffe21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Coffe21, 0);
    lv_obj_set_y(ui_Coffe21, -118);
    lv_obj_set_align(ui_Coffe21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Coffe21, "Coffe21");
    lv_obj_set_style_text_font(ui_Coffe21, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image4 = lv_img_create(ui_Inicial);
    lv_img_set_src(ui_Image4, &ui_img_barrainf_png);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 471
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 64
    lv_obj_set_x(ui_Image4, 0);
    lv_obj_set_y(ui_Image4, 100);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_expresso, ui_event_expresso, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_lungo, ui_event_lungo, LV_EVENT_ALL, NULL);

}
