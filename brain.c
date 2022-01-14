// ObliviousGmn // Dokuu // October 2020 // Big Brain

#include <stdio.h>
#include "bongo.c"

extern keymap_config_t keymap_config;

// Has RGB?
#ifdef RGBLIGHT_ENABLE
extern rgblight_config_t rgblight_config;
#endif

int RGB_current_mode;
uint16_t oled_timer;
bool key_pressed;

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// RGB
void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
}

// Oled Rotations
#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_left()) {
    return OLED_ROTATION_270;
  }
    else {
    return OLED_ROTATION_180;
  }
}

// Master Oled
void render_status_main(void) {
    render_space();
    render_layer_state();
    render_space();
    render_mod_status_gui_alt(get_mods()|get_oneshot_mods());
    render_mod_status_ctrl_shift(get_mods()|get_oneshot_mods());
    render_space();
    render_logo();
    render_space();
}

// Slave Oled
void render_status_secondary(void) {
  switch (get_highest_layer(layer_state)){
    case _GAME:
        //render_game_r();
        testing_game();
        break;
    case _WEAPON:
        //render_weapon_r();
        break;
    default:
       render_anim();
 }
}

// Oled Sleeps
bool oled_task_user(void) {

    // Establishing Sides
    if (is_keyboard_master()) {
        render_status_main();
    } else {
        render_status_secondary();
    }
    return false;
}
#endif

// // Keypressed
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   if (record->event.pressed) {
//     set_keylog(keycode, record);
  
//   return true;
// }