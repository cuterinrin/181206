	typedef	struct link{ //typedef사용해서 이 것들을 한 단어로 대체 가능 
		
		int data;
		
		void *next;//중요 
		//or struct link *next; - 자기자신 가리키기 
	} link_ty;
	
	static link_ty *list; 
	/*linked list 실체 선언, typedef 사용했기 때문에 struct 사용 안해도 된다. 
	static 전역변수 선언이지만 내 파일 내에서만 사용할 수 있다. 
	extern 전역변수 선언, 다른 파일에서 전역변수 가져오기 가능*/
	
	
	
