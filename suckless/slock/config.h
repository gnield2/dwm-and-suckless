/* user and group to drop privileges to */
static const char *user  = "gabe";
static const char *group = "wheel";

/* image files can be used if absolute path is given */
static const char *colorname[NUMCOLS] = {
	[INIT] =   "#11111b",     /* after initialization */
	[INPUT] =  "/home/gabe/.wallpapers/dark-pixel-mountain.jpg",   /* during input */
	[FAILED] = "#D20F39",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Type password to unlock...";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
