#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �����Ķ���ͳ�ʼ��
int main() {
	int a = 10; // ���岢��ʼ������a
	float b = 5.5; // ���岢��ʼ������b
	char c = 'A'; // ���岢��ʼ������c

	int d = 20, e = 30, f = 40; // ͬʱ��������������ʼ��
	// ���������ֵ
	printf("��������a��ֵ: %d\n", a);
	printf("�������b��ֵ: %.2f\n", b);
	printf("�ַ�����c��ֵ: %c\n", c);

	printf("�������������ֵ: d=%d, e=%d, f=%d\n", d, e, f);
	printf("����a���ϱ���d��ֵ: %d\n", a + d);
	
	//���
	//�յ���Ԫ���
	int money = 100;
	money = money + 2;
	printf("�յ���Ԫ��������Ϊ: %d\n", money);


	//��Ϸ��ɫѪ������
	int health = 100;
	//�ܵ�80���˺�
	health = health - 80;
	//�ظ�60��Ѫ��
	health = health + 60;
	printf("��ɫ��ǰѪ��Ϊ: %d\n", health);

	//������ֻ�ܴ洢һ��ֵ
	int score = 50;
	score = 80; // ԭ����ֵ50������
	printf("��ǰ����Ϊ: %d\n", score);

	
	
	return 0;
}