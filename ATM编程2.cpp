//ѧ��.����.�Ա�.Ժ(ϵ)/��.רҵ.�����༶.����.����.״̬.������.����ʱ��.�˻����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct ATM_ACCOUNT
{
	char xh[10],xm[20],xb[3],yxb[50],zy[30],xzbj[20],kh[20],mm[7],zt,khh[40];
	long khsj;
	float zhye;
}


Atm_account;
int max_account,cnt_account;//max_account---�˻������Ͻ�ֵ�� cnt_account-----��ǰ���˻��������� 
Atm_account *p_account;
void init(){
	// void init(���������� 1.�� init.txt �еĳ�ʼ������������max_account�ȣ�
	FILE *fp;
	int i;
	if((fp=fopen("data\\init.txt","r"))==NULL)
	{
		printf("��ʼ���ļ���ʧ�ܣ������˳���");return ;
	}
	
	fscanf(fp,"max_account=%d;",&max_account);
	printf("max_account=%d\n",max_account);
	fclose(fp);
	//2.��max_account��malloc������ʼ��p_account;
	p_account=(Atm_account *)malloc(max_account*sizeof(Atm_account));
	
	if(p_account==NULL)
	{
		printf("�ڴ����ʧ�ܣ������˳���");return ;
	}
	//3.��atm_account.dat�е��˻���Ϣ����p_account;fread
	
		if((fp=fopen("data\\atm_account.dat","rb"))==NULL)
	{
		printf("��ʼ���ļ���ʧ�ܣ������˳���");
		return ;
	}
	
	fread(	&cnt_account,sizeof(int),1,fp);//�ȶ��˻�������  
	printf("�˻�����Ϊ%d��\n",cnt_account);
	
	i=fread( p_account, sizeof(Atm_account), cnt_account, fp );//�ٶ�ÿ���˻�����Ϣ 
	printf("�Ѷ�ȡ%d���˻�����Ϣ��\n",i);
	fclose(fp);
	}
	
	
void dzhkh(){
	int i;
	//1.¼����Ϣ
	puts("ѧ��");gets(p_account[cnt_account].xh);
	puts("����");gets(p_account[cnt_account].xm);
	puts("�Ա�");gets(p_account[cnt_account].xb);
	puts("Ժ(ϵ)/��");gets(p_account[cnt_account].yxb);
	puts("רҵ");gets(p_account[cnt_account].zy);
	puts("�����༶");gets(p_account[cnt_account].xzbj);
	puts("����");gets(p_account[cnt_account].kh);
	puts("������");gets(p_account[cnt_account].khh);
	strcpy(p_account[cnt_account].mm,"000000");
	p_account[cnt_account].zt='0';
	p_account[cnt_account].khsj=time(0);
	cnt_account++;
	//2.���Ϸ���---ѧ���Լ����
	//3.����
	//�ļ�����ʵ��------�������ļ�

}
void ckzhxx(){//�鿴�˻���Ϣ
	char xh[10];
	int flag=0,i;
	puts("������ѧ�ţ�");
	gets(xh);
	
	for(i=0;i<cnt_account;i++){
		if(strcmp(xh,p_account[i].xh)==0){
			flag=1;break;
		}
	}
	if(flag==1){//�ҵ��ˣ���ʾ��
		printf("%s���˻���Ϣ���£�\n",xh);
		printf("%10s%10s%20s%20s\n",p_account[i].xh,p_account[i].xm,p_account[i].kh,p_account[i].xzbj);
	}
	else{//û�ҵ�
		printf("%s���˻���Ϣδ�ҵ���",xh);
	}
}
void save(){
	FILE *fp;
	int i;
	if((fp=fopen("data\\atm_account.dat","wb"))==NULL){
		printf("д�ļ���ʧ�ܣ�����ʧ�ܣ�\n");return;
	}
	// int fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
	fwrite(&cnt_account,sizeof(int),1,fp);//��д�˻��� 
	i=fwrite(p_account,sizeof(Atm_account),cnt_account,fp);//дÿ���˻�����Ϣ 
	if(i==0){
		printf("д�ļ�ʧ�ܣ�\n");
	}
	else
		printf("д�ļ��ɹ���\n");
	fclose(fp);	
}

int main(){

	init();
	dzhkh();
	ckzhxx();//�鿴�˻���Ϣ
	save(); 
	return 0;
}

