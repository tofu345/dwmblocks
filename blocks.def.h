static char volume_cmd[]	= "dwmb_volume.sh";
static char wifi_cmd[]		= "dwmb_wifi.sh";
static char cpu_usage_cmd[] = "dwmb_cpu_usage.sh";
static char cpu_load_cmd[]	= "dwmb_cpu_load.sh";
static char memory_cmd[]	= "dwmb_memory.sh";
static char battery_cmd[]	= "dwmb_battery.sh";
static char date_cmd[]		= "date '+%a %b %d %H:%M '";

static const Block blocks[] = {
    /* Icon		Command			Update (s)		Update Signal */
    { "",       volume_cmd,     1,		        1 },
    { "",       wifi_cmd,       5,		        0 },
    { "",       cpu_usage_cmd,  1,		        0 },
    { "",       cpu_load_cmd,   1,		        0 },
    { "",       memory_cmd,     1, 		        0 },
    { "",       battery_cmd,    120,		    2 },
    { "",       date_cmd,       1,		        0 },
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 3;
