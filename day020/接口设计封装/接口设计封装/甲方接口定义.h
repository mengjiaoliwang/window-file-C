#pragma once

struct CSocketProtocol
{
	/*
	1������socket����
	2����������
	3����������
	4���ر�socket����
	*/
	//����ָ����Ϊ�ṹ���Ա
	int(*CreateSocket)(void * handle);
	int(*SendMessage)(void * handle, char * buf, int len);
	int(*RecvMessage)(void * handle, char * buf, int len);
	int(*CloseSocket)(void * handle);
};

//����������
//����ͨ�Žӿ�����
void InitCSocketProtocol(struct CSocketProtocol *csp,
	int(*CreateSocket)(void * handle),
	int(*SendMessage)(void * handle, char * buf, int len),
	int(*RecvMessage)(void * handle, char * buf, int len),
	int(*CloseSocket)(void * handle));
//����������
//��ܽӿ�����
void FrameWork(struct CSocketProtocol *csp);