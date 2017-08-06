#include <stdio.h>
#include "boardmain.h"
void main()
{
	printf("hello,i am %s\n",__FILE__);
	printf("pi is  %f\n",PI);
	TpSevPrint();
	ClientPrint();
	wfscommprint();
	bspdriveprint();
}
