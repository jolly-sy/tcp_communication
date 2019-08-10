#include <func.h>
int main()
{
	unsigned short port=0x1234,nport;
	nport=htons(port);
        printf("%x\n",port);
	printf("%x\n",*(char *)&nport);

	return 0;
}
