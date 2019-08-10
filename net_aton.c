#include <func.h>
//将点分十进制的ip地址转化成网络字节序的形式
int main(int argc,char **argv)
{
	args_check(argc,2);
	int ret;
	struct in_addr addr;
	ret=inet_aton(argv[1],&addr);
	printf("aton():%x\n",addr.s_addr);//转化成网络字节序形式
	printf("inet%x\n",inet_addr(argv[1]));//转化回点分十进制形式
	
	return 0;
}
