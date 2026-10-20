SET(SOURCES ui_Screen1.c
    ui_Screen2.c
    ui_Screen3.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_img_743289929.c
    ui_img_1743295555.c
    ui_img_388382192.c
    fonts/ui_font_SF_PRO_16.c
    fonts/ui_font_SF_PRO_18.c
    fonts/ui_font_SF_PRO_22.c
    fonts/ui_font_SF_PRO_26.c
    fonts/ui_font_SF_PRO_bold_22.c
    fonts/ui_font_SF_PRO_bold_26.c
    fonts/ui_font_SF_PRO_bold_30.c
    fonts/ui_font_SF_PRO_light_14.c
    fonts/ui_font_SF_PRO_BOLD_40.c
    fonts/ui_font_SF_PRO_BOLD_36.c)

add_library(ui ${SOURCES})
