#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//printf("�������\n");
	// �ַ���

	char arr1[] = "abc";  //����
	char arr2[] = { 'a', 'b', 'c' };
	//�ַ����Ľ�����־ "\0"
	char arr3[] = { 'a', 'b', 'c', 0 }; 
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n", arr3);

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//ת���ַ�
	printf("abcn");
	printf("abc\n");  //����
	printf("C:\\Users\\�Խ���\\Desktop\\�������\\ͼƬ\n");
	// \t - ˮƽ�Ʊ��
	
  	printf("����");

	return 0;
}
