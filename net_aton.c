#include <func.h>

int main(int argc,char **argv)
{
	args_check(argc,2);
	int ret;
	struct in_addr addr;
	ret=inet_aton(argv[1],&addr);
	printf("aton():%x\n",addr.s_addr);
	printf("inet%x\n",inet_addr(argv[1]));
	
	return 0;
}
