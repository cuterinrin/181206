	typedef	struct link{ //typedef����ؼ� �� �͵��� �� �ܾ�� ��ü ���� 
		
		int data;
		
		void *next;//�߿� 
		//or struct link *next; - �ڱ��ڽ� ����Ű�� 
	} link_ty;
	
	static link_ty *list; 
	/*linked list ��ü ����, typedef ����߱� ������ struct ��� ���ص� �ȴ�. 
	static �������� ���������� �� ���� �������� ����� �� �ִ�. 
	extern �������� ����, �ٸ� ���Ͽ��� �������� �������� ����*/
	
	
	
