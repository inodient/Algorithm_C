//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void Swap( int* A, int* B ){
//	int Temp = *A;
//	*A = *B;
//	*B = Temp;
//}
//
//void BubbleSort( int DataSet[], int Length ){
//	int i, j =0;
//
//	for( i=0; i<Length-1; i++ ){
//		for( j=0; j<Length-(i+1); j++ ){
//			if( DataSet[j] > DataSet[j+1] ){
//				Swap( &DataSet[j], &DataSet[j+1] );
//			}
//		}
//	}
//}
//
//void InsertionSort( int DataSet[], int Length ){
//	int i = 0;
//	int j = 0;
//	int Value = 0;
//
//	for( i=1; i<Length; i++ ){
//		if( DataSet[i-1] < DataSet[i] )
//			continue;
//
//		Value = DataSet[i];
//
//		for( j=0; j<i; j++ ){
//			if( DataSet[j] > Value ){
//				memmove( &DataSet[j+1], &DataSet[j], sizeof( DataSet[0] ) * ( i - j ) );
//				DataSet[j] = Value;
//				break;
//			}
//		}
//	}
//}
//
//int Partition_Pivot_Left( int DataSet[], int Left, int Right ){
//	int First = Left;
//	int Pivot = DataSet[Left];
//
//	++Left;
//
//	while( Left <= Right ){
//		while( DataSet[Left] <= Pivot && Left < Right ){
//			++Left;
//		}
//		while( DataSet[Right] > Pivot && Left <= Right ){
//			--Right;
//		}
//
//		if( Left < Right ){
//			Swap( &DataSet[Left], &DataSet[Right] );
//		} else{
//			break;
//		}
//	}
//
//	Swap( &DataSet[Right], &DataSet[First] );
//
//	return Right;
//}
//
//int Partition_Pivot_Right( int DataSet[], int Left, int Right ){
//	int Last = Right;
//	int Pivot = DataSet[Right];
//
//	--Right;
//
//	while( Left <= Right ){
//		while( DataSet[Right] >= Pivot && Left < Right ){
//			--Right;
//		}
//		while( DataSet[Left] < Pivot && Left <= Right ){
//			++Left;
//		}
//
//		if( Left < Right ){
//			Swap( &DataSet[Left], &DataSet[Right] );
//		} else{
//			break;
//		}
//	}
//
//	Swap( &DataSet[Left], &DataSet[Last] );
//
//	return Left;
//}
//
//void QuickSort_Pivot_Left( int DataSet[], int Left, int Right ){
//	if( Left < Right ){
//		int Index = Partition_Pivot_Left( DataSet, Left, Right );
//
//		QuickSort_Pivot_Left( DataSet, Left, Index - 1 );
//		QuickSort_Pivot_Left( DataSet, Index + 1, Right );
//	}
//}
//
//void QuickSort_Pivot_Right( int DataSet[], int Left, int Right ){
//	if( Left < Right ){
//		int Index = Partition_Pivot_Right( DataSet, Left, Right );
//
//		QuickSort_Pivot_Right( DataSet, Left, Index - 1 );
//		QuickSort_Pivot_Right( DataSet, Index + 1, Right );
//	}
//}
//
//int main( void ){
//	int i = 0;
//	int DataSet[] = { 8,3,3,2,1,3,5,6,7,8,4,3,8,9,10 };
//	int Length = sizeof DataSet / sizeof DataSet[0];
//
//	QuickSort_Pivot_Left( DataSet, 0, Length - 1 );
//
//	printf( "Quick Sort : Pivot_Left\n" );
//	for( i=0; i<Length; i++ ){
//		printf( "%d	", DataSet[i] );
//	}
//	printf( "\n" );
//
//	int DataSet2[] = { 11,5,2,4,3,1 };
//	Length = sizeof DataSet2 / sizeof DataSet2[0];
//
//	QuickSort_Pivot_Right( DataSet2, 0, Length - 1 );
//
//	printf( "Quick Sort : Pivot_Right\n" );
//	for( i=0; i<Length; i++ ){
//		printf( "%d	", DataSet2[i] );
//	}
//	printf( "\n" );
//
//	printf( "Bubble Sort\n" );
//	int DataSet3[] = { 10,9,8,7,6,5,4,3,2,1 };
//	Length = sizeof DataSet3 / sizeof DataSet[0];
//
//	BubbleSort( DataSet3, Length );
//	for( i=0; i<Length; i++ ){
//		printf( "%d	", DataSet3[i] );
//	}
//	printf( "\n" );
//
//	printf( "Insertion Sort\n" );
//	int DataSet4[] = { 8,3,3,2,1,3,5,6,7,8,4,3,8,9,10 };
//	Length = sizeof DataSet4 / sizeof DataSet4[0];
//
//	InsertionSort( DataSet4, Length );
//	for( i=0; i<Length; i++ ){
//		printf( "%d	", DataSet4[i] );
//	}
//	printf( "\n" );
//}
