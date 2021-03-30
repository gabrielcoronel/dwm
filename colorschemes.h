#define DECLARE_COLORSCHEME(name) static const char* name[][3]

DECLARE_COLORSCHEME(black_and_white) = {
  [SchemeNorm] = { "#ffffff", "#000000", "#000000" },
  [SchemeSel]  = { "#000000", "#ffffff", "#ffffff" },
};
