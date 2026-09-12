// my dwm build uses https://dwm.suckless.org/patches/extrabar/
// ';' splits the bar into: top, bottom left and bottom right

static const Block blocks[] = {
    /* icon  command                    interval (s)  update signal  */
    // { "",    "dwmblocks-wifi",          5,            0 },

    { "",    "echo ';'",                0,            0 },
    { "",    "echo ';'",                0,            0 },

    { "",    "dwmblocks-vol",           5,            1 },

    { "",    "dwmblocks-cpu",           1,            0 },
    { "",    "dwmblocks-temp",          1,            0 },
    { "",    "dwmblocks-mem",           1,            0 },
    // { "",    "dwmblocks-disk",          300,          0 },

    { "",    "dwmblocks-bat",           300,          2 },
    { "",    "date '+%a %b %d %H:%M'",  5,            0 },
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 2;
