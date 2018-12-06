#include <stdio.h>
#include <stdlib.h>

	typedef	struct link{ //typedef����ؼ� �� �͵��� �� �ܾ�� ��ü ���� 
		
		int data;
		
		void *next;//�߿� 
		//or struct link *next; - �ڱ��ڽ� ����Ű�� 
	} link_ty;
	
	static link_ty *list; 
	/*linked list ��ü ����, typedef ����߱� ������ struct ��� ���ص� �ȴ�. 
	static �������� ���������� �� ���� �������� ����� �� �ִ�. 
	extern �������� ����, �ٸ� ���Ͽ��� �������� �������� ����*/
	
	link_ty* create_node(int value)//��� ���� �Լ�, ������ ���� 
	{
	link_ty* ndptr;
	//���� �޸� �Ҵ� - �Լ� �ȷ�(����ü ũ��)) 
	ndptr = (link_ty*)malloc( sizeof(link_ty) );//����� ����ȯ, sizeof�Լ� = link_ty�� ũ��
	//���� �ڵ鸵, ��Ÿ�� ���� ���� 
	if (ndptr == NULL)
	{
		printf("error!\n");
		return NULL;
	 } 
	//������ ���� 
	ndptr->data = value;
	ndptr->next = NULL; //�߿� 
	
	return ndptr;
	
	}
	
