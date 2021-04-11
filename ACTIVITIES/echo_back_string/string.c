#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define __NR_testcall 400

int main()
{
	int ret;
	char* a;
	a = (char*) malloc(100 * sizeof(char));
	ret = syscall(__NR_testcall,"Echo Back The Given String!",a);
	if(ret < 0)
		perror("testcall");
	printf("%s=",a);
	free(a);
	return 0;
}
