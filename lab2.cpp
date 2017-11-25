#include <stdlib.h>
int main()
{
	system("sudo hdparm -I /dev/sda | grep -v \'Enable\\|Setup\' | grep -w \'Number\\|Firmware\\|PIO\\|DMA\\|Supported\'");
        system("sudo hdparm -I /dev/sda | grep -v \'1024\' |grep \'device size\'");

	return 0;
}
