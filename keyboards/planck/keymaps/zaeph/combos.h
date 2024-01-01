enum combos {
  CB_RMCT,
  CB_LMCT,
  CB_RMSF,
  CB_LMSF,
  CB_RMSY,
  CB_LMSY,
  CB_RMAT,
  CB_LMAT,
  CB_RMSP,
  CB_LMSP,
  CB_RMHP,
  CB_LMHP,

  CB_RMSC,
  CB_LMSC,
  CB_RMHC,
  CB_LMHC,

  CB_RMCS,
  CB_LMCS,
  CB_RMAS,
  CB_LMAS,
  CB_RMSS,
  CB_LMSS,
  CB_RMHS,
  CB_LMHS,

  CB_RMCZ,
  CB_LMCZ,
  CB_RMAZ,
  CB_LMAZ,
  CB_RMSZ,
  CB_LMSZ,
  CB_RMHZ,
  CB_LMHZ,

  CB_RMCA,
  CB_LMCA,
  CB_RMSA,
  CB_LMSA,
  CB_RMHA,
  CB_LMHA,

  CB_RMMEH,
  CB_LMMEH,

  CB_RMCAZ,
  CB_LMCAZ,

  CB_RMSCS,
  CB_LMSCS,
  CB_RMHCS,
  CB_LMHCS,
  CB_RMSAS,
  CB_LMSAS,
  CB_RMHAS,
  CB_LMHAS,

  CB_RMSCZ,
  CB_LMSCZ,
  CB_RMHCZ,
  CB_LMHCZ,
  CB_RMSAZ,
  CB_LMSAZ,
  CB_RMHAZ,
  CB_LMHAZ,

  CB_RMSCA,
  CB_LMSCA,
  CB_RMHCA,
  CB_LMHCA,

  CB_RMSMEH,
  CB_LMSMEH,
  CB_RMHMEH,
  CB_LMHMEH,

  CB_LMMV,
  CB_LMNM,

  CB_BSP,
  CB_DEL,
  CB_ENT,
  CB_TAB,

  COMBO_LENGTH,
};
uint16_t COMBO_LEN = COMBO_LENGTH;


#define ZP_RM_LCTL KC_J
#define ZP_RM_LSFT KC_K
#define ZP_RM_LSYM KC_I
#define ZP_RM_LALT KC_L
#define ZP_RM_SUPR ZP_UNDS
#define ZP_RM_HYPR KC_SLSH
#define ZP_LM_LCTL KC_F
#define ZP_LM_LSFT KC_D
#define ZP_LM_RSYM KC_E
#define ZP_LM_LALT KC_S
#define ZP_LM_SUPR KC_A
#define ZP_LM_HYPR KC_Z

#define ZP_LM_MOVE KC_V
#define ZP_LM_NUMB KC_C

#define ZP_RM_BSP KC_M
#define ZP_RM_DEL KC_COMM
#define ZP_RM_ENT KC_O
#define ZP_RM_TAB KC_U


const uint16_t PROGMEM cb_rmct_combo[] = {ZP_SYRT, ZP_RM_LCTL, COMBO_END};
const uint16_t PROGMEM cb_lmct_combo[] = {ZP_SYSF, ZP_LM_LCTL, COMBO_END};
const uint16_t PROGMEM cb_rmsf_combo[] = {ZP_SYRT, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmsf_combo[] = {ZP_SYSF, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmsy_combo[] = {ZP_SYRT, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmsy_combo[] = {ZP_SYSF, ZP_LM_RSYM, COMBO_END};
const uint16_t PROGMEM cb_rmat_combo[] = {ZP_SYRT, ZP_RM_LALT, COMBO_END};
const uint16_t PROGMEM cb_lmat_combo[] = {ZP_SYSF, ZP_LM_LALT, COMBO_END};
const uint16_t PROGMEM cb_rmsp_combo[] = {ZP_SYRT, ZP_RM_SUPR, COMBO_END};
const uint16_t PROGMEM cb_lmsp_combo[] = {ZP_SYSF, ZP_LM_SUPR, COMBO_END};
const uint16_t PROGMEM cb_rmhp_combo[] = {ZP_SYRT, ZP_RM_HYPR, COMBO_END};
const uint16_t PROGMEM cb_lmhp_combo[] = {ZP_SYSF, ZP_LM_HYPR, COMBO_END};

const uint16_t PROGMEM cb_rmsc_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LCTL, COMBO_END};
const uint16_t PROGMEM cb_lmsc_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LCTL, COMBO_END};
const uint16_t PROGMEM cb_rmhc_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LCTL, COMBO_END};
const uint16_t PROGMEM cb_lmhc_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LCTL, COMBO_END};

