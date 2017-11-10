#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"甲方接口定义.h"
#include"乙方接口实现.h"

void InitCSocketProtocol(struct CSocketProtocol *csp,
	int(*CreateSocket)(void * handle),
	int(*SendMessage)(void * handle, char * buf, int len),
	int(*RecvMessage)(void * handle, char * buf, int len),
	int(*CloseSocket)(void * handle))
{
	csp->CreateSocket = CreateSocket;
	csp->SendMessage = SendMessage;
	csp->RecvMessage = RecvMessage;
	csp->CloseSocket = CloseSocket;
}

void FrameWork(struct CSocketProtocol *csp)
{
	void * handle = NULL;
	csp->CreateSocket(handle);
	char buf[] = "hello world";

	csp->SendMessage(handle, buf, strlen(buf));
	char recvbuf[1024];
	csp->RecvMessage(handle, buf, 1024);
	csp->CloseSocket(handle);

}

int main()
{
	struct CSocketProtocol csp;
	InitCSocketProtocol(&csp, CreateSocketCSckImp1, SendMessageCSckImp1, RecvMessageCSckImp1, CloseSocketCSckImp1);

	FrameWork(&csp);

	return EXIT_SUCCESS;
}