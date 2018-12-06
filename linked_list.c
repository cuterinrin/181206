#include <stdio.h>
#include <stdlib.h>

	typedef	struct link{ //typedef사용해서 이 것들을 한 단어로 대체 가능 
		
		int data;
		
		void *next;//중요 
		//or struct link *next; - 자기자신 가리키기 
	} link_ty;
	
	static link_ty *list; 
	/*linked list 실체 선언, typedef 사용했기 때문에 struct 사용 안해도 된다. 
	static 전역변수 선언이지만 내 파일 내에서만 사용할 수 있다. 
	extern 전역변수 선언, 다른 파일에서 전역변수 가져오기 가능*/
	
	link_ty* create_node(int value)//노드 생성 함수, 포인터 선언 
	{
	link_ty* ndptr;
	//동적 메모리 할당 - 함수 맬록(구조체 크기)) 
	ndptr = (link_ty*)malloc( sizeof(link_ty) );//명시적 형변환, sizeof함수 = link_ty의 크기
	//오류 핸들링, 런타임 에러 방지 
	if (ndptr == NULL)
	{
		printf("error!\n");
		return NULL;
	 } 
	//정수값 저장 
	ndptr->data = value;
	ndptr->next = NULL; //중요 
	
	return ndptr;
	
	}
	