const uint16_t PROGMEM cb_rmcs_combo[] = {ZP_SYRT, ZP_RM_LCTL, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmcs_combo[] = {ZP_SYSF, ZP_LM_LCTL, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmas_combo[] = {ZP_SYRT, ZP_RM_LALT, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmas_combo[] = {ZP_SYSF, ZP_LM_LALT, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmss_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmss_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmhs_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmhs_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LSFT, COMBO_END};

const uint16_t PROGMEM cb_rmcz_combo[] = {ZP_SYRT, ZP_RM_LCTL, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmcz_combo[] = {ZP_SYSF, ZP_LM_LCTL, ZP_LM_RSYM, COMBO_END};
const uint16_t PROGMEM cb_rmaz_combo[] = {ZP_SYRT, ZP_RM_LALT, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmaz_combo[] = {ZP_SYSF, ZP_LM_LALT, ZP_LM_RSYM, COMBO_END};
const uint16_t PROGMEM cb_rmsz_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmsz_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_RSYM, COMBO_END};
const uint16_t PROGMEM cb_rmhz_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmhz_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_RSYM, COMBO_END};

const uint16_t PROGMEM cb_rmca_combo[] = {ZP_SYRT, ZP_RM_LCTL, ZP_RM_LALT, COMBO_END};
const uint16_t PROGMEM cb_lmca_combo[] = {ZP_SYSF, ZP_LM_LCTL, ZP_LM_LALT, COMBO_END};
const uint16_t PROGMEM cb_rmsa_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LALT, COMBO_END};
const uint16_t PROGMEM cb_lmsa_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LALT, COMBO_END};
const uint16_t PROGMEM cb_rmha_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LALT, COMBO_END};
const uint16_t PROGMEM cb_lmha_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LALT, COMBO_END};

const uint16_t PROGMEM cb_rmmeh_combo[] = {ZP_SYRT, ZP_RM_LCTL, ZP_RM_LALT, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmmeh_combo[] = {ZP_SYSF, ZP_LM_LCTL, ZP_LM_LALT, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmcaz_combo[] = {ZP_SYRT, ZP_RM_LCTL, ZP_RM_LALT, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmcaz_combo[] = {ZP_SYSF, ZP_LM_LCTL, ZP_LM_LALT, ZP_LM_RSYM, COMBO_END};

const uint16_t PROGMEM cb_rmscs_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LCTL, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmscs_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LCTL, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmhcs_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LCTL, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmhcs_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LCTL, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmsas_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LALT, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmsas_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LALT, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmhas_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LALT, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmhas_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LALT, ZP_LM_LSFT, COMBO_END};

const uint16_t PROGMEM cb_rmscz_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LCTL, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmscz_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LCTL, ZP_LM_RSYM, COMBO_END};
const uint16_t PROGMEM cb_rmhcz_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LCTL, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmhcz_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LCTL, ZP_LM_RSYM, COMBO_END};
const uint16_t PROGMEM cb_rmsaz_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LALT, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmsaz_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LALT, ZP_LM_RSYM, COMBO_END};
const uint16_t PROGMEM cb_rmhaz_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LALT, ZP_RM_LSYM, COMBO_END};
const uint16_t PROGMEM cb_lmhaz_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LALT, ZP_LM_RSYM, COMBO_END};

const uint16_t PROGMEM cb_rmsca_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LCTL, ZP_RM_LALT, COMBO_END};
const uint16_t PROGMEM cb_lmsca_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LCTL, ZP_LM_LALT, COMBO_END};
const uint16_t PROGMEM cb_rmhca_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LCTL, ZP_RM_LALT, COMBO_END};
const uint16_t PROGMEM cb_lmhca_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LCTL, ZP_LM_LALT, COMBO_END};

