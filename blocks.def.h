static const Block blocks[] = {
    /* icon     command                     update (s)  update signal */
    { " ",      "dwmblocks-vol",            5,          1 },
    { "",       "dwmblocks-cpu",            1,          0 },
    { "",       "dwmblocks-temp",           1,          0 },
    { "",       "dwmblocks-mem",            1,          0 },
    { "",       "dwmblocks-bat",            300,        2 },
    { "",       "date '+%a %b %d %H:%M '",  1,          0 },
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 3;
