// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
#include "ui_theme_manager.h"
#include "ui_themes.h"

// SCREEN: ui_Inicial
void ui_Inicial_screen_init(void);
extern lv_obj_t * ui_Inicial;
void ui_event_expresso(lv_event_t * e);
extern lv_obj_t * ui_expresso;
void ui_event_lungo(lv_event_t * e);
extern lv_obj_t * ui_lungo;
extern lv_obj_t * ui_LabelExpresso;
extern lv_obj_t * ui_LabelLungo;
extern lv_obj_t * ui_Coffe21;
extern lv_obj_t * ui_Image4;
// SCREEN: ui_Pagamento
void ui_Pagamento_screen_init(void);
extern lv_obj_t * ui_Pagamento;
extern lv_obj_t * ui_expresso1;
extern lv_obj_t * ui_lungo1;
extern lv_obj_t * ui_LabelExpresso1;
extern lv_obj_t * ui_LabelLungo1;
extern lv_obj_t * ui_Coffe1;
extern lv_obj_t * ui_Image1;
void ui_event_Image6(lv_event_t * e);
extern lv_obj_t * ui_Image6;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Image7;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_expresso_png);    // assets/expresso.png
LV_IMG_DECLARE(ui_img_lungo_png);    // assets/lungo.png
LV_IMG_DECLARE(ui_img_barrainf_png);    // assets/barrainf.png
LV_IMG_DECLARE(ui_img_voltar_png);    // assets/voltar.png
LV_IMG_DECLARE(ui_img_qrcode_png);    // assets/qrCode.png
LV_IMG_DECLARE(ui_img_logoc21_png);    // assets/logoC21.png






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