const uint16_t PROGMEM cb_rmsmeh_combo[] = {ZP_SYRT, ZP_RM_SUPR, ZP_RM_LCTL, ZP_RM_LALT, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmsmeh_combo[] = {ZP_SYSF, ZP_LM_SUPR, ZP_LM_LCTL, ZP_LM_LALT, ZP_LM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_rmhmeh_combo[] = {ZP_SYRT, ZP_RM_HYPR, ZP_RM_LCTL, ZP_RM_LALT, ZP_RM_LSFT, COMBO_END};
const uint16_t PROGMEM cb_lmhmeh_combo[] = {ZP_SYSF, ZP_LM_HYPR, ZP_LM_LCTL, ZP_LM_LALT, ZP_LM_LSFT, COMBO_END};

const uint16_t PROGMEM cb_lmmv_combo[] = {ZP_SYSF, ZP_LM_MOVE, COMBO_END};
const uint16_t PROGMEM cb_lmnm_combo[] = {ZP_SYSF, ZP_LM_NUMB, COMBO_END};

const uint16_t PROGMEM cb_bsp_combo[] = {ZP_SYRT, ZP_RM_BSP, COMBO_END};
const uint16_t PROGMEM cb_del_combo[] = {ZP_SYRT, ZP_RM_DEL, COMBO_END};
const uint16_t PROGMEM cb_ent_combo[] = {ZP_SYRT, ZP_RM_ENT, COMBO_END};
const uint16_t PROGMEM cb_tab_combo[] = {ZP_SYRT, ZP_RM_TAB, COMBO_END};

combo_t key_combos[] = {
  [CB_RMCT] = COMBO_ACTION(cb_rmct_combo),
  [CB_LMCT] = COMBO_ACTION(cb_lmct_combo),
  [CB_RMSF] = COMBO_ACTION(cb_rmsf_combo),
  [CB_LMSF] = COMBO_ACTION(cb_lmsf_combo),
  [CB_RMSY] = COMBO_ACTION(cb_rmsy_combo),
  [CB_LMSY] = COMBO_ACTION(cb_lmsy_combo),
  [CB_RMAT] = COMBO_ACTION(cb_rmat_combo),
  [CB_LMAT] = COMBO_ACTION(cb_lmat_combo),
  [CB_RMSP] = COMBO_ACTION(cb_rmsp_combo),
  [CB_LMSP] = COMBO_ACTION(cb_lmsp_combo),
  [CB_RMHP] = COMBO_ACTION(cb_rmhp_combo),
  [CB_LMHP] = COMBO_ACTION(cb_lmhp_combo),

  [CB_RMSC] = COMBO_ACTION(cb_rmsc_combo),
  [CB_LMSC] = COMBO_ACTION(cb_lmsc_combo),
  [CB_RMHC] = COMBO_ACTION(cb_rmhc_combo),
  [CB_LMHC] = COMBO_ACTION(cb_lmhc_combo),

  [CB_RMCS] = COMBO_ACTION(cb_rmcs_combo),
  [CB_LMCS] = COMBO_ACTION(cb_lmcs_combo),
  [CB_RMAS] = COMBO_ACTION(cb_rmas_combo),
  [CB_LMAS] = COMBO_ACTION(cb_lmas_combo),
  [CB_RMSS] = COMBO_ACTION(cb_rmss_combo),
  [CB_LMSS] = COMBO_ACTION(cb_lmss_combo),
  [CB_RMHS] = COMBO_ACTION(cb_rmhs_combo),
  [CB_LMHS] = COMBO_ACTION(cb_lmhs_combo),

  [CB_RMCZ] = COMBO_ACTION(cb_rmcz_combo),
  [CB_LMCZ] = COMBO_ACTION(cb_lmcz_combo),
  [CB_RMAZ] = COMBO_ACTION(cb_rmaz_combo),
  [CB_LMAZ] = COMBO_ACTION(cb_lmaz_combo),
  [CB_RMSZ] = COMBO_ACTION(cb_rmsz_combo),
  [CB_LMSZ] = COMBO_ACTION(cb_lmsz_combo),
  [CB_RMHZ] = COMBO_ACTION(cb_rmhz_combo),
  [CB_LMHZ] = COMBO_ACTION(cb_lmhz_combo),

  [CB_RMCA] = COMBO_ACTION(cb_rmca_combo),
  [CB_LMCA] = COMBO_ACTION(cb_lmca_combo),
  [CB_RMSA] = COMBO_ACTION(cb_rmsa_combo),
  [CB_LMSA] = COMBO_ACTION(cb_lmsa_combo),
  [CB_RMHA] = COMBO_ACTION(cb_rmha_combo),
  [CB_LMHA] = COMBO_ACTION(cb_lmha_combo),

  [CB_RMMEH] = COMBO_ACTION(cb_rmmeh_combo),
  [CB_LMMEH] = COMBO_ACTION(cb_lmmeh_combo),
  [CB_RMCAZ] = COMBO_ACTION(cb_rmcaz_combo),
  [CB_LMCAZ] = COMBO_ACTION(cb_lmcaz_combo),

  [CB_RMSCS] = COMBO_ACTION(cb_rmscs_combo),
  [CB_LMSCS] = COMBO_ACTION(cb_lmscs_combo),
  [CB_RMHCS] = COMBO_ACTION(cb_rmhcs_combo),
  [CB_LMHCS] = COMBO_ACTION(cb_lmhcs_combo),
  [CB_RMSAS] = COMBO_ACTION(cb_rmsas_combo),
  [CB_LMSAS] = COMBO_ACTION(cb_lmsas_combo),
  [CB_RMHAS] = COMBO_ACTION(cb_rmhas_combo),
  [CB_LMHAS] = COMBO_ACTION(cb_lmhas_combo),

  [CB_RMSCZ] = COMBO_ACTION(cb_rmscz_combo),
  [CB_LMSCZ] = COMBO_ACTION(cb_lmscz_combo),
  [CB_RMHCZ] = COMBO_ACTION(cb_rmhcz_combo),
  [CB_LMHCZ] = COMBO_ACTION(cb_lmhcz_combo),
  [CB_RMSAZ] = COMBO_ACTION(cb_rmsaz_combo),
  [CB_LMSAZ] = COMBO_ACTION(cb_lmsaz_combo),
  [CB_RMHAZ] = COMBO_ACTION(cb_rmhaz_combo),
  [CB_LMHAZ] = COMBO_ACTION(cb_lmhaz_combo),

  [CB_RMSCA] = COMBO_ACTION(cb_rmsca_combo),
  [CB_LMSCA] = COMBO_ACTION(cb_lmsca_combo),
  [CB_RMHCA] = COMBO_ACTION(cb_rmhca_combo),
  [CB_LMHCA] = COMBO_ACTION(cb_lmhca_combo),

  [CB_RMSMEH] = COMBO_ACTION(cb_rmsmeh_combo),
  [CB_LMSMEH] = COMBO_ACTION(cb_lmsmeh_combo),
  [CB_RMHMEH] = COMBO_ACTION(cb_rmhmeh_combo),
  [CB_LMHMEH] = COMBO_ACTION(cb_lmhmeh_combo),

  [CB_LMMV] = COMBO_ACTION(cb_lmmv_combo),
  [CB_LMNM] = COMBO_ACTION(cb_lmnm_combo),

  [CB_BSP] = COMBO_ACTION(cb_bsp_combo),
  [CB_DEL] = COMBO_ACTION(cb_del_combo),
  [CB_ENT] = COMBO_ACTION(cb_ent_combo),
  [CB_TAB] = COMBO_ACTION(cb_tab_combo),
};

/* uint8_t RMOD_IDLE = 0; */

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
  case CB_RMCT:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LCTL);
    }
    break;
  case CB_LMCT:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LCTL);
    }
    break;
  case CB_RMSF:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMSF:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LSFT);
    }
    break;
  case CB_RMSY:
    if (pressed) {
      layer_on(RMOD);
      layer_on(LSYM);
    }
    break;
  case CB_LMSY:
    if (pressed) {
      layer_on(LMOD);
      layer_on(RSYM);
    }
    break;
  case CB_RMAT:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LALT);
    }
    break;
  case CB_LMAT:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LALT);
    }
    break;
  case CB_RMSP:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
    }
    break;
  case CB_LMSP:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
    }
    break;
  case CB_RMHP:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
    }
    break;
  case CB_LMHP:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
    }
    break;

  case CB_RMSC:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
    }
    break;
  case CB_LMSC:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
    }
    break;
  case CB_RMHC:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
    }
    break;
  case CB_LMHC:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
    }
    break;

  case CB_RMCS:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LCTL);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMCS:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LCTL);
      register_code(KC_LSFT);
    }
    break;
  case CB_RMAS:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMAS:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_RMSS:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMSS:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LSFT);
    }
    break;
  case CB_RMHS:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMHS:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LSFT);
    }
    break;

  case CB_RMCZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LCTL);
      layer_on(LSYM);
    }
    break;
  case CB_LMCZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LCTL);
      layer_on(RSYM);
    }
    break;
  case CB_RMAZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LALT);
      layer_on(LSYM);
    }
    break;
  case CB_LMAZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LALT);
      layer_on(RSYM);
    }
    break;
  case CB_RMSZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      layer_on(LSYM);
    }
    break;
  case CB_LMSZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      layer_on(RSYM);
    }
    break;
  case CB_RMHZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      layer_on(LSYM);
    }
    break;
  case CB_LMHZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      layer_on(RSYM);
    }
    break;

  case CB_RMCA:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LCTL);
      register_code(KC_LALT);
    }
    break;
  case CB_LMCA:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LCTL);
      register_code(KC_LALT);
    }
    break;
  case CB_RMSA:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LALT);
    }
    break;
  case CB_LMSA:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LALT);
    }
    break;
  case CB_RMHA:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LALT);
    }
    break;
  case CB_LMHA:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LALT);
    }
    break;

  case CB_RMMEH:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LCTL);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMMEH:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LCTL);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;

  case CB_RMCAZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(KC_LCTL);
      register_code(KC_LALT);
      layer_on(LSYM);
    }
    break;
  case CB_LMCAZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(KC_LCTL);
      register_code(KC_LALT);
      layer_on(RSYM);
    }
    break;

  case CB_RMSCS:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMSCS:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
      register_code(KC_LSFT);
    }
    break;
  case CB_RMHCS:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMHCS:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
      register_code(KC_LSFT);
    }
    break;
  case CB_RMSAS:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMSAS:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_RMHAS:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMHAS:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;

  case CB_RMSCZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
      layer_on(LSYM);
    }
    break;
  case CB_LMSCZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
      layer_on(RSYM);
    }
    break;
  case CB_RMHCZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
      layer_on(LSYM);
    }
    break;
  case CB_LMHCZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
      layer_on(LSYM);
    }
    break;
  case CB_RMSAZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LALT);
      layer_on(LSYM);
    }
    break;
  case CB_LMSAZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LALT);
      layer_on(LSYM);
    }
    break;
  case CB_RMHAZ:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LALT);
      layer_on(LSYM);
    }
    break;
  case CB_LMHAZ:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LALT);
      layer_on(LSYM);
    }
    break;

  case CB_RMSCA:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
      register_code(KC_LALT);
    }
    break;
  case CB_LMSCA:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
      register_code(KC_LALT);
    }
    break;
  case CB_RMHCA:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
      register_code(KC_LALT);
    }
    break;
  case CB_LMHCA:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
      register_code(KC_LALT);
    }
    break;

  case CB_RMSMEH:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMSMEH:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_SUPR);
      register_code(KC_LCTL);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_RMHMEH:
    if (pressed) {
      layer_on(RMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;
  case CB_LMHMEH:
    if (pressed) {
      layer_on(LMOD);
      register_code(ZP_HYPR);
      register_code(KC_LCTL);
      register_code(KC_LALT);
      register_code(KC_LSFT);
    }
    break;

  case CB_LMMV:
    if (pressed) {
      layer_on(LMOD);
      layer_on(MOVE);
    }
    break;
  case CB_LMNM:
    if (pressed) {
      layer_on(LMOD);
      layer_on(NUMB);
    }
    break;

  case CB_BSP:
    if (pressed) {
      register_code(KC_BSPC);
    }
    break;
  case CB_DEL:
    if (pressed) {
      register_code(KC_DEL);
    }
    break;
  case CB_ENT:
    if (pressed) {
      register_code(KC_ENT);
    }
    break;
  case CB_TAB:
    if (pressed) {
      register_code(KC_TAB);
    }
    break;
  }
}

