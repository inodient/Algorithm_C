#include "ArrayStack.h"

void AS_CreateStack( ArrayStack** Stack, int Capacity ){
	(*Stack) = (ArrayStack*)malloc( sizeof( ArrayStack ) );

	(*Stack)->Capacity = Capacity;
	(*Stack)->Top = 0;
	(*Stack)->Nodes = (Node*)malloc( sizeof( Node ) * Capacity );
}

void AS_DestroyStack( ArrayStack* _Stack ){
	free( _Stack->Nodes );
	free( _Stack );
}

void AS_Push( ArrayStack* Stack, ElementType NewData ){
	int Position = Stack->Top;

	Stack->Nodes[Position].Data = NewData;
	Stack->Top++;
}

ElementType AS_Pop( ArrayStack* Stack ){
	int Position = --(Stack->Top);

	return Stack->Nodes[Position].Data;
}

ElementType AS_Top( ArrayStack* Stack ){
	int Position = Stack->Top - 1;

	return Stack->Nodes[Position].Data;
}

int AS_GetSize( ArrayStack* Stack ){
	return Stack->Top;
}

int AS_IsEmpty( ArrayStack* Stack ){
	return ( Stack->Top == 0 );
}
