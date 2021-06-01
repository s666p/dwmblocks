/* macro for conveniently specifying path below */
#define PATH(name)                      "/home/punk/dev/dwmblocks/scripts/"name

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
        {"",            PATH("calendar.sh"),	30,		        1},

        {"",            PATH("battery.sh"),	30,		        2},

        {"",            PATH("cpu_temp.sh"),	1,		        3},
	
        {"",            PATH("volume.sh"),	1,    	                4},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
