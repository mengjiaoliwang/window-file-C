#include"�ҷ��ӿ�ʵ��.h"
#include <stdio.h>
int CreateSocketCSckImp1(void * handle)
{
	printf("����socket���ӳɹ�\n");
}
int SendMessageCSckImp1(void * handle, char * buf, int len)
{
	printf("�����������ݣ�%s", buf);
	printf("�������ݳ��ȣ�%d", len);
	printf("�������ݳɹ�\n");
}
int RecvMessageCSckImp1(void * handle, char * buf, int len)
{
	printf("�������ݳɹ�\n");
}
int CloseSocketCSckImp1(void * handle)
{
	printf("�ر�socket�ɹ�\n");
}
