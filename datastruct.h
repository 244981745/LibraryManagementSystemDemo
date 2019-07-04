/*************************************************
Copyright (C), 2019-2019, DREACYOU
File name: datastruct.h
Author:	DREACYOU
Version:	0.0.1.0
Date: 2019.7.4
Description: ͼ�����ϵͳ �������ݽṹ
Others: 
Function List: 

History: 

*************************************************/

#ifndef	_DATASTRUCT_H
#define	_DATASTRUCT_H

#define PWLEN	20
#define UNLEN	20

//user
typedef struct user
{
	int		userID;
	char	userName[UNLEN];
	char	passWord[PWLEN];
	int		userAge;
	int		userSexy;
	char	userPhoneNum[12];
	char	userType;
	int		userAttribute;		//��ʼΪ0������Ա���ͨ����1����ͨ����-1
}USER;

//bookinfo
typedef struct book
{
	char	bookISBN[20];
	char	bookName[40];
	char	bookWirter[20];
	char	bookPublisher[10];
	char	bookPubTime[10];
	int		bookPrice;
	int		bookAttribute;		//�ݲ�δ���Ϊ0�����ʱ��¼������ID 
}BOOKINFO;


#endif
