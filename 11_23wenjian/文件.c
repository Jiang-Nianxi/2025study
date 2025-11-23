#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	//绝对路径：以盘符开始，如C:\a.txt
	//相对路径：相对于当前目录，如aaa\a.txt
	//c语言中路径以字符串形式表示

	//路径中的反斜杠\是转义字符，所以要表示一个反斜杠，需要使用两个反斜杠"\\"
	/*char* file = "D:\\desktop\\a.txt";
	printf("%s\n", file);*/




	//fopen函数用于打开一个文件，返回一个文件指针
	//1.打开文件
	/*FILE*file=fopen("D:\\桌面\\a.txt", "r");*/
	//fgetc一次读取一个字符//读不到返回-1
	/*int c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);*/

	//循环方法读取文件内容
	/*int c;
	while ((c = fgetc(file)) != -1){
		printf("%c", c);
	}*/



	//fgets一次读取一行字符    以换行符为结束标志
	//读不到返回NULL
	/*char arr[1024];*/
	/*char*str1=fgets(arr,1024,file);
	printf("%s\n", str1);
	char*str2=fgets(arr,1024,file);
	printf("%s\n", str2);
	char*str3=fgets(arr,1024,file);
	printf("%s\n", str3);*/
	
	/*char * str;
	while ((str=fgets(arr,1024,file))!=NULL)
	{
		printf("%s", str);
	}*/



	//fread一次读取多个字符
	// 数量可以自定义
	/*char arr[1024];*/
	/*int n = fread(arr, 1, 1024, file);
	printf("实际读取到的字符个数：%d\n", n);
	printf("%s\n", arr);*/


	//int n;
	//while ((n = fread(arr, 1, 10, file)) != 0){
	//	//注意：arr不是字符串，不能使用%s输出
	//	//需要手动添加字符串结束标志'\0'
	//	for (int i = 0; i < i<=n; i++)
	//	{
	//		printf("%c", arr[i]);
	//	}
	//}
	//fclose关闭文件
	//fclose(file);




	////改写文件
	////1.打开文件
	//FILE* file = fopen("D:\\桌面\\b.txt", "w");
	////2.写出文件
	////fputc一次写入一个字符
	////a---97
	//int c = fputc(97, file);
	//printf("%c\n", c);

	////fputs一次写入一个字符串
	////成功返回非负数
	//int n = fputs("你好你好", file);
	//printf("%d\n", n);

	////fwrite一次写入多个字符，返回写出的字节个数
	//char arr[] = {97,98,99,100,101};
	//int n2 = fwrite(arr, 1, 5, file);
	//printf("%d\n", n2);

	////3.关闭文件
	//fclose(file);



	//模式：r:只读  
	// w:只写(会覆盖原有文件)  
	// 1文件不存在会创建新文件
	// 2文件存在会清空原有文件内容
	// 3创建或者清空文件是fopen这个函数完成的
	// a:追加写(在文件末尾添加内容)
	// append追加模式
	//  1文件不存在会创建新文件
	// 2文件存在不会清空原有文件内容（续写模式）
	// 3创建或者清空文件是fopen这个函数完成的
	//1.打开文件
	//FILE* file = fopen("D:\\桌面\\a.txt", "a");
	////2.写出文件
	//// fputc一次一个字符,返回写出的字符
	//int c = fputc(97, file);
	//printf("%d\n", c);
	////fputs一次一个字符串
	//int n=fputs("你好你好", file);
	//printf("%d\n",n);
	////fwrite一次多个字符，返回写出的字节个数
	//char arr[] = { 97,98,99,100,101 };
	//int n2 = fwrite(arr, 1, 5, file);
	//printf("%d\n", n2);

	////3.关闭文件
	//fclose(file);



//练习：利用代码拷贝文件
	//1.打开源文件（数据源）
	//纯文本文件：r w a
	//txt md lrc
	//二进制文件：rb wb ab
	//b：binary二进制
	FILE* file1 = fopen("D:\\桌面\\a.wma", "rb");
	//2.打开目标文件（数据目的地）
	FILE* file2 = fopen("D:\\桌面\\aaa\\a_copy.wma", "wb");
	//3.读写文件
	char arr[1024];
	int n;
	while ((n = fread(arr, 1, 1024, file1)) > 0){
		fwrite(arr, 1, n, file2);
	}
	//4.关闭文件
	fclose(file1);
	fclose(file2);
	return 0;
}