bool process_combo_key_release(uint16_t combo_index, combo_t *combo, uint8_t key_index, uint16_t keycode) {
  switch (combo_index) {
  case CB_RMCT:
    switch(keycode) {
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMCT:
    switch(keycode) {
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMSF:
    switch(keycode) {
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSF:
    switch(keycode) {
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMSY:
    switch(keycode) {
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSY:
    switch(keycode) {
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMAT:
    switch(keycode) {
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMAT:
    switch(keycode) {
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMSP:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSP:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHP:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHP:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMSC:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSC:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHC:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHC:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMCS:
    switch(keycode) {
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMCS:
    switch(keycode) {
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMAS:
    switch(keycode) {
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMAS:
    switch(keycode) {
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMSS:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSS:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHS:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHS:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMCZ:
    switch(keycode) {
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMCZ:
    switch(keycode) {
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMAZ:
    switch(keycode) {
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMAZ:
    switch(keycode) {
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMSZ:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSZ:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHZ:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHZ:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMCA:
    switch(keycode) {
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMCA:
    switch(keycode) {
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMSA:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSA:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHA:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHA:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMMEH:
    switch(keycode) {
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMMEH:
    switch(keycode) {
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMCAZ:
    switch(keycode) {
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMCAZ:
    switch(keycode) {
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMSCS:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSCS:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHCS:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHCS:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMSAS:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSAS:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHAS:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHAS:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMSCZ:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSCZ:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHCZ:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHCZ:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMSAZ:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSAZ:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHAZ:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSYM:
      layer_off(LSYM);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHAZ:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_RSYM:
      layer_off(RSYM);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMSCA:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSCA:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHCA:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHCA:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_RMSMEH:
    switch(keycode) {
    case ZP_RM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMSMEH:
    switch(keycode) {
    case ZP_LM_SUPR:
      unregister_code(ZP_SUPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_RMHMEH:
    switch(keycode) {
    case ZP_RM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_RM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_RM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_RM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_LMHMEH:
    switch(keycode) {
    case ZP_LM_HYPR:
      unregister_code(ZP_HYPR);
      break;
    case ZP_LM_LCTL:
      unregister_code(KC_LCTL);
      break;
    case ZP_LM_LALT:
      unregister_code(KC_LALT);
      break;
    case ZP_LM_LSFT:
      unregister_code(KC_LSFT);
      break;
    case ZP_SYSF:
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_LMMV:
    switch(keycode) {
      /* case ZP_LM_MOVE: */
      /*   layer_off(MOVE); */
      /*   break; */
    case ZP_SYSF:
      layer_off(MOVE);
      layer_off(LMOD);
      break;
    }
    return false;
  case CB_LMNM:
    switch(keycode) {
      /* case ZP_LM_MOVE: */
      /*   layer_off(MOVE); */
      /*   break; */
    case ZP_SYSF:
      layer_off(NUMB);
      layer_off(LMOD);
      break;
    }
    return false;

  case CB_BSP:
    switch(keycode) {
    case ZP_RM_BSP:
      unregister_code(KC_BSPC);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_DEL:
    switch(keycode) {
    case ZP_RM_DEL:
      unregister_code(KC_DEL);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_ENT:
    switch(keycode) {
    case ZP_RM_ENT:
      unregister_code(KC_ENT);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  case CB_TAB:
    switch(keycode) {
    case ZP_RM_TAB:
      unregister_code(KC_TAB);
      break;
    case ZP_SYRT:
      layer_off(RMOD);
      break;
    }
    return false;
  }

  return false;
}
