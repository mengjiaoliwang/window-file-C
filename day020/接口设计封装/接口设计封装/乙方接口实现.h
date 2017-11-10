#pragma once

/*
int(*CreateSocket)(void * handle);
int(*SendMessage)(void * handle, char * buf, int len);
int(*RecvMessage)(void * handle, char * buf, int len);
int(*CloseSocket)(void * handle);
*/
int CreateSocketCSckImp1(void * handle);
int SendMessageCSckImp1(void * handle, char * buf, int len);
int RecvMessageCSckImp1(void * handle, char * buf, int len);
int CloseSocketCSckImp1(void * handle);

