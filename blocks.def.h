//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
  /* {" 🐧 ", "~/dwmblocks/scripts/kernel",		  43200,		        2}, */
	{" 🔺 ", "~/dwmblocks/scripts/upt",	60, 2},
	{" 📦 ", "~/dwmblocks/scripts/pacupdate", 300, 9},
	{" 💻 ", "~/dwmblocks/scripts/memory", 6, 1},
	{" ",    "~/dwmblocks/scripts/cpu", 10, 18},
	{" ",    "netspeed", 1, 1},
	{" ",    "~/dwmblocks/scripts/internet", 5,	4},
	{" ",    "~/dwmblocks/scripts/battery",	10,	3},
	{" 🔊 ", "~/dwmblocks/scripts/volume", 0, 10},
	{" 🕑 ", "~/dwmblocks/scripts/clock", 60, 0},
	/* {" ",    "~/dwmblocks/scripts/trayer-padding-icon", 3, 11}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
