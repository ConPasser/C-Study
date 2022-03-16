#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//printf("你好世界\n");
	// 字符串

	char arr1[] = "abc";  //数组
	char arr2[] = { 'a', 'b', 'c' };
	//字符串的结束标志 "\0"
	char arr3[] = { 'a', 'b', 'c', 0 }; 
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n", arr3);

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//转义字符
	printf("abcn");
	printf("abc\n");  //换行
	printf("C:\\Users\\赵健养\\Desktop\\软件工程\\图片\n");
	// \t - 水平制表符
	
  	printf("你好世界，我爱你");

	return 0;
}
