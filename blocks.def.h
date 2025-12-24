// colours with status2d https://dwm.suckless.org/patches/status2d/

#define SCRIPT(s) "~/.dotfiles/bin/" s

static char volume_cmd[] = SCRIPT("dwmb_volume.sh");
static char wifi_cmd[] = SCRIPT("dwmb_wifi.sh");
static char cpu_usage_cmd[] = SCRIPT("dwmb_cpu_usage.sh");
static char cpu_load_cmd[] = SCRIPT("dwmb_cpu_load.sh");
static char memory_cmd[] = SCRIPT("dwmb_memory.sh");
static char battery_cmd[] = SCRIPT("dwmb_battery.sh");
static char date_cmd[] = "date '+%a %b %d %H:%M '";

// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /* Icon */  /* Command */	/* Update Interval */	/* Update Signal */
    { "",       volume_cmd,     1,		        1 }, // update signal used in dwmb_change_volume.sh
    { "",       wifi_cmd,       1,		        0 },
    { "",       cpu_usage_cmd,  1,		        0 },
    { "",       cpu_load_cmd,   1,		        0 },
    { "",       memory_cmd,     1, 		        0 },
    // { "",       battery_cmd,    1,		        0 },
    { "",       date_cmd,       30,		        0 },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
