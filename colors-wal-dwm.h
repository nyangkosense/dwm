static const char norm_fg[] = "#e8e3e3";
static const char norm_bg[] = "#1d1c21";
static const char norm_border[] = "#858279";

static const char sel_fg[] = "#e8e3e3";
static const char sel_bg[] = "#586452";
static const char sel_border[] = "#151515";

static const char urg_fg[] = "#bebaae";
static const char urg_bg[] = "#645859";
static const char urg_border[] = "#151515";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
