#include <func.h>
//小端模式存储转化为大端模式，因为网络传输中必须是大端模式
int main()
{
	unsigned short port=0x1234,nport;
	nport=htons(port);
        printf("%x\n",port);
	printf("%x\n",*(char *)&nport);

	return 0;
}
