#include "RedBlackTree.h"

extern RBTNode* Nil;

RBTNode* RBT_CreateNode( ElementType NewData ){
	RBTNode* NewNode = (RBTNode*)malloc( sizeof( RBTNode ) );
	
	NewNode->Parent = NULL;
	NewNode->Left = NULL;
	NewNode->Right = NULL;
	NewNode->Data = NewData;
	NewNode->Color = BLACK;
	
	return NewNode;
}

void RBT_DestroyNode( RBTNode* _Node ){
	free( _Node );
}

void RBT_DestroyTree( RBTNode* Tree ){
	if( Tree->Right != Nil ){
		RBT_DestroyTree( Tree->Right );
	} 
	if( Tree->Left != Nil ){
		RBT_DestroyTree( Tree->Left );
	}
	
	Tree->Left = Nil;
	Tree->Right = Nil;
	
	RBT_DestroyNode( Tree );
}

RBTNode* RBT_SearchNode( RBTNode* Tree, ElementType Target ){
	if( Tree == Nil ){
		return NULL;
	}
	
	if( Tree->Data > Target ){
		return RBT_SearchNode( Tree->Left, Target );
	} else if( Tree->Data < Target ){
		return RBT_SearchNode( Tree->Right, Target );
	} else {
		return Tree;
	}
}

RBTNode* RBT_SearchMinNode( RBTNode* Tree ){
	if( Tree == Nil ){
		return Nil;
	}
	
	if( Tree->Left != Nil ){
		return RBT_SearchMinNode( Tree->Left );
	} else{
		return Tree;
	}
}

void RBT_InsertNode( RBTNode** Tree, RBTNode* NewNode ){
	RBT_InsertNodeHelper( Tree, NewNode );
	
	NewNode->Color = RED;
	NewNode->Left = Nil;
	NewNode->Right = Nil;
	
	RBT_RebuildAfterInsert( Tree, NewNode );
}
