/* ѧ�� �༶ ����*/
#pragma once

/* ����POP�Ͳ˵�����Ҫ�Ľṹ�� */
struct PopMenu {
	const char* title;	//����
	int start_x;	//���Ͻ�x����
	int start_y;	//���Ͻ�y����
	int width;		//�˵���ȣ��������ұ߿�+4����ʾ��ʵ����������������ż��
	int high;		//�˵��߶ȣ��������±߿�+2����ʾ��ʵ����������
	int bg_color;	//���ñ���ɫ��ע��ѡ����background/foregroundΪ���ԣ�
	int fg_color;	//����ǰ��ɫ
};

#define MAX_ITEM_LEN	80
int pop_menu(const char menu[][MAX_ITEM_LEN], const struct PopMenu* para);
