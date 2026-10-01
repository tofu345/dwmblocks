static const Block blocks[] = {
    /* icon  command                    interval (s)  update signal  */
    // { "",    "sb-wifi",          5,            0 },

    { "",    "sb-vol",           5,            1 },

    { "",    "sb-cpu",           1,            0 },
    { "",    "sb-temp",          1,            0 },
    { "",    "sb-mem",           1,            0 },
    // { "",    "sb-disk",          300,          0 },

    { "",    "sb-bat",           300,          2 },
    { "",    "date '+%a %b %d %H:%M'",  5,            0 },
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 2;
