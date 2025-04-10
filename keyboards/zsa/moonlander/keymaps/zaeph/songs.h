#define ZP_BEEP \
    Q__NOTE(_C6)

#define ZP_VICTORY_FANFARE \
    Q__NOTE(_C6),  \
    Q__NOTE(_C6),  \
    Q__NOTE(_C6),  \
    W__NOTE(_C6),  \
    W__NOTE(_GS5), \
    W__NOTE(_AS5), \
    HD_NOTE(_C6),  \
    Q__NOTE(_AS5), \
    B__NOTE(_C6),  \

#define ZP_RICK_ROLL \
    Q__NOTE(_F4),    \
    Q__NOTE(_G4),    \
    Q__NOTE(_BF4),   \
    Q__NOTE(_G4),    \
    HD_NOTE(_D5),    \
    HD_NOTE(_D5),    \
    WD_NOTE(_C5),    \
    Q__NOTE(_F4),    \
    Q__NOTE(_G4),    \
    Q__NOTE(_BF4),   \
    Q__NOTE(_G4),    \
    HD_NOTE(_C5),    \
    HD_NOTE(_C5),    \
    WD_NOTE(_BF4),   \
    Q__NOTE(_F4),    \
    Q__NOTE(_G4),    \
    Q__NOTE(_BF4),   \
    Q__NOTE(_G4),    \
    W__NOTE(_BF4),   \
    H__NOTE(_C5),    \
    H__NOTE(_A4),    \
    H__NOTE(_A4),    \
    H__NOTE(_G4),    \
    H__NOTE(_F4),    \
    H__NOTE(_F4),    \
    W__NOTE(_C5),    \
    W__NOTE(_BF4),

const uint8_t BUFFALO_TEMPO = 120;

#define ZP_BUFFALO_BIRTHDAY \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.125),      \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_DF6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_FS6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_B5, BUFFALO_TEMPO * 2), \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.125),      \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_DF6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_FS6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_E6, BUFFALO_TEMPO * 1.5), \
  M__NOTE(_DF6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_FS6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_FS6, BUFFALO_TEMPO * 0.50),     \
  M__NOTE(_FS6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.50),      \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_DF6, BUFFALO_TEMPO * 0.50),     \
  M__NOTE(_B5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_DF6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_B5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.50),      \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_B5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_DF6, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.50),      \
  M__NOTE(_E6, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_B5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_B5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_A5, BUFFALO_TEMPO * 0.25),      \
  M__NOTE(_AF5, BUFFALO_TEMPO * 0.25),     \
  M__NOTE(_A5, BUFFALO_TEMPO * 1.5),


#define ZP_BUFFALO_BIRTHDAY_OLD \
  HD_NOTE(_A4),      \
  Q__NOTE(_A4),      \
  H__NOTE(_A4),      \
  H__NOTE(_DF5),     \
  H__NOTE(_E5),      \
  H__NOTE(_E5),      \
  H__NOTE(_FS5),     \
  H__NOTE(_E5),      \
  M__NOTE(_B4, 256), \
  HD_NOTE(_A4),      \
  Q__NOTE(_A4),      \
  H__NOTE(_A4),      \
  H__NOTE(_DF5),     \
  H__NOTE(_E5),      \
  H__NOTE(_E5),      \
  H__NOTE(_FS5),     \
  H__NOTE(_E5),      \
  M__NOTE(_E5, 192), \
  H__NOTE(_DF5),     \
  H__NOTE(_E5),      \
  H__NOTE(_FS5),     \
  W__NOTE(_FS5),     \
  H__NOTE(_FS5),     \
  W__NOTE(_E5),      \
  H__NOTE(_E5),      \
  W__NOTE(_DF5),     \
  H__NOTE(_B4),      \
  H__NOTE(_DF5),     \
  H__NOTE(_B4),      \
  W__NOTE(_A4),      \
  H__NOTE(_A4),      \
  H__NOTE(_B4),      \
  H__NOTE(_DF5),     \
  W__NOTE(_E5),      \
  H__NOTE(_E5),      \
  H__NOTE(_B4),      \
  H__NOTE(_B4),      \
  H__NOTE(_A4),      \
  H__NOTE(_AF4),     \
  B__NOTE(_A4),
