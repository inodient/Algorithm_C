#include "CircularQueue.h"

void CQ_CreateQueue( CircularQueue** Queue, int Capacity ){
	*Queue = (CircularQueue*)malloc( sizeof( CircularQueue ) );
	(*Queue)->Capacity = Capacity;
	(*Queue)->Front = 0;
	(*Queue)->Rear = 0;
	(*Queue)->Nodes = (Node*)malloc( sizeof( Node ) * ( Capacity + 1 ) );
}

void CQ_DestroyQueue( CircularQueue* _Queue ){
	free( _Queue->Nodes );
	free( _Queue );
}

void CQ_Enqueue( CircularQueue* Queue, ElementType NewData ){
	int Position = 0;

	if( Queue->Rear == Queue->Capacity + 1 ){
		Queue->Rear = 0;
		Position = 0;
	} else{
		Position = Queue->Rear++;
	}

	Queue->Nodes[Position].Data = NewData;
}

ElementType CQ_Dequeue( CircularQueue* Queue ){
	int Position = Queue->Front;

	if( Queue->Front == Queue->Capacity ){
		Queue->Front = 0;
	} else{
		Queue->Front++;
	}

	return Queue->Nodes[Position].Data;
}

int CQ_GetSize( CircularQueue* Queue ){
	if( Queue->Front <= Queue->Rear ){
		return Queue->Rear - Queue->Front;
	} else{
		return Queue->Rear + ( Queue->Capacity - Queue->Front ) + 1;
	}
}

int CQ_IsEmpty( CircularQueue* Queue ){
	return ( Queue->Front == Queue->Rear );
}

int CQ_IsFull( CircularQueue* Queue ){
	if( Queue->Front < Queue->Rear ){
		return ( Queue->Rear - Queue->Front ) == Queue->Capacity;
	} else{
		return Queue->Rear + 1 == Queue->Front;
	}
}
