#pragma once

struct CSocketProtocol
{
	/*
	1、创建socket连接
	2、发送数据
	3、接收数据
	4、关闭socket连接
	*/
	//函数指针作为结构体成员
	int(*CreateSocket)(void * handle);
	int(*SendMessage)(void * handle, char * buf, int len);
	int(*RecvMessage)(void * handle, char * buf, int len);
	int(*CloseSocket)(void * handle);
};

//函数的声明
//抽象通信接口声明
void InitCSocketProtocol(struct CSocketProtocol *csp,
	int(*CreateSocket)(void * handle),
	int(*SendMessage)(void * handle, char * buf, int len),
	int(*RecvMessage)(void * handle, char * buf, int len),
	int(*CloseSocket)(void * handle));
//函数的声明
//框架接口声明
void FrameWork(struct CSocketProtocol *csp);