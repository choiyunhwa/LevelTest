#include <iostream>
#define SIZE 5

char stack[SIZE];
int top = -1;

//push : 데이터 삽입
//pop : 데이터 제거
//print:
//isFull: 스택이 포화상태인지 검사
//isEmpty : 스택 원소 출력
int isFull()
{
	if (top >= SIZE - 1)
	{
		std::cout << "Stack is FULL" << std::endl;
	}
	return 0;
}
int isEmpty()
{
	if (top == -1)
	{
		std::cout << "Stack is EMPTY" << std::endl;
		return 1;
	}
	return 0;
}

void push(char data)
{
	if (!isFull())
	{
		top++;
		stack[top] = data;
	}
}

char pop()
{
	if (!isEmpty())
	{
		char temp = stack[top];
		top--;
		return temp;
	}
}
void print()
{
	if (!isEmpty())
	{
		for (int i = 0; i <= top; i++)
		{
			std::cout << stack[i] << std::endl;
		}
	}
}

int main()
{
	push('A');
	push('B');
	push('C');
	print();
	pop();
	push('D');
	push('E');
	push('F');
	push('G');
	print();
	pop();
	pop();

}
