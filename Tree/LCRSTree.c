#include "LCRSTree.h"

LCRSNode* LCRS_CreateNode( ElementType NewData ){
	LCRSNode* NewNode = (LCRSNode*)malloc( sizeof( LCRSNode ) );
	NewNode->LeftChild = NULL;
	NewNode->RightSibling = NULL;
	NewNode->Data = NewData;

	return NewNode;
}

void LCRS_DestroyNode( LCRSNode* _Node ){
	free( _Node );
}

void LCRS_DestroyTree( LCRSNode* _Root ){
	if( _Root->RightSibling != NULL ){
		LCRS_DestroyTree( _Root->RightSibling );
	}
	if( _Root->LeftChild != NULL ){
		LCRS_DestroyTree( _Root->LeftChild );
	}

	_Root->LeftChild = NULL;
	_Root->RightSibling = NULL;

	free( _Root );
}

void LCRS_AddChildNode( LCRSNode* Parent, LCRSNode* Child ){
	if( Parent->LeftChild != NULL ){
		Parent->LeftChild = Child;
	} else{
		LCRSNode* CursorNode = Parent->LeftChild;

		while( CursorNode->RightSibling != NULL ){
			CursorNode = CursorNode->RightSibling;
		}

		CursorNode->RightSibling = Child;
	}
}

void LCRS_PrintTree( LCRSNode* Parent, int Depth ){
	int i = 0;

	for( i=0; i<Depth; i++ ){
		printf( "	" );
	}

	printf( "%c\n", Parent->Data );

	if( Parent->LeftChild != NULL ){
		LCRS_PrintTree( Parent->LeftChild, Depth );
	}

	if( Parent->RightSibling != NULL ){
		LCRS_PrintTree( Parent->RightSibling, Depth+1 );
	}
}
