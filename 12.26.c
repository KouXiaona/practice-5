/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
嫌疑犯的一个。以下为4个嫌疑犯的供词。
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。

思路：
      既然是三个人说了真话一个人说了假话，那么，他们四个人的逻辑值结果加起来等于三。
	  这个kill可能是四个人中的任何一个人，所以将四个人依次循环一遍
	  若哪一个人满足他们几个说的话这个条件，那么他应该是凶手。

	  下面，四个人说的话可以被表示为A:  kill!='A'
	                                B:  kill=='C'
									C:  kill=='D'
									D:  kill!='D'
*/
#include<stdio.h>
#include<windows.h>

int main()
{
	int kill = 0;
	for (kill = 'A'; kill <= 'D'; kill++){
		if (((kill != 'A') + (kill == 'C') + (kill == 'D') + (kill != 'D')) == 3){//0  0     b1 0 0 1    c 1 1 0 1     d1 0 1 0
			printf("killer = %c\n", kill);
		}
	}
	

	system("pause");
	return 0;
}
