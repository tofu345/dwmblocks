static const Block blocks[] = {
    /* Icon		Command			            Update (s)		Update Signal */
    { " ",       "dwmb_volume",             1,		        1 },
    { "",       "dwmb_wifi",                1,		        0 },
    { "",       "dwmb_cpu_usage",           1,		        0 },
    { "",       "dwmb_cpu_load",            1,		        0 },
    { "",       "dwmb_memory",              1, 		        0 },
    { "",       "dwmb_battery",             120,		    2 },
    { "",       "date '+%a %b %d %H:%M '",  1,		        0 },
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 3;
