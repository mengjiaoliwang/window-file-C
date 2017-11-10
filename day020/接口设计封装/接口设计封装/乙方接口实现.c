#include"乙方接口实现.h"
#include <stdio.h>
int CreateSocketCSckImp1(void * handle)
{
	printf("创建socket连接成功\n");
}
int SendMessageCSckImp1(void * handle, char * buf, int len)
{
	printf("发送数据内容：%s", buf);
	printf("发送数据长度：%d", len);
	printf("发送数据成功\n");
}
int RecvMessageCSckImp1(void * handle, char * buf, int len)
{
	printf("接收数据成功\n");
}
int CloseSocketCSckImp1(void * handle)
{
	printf("关闭socket成功\n");
}
