#ifndef __SQLITE_CGI_H__
#define __SQLITE_CGI_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data_global.h"
#include "sqlite3.h"

#define DEBUG_SQLITE 1

int getEnv (struct env_info_clien_addr *env_info_clien_addr_t, int storageNum_t);  //���������������
int getCollect_Current_env (int storage_num_t);
int getGoods (int storageNum_t, int goods_kinds_t);  //���ָ����Ż�����Ϣ
int getCurrentGoods (int storageNum_t);  //���ָ����Ż�����Ϣ
int viewGoods (int storageNum_t, int goodsKinds_t);  //�鿴�ֿ��Ƿ���ڴ������








#endif
	  
