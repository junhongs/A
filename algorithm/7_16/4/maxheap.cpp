#include <iostream>
#include "tree.h"

using namespace std;

#define MAX_HEAP_SIZE 100
#define START_INDEX 1
#define TRUE 1
#define FALSE 0

class MaxHeap: public Tree{
private :
	TreeNode *heap[MAX_HEAP_SIZE];
	int heapSize;

		int isEmpty(void){
			return this->heapSize == 0 ? TRUE:FALSE;
		}
		int isFull(){
			return this->heapSize == MAX_HEAP_SIZE ? TURE:FALSE;
		}
		void upheap(){
			int currentIndex = this->heapSize;
			int value = this->heap[currentIndex];
			while( this->heap[currentIndex / 2]->getData() <= value){
				this->swap(currentIndex/2,currentIndex)	
			}
			return 0;
		}
		void printTreeNode(int index){
			TreeNode *node = this -> heap[index];
			if(node != NULL) cout << node->getData() << " ";
			else cout << "0";
		}
		TreeNode* deleteNode(void){
			if(this->isEmpty()){
				return NULL;
			}
			TreeNode* targetNode = this->heap[START_INDEX];
			this->heap[START_INDEX] = this->heap[this->heapSize];
			this->heapSize--;
		}
		void downheap(void){
			int pIndex = START_INDEX;
			int cIndex = START_INDEX * 2;
			while(cIndex <= this->heapSize){
				if(this->heap[cIndex] -> getdata() > this->heap[cIndex+1]->getData() ){
					cIndex++;
				}
				if(this->heap[cIndex]->getData() <= this->heap[pIndex]->getData()){
					
				}
				swap(pIndex,cIndex);
				pIndex = cIndex;
				cIndex = pIndex * 2;
			}
		}
		void swap(int pIndex,int cIndex){
			TreeNode *tmp;
			tmp = this->heap[pIndex];
			this->heap[pIndex] = this->heap[cIndex];
			this->heap[cIndex] = tmp;

		}
public:
	MaxHeap(void){
		this->heapSize = 0;
		memset(this->heap,0,sizeof(TreeNode) *MAX_HEAP_SIZE);
		TreeNode *dummyNode = new TreeNode(999999);
		this->heap[0] = dummyNode;

		if(this->isFull())
		{
			cout << "HEAP IS FULL" << endl;
		}
	}

	virtual void pushTreeNode(TreeNode *newNode){
		cout << "PUSH NEW NODE DATA : ";
		if(this->isFull()){
			cout << "HEAP iS FULL" << endl;
			return;
		}
		cout << newNode->getData() << endl;
		this->heapSize++;
		this->heap[heapSize] = newNode;
		this->upheap();
	}
	virtual TreeNode* popTreeNode(void){
		cout << "POP NODE : ";
		TreeNode *targetNode = this->deleteNode();
		if(targetNode == NULL){
			cout << "HEAP IS EMPTY" << endl;
		}
		cout << targetNode->
		return NULL;
	}
	
	virtual void printAllNode(void){
		cout << "Print All Node : ";
		if(this->isEmpty()){
			cout << "HEAP IS EMPTY" << endl;
		}
		for(int i = START_INDEX; i < heapSize + 1; i++){
			this->printTreeNode(i);
		}
	}
	
}

int main(void)
{
	MaxHeap heap = new MaxHeap();
	heap->printAllNode();

	TreeNode *newnode1 = new TreeNode(1);
	heap->pushTreeNode(newnode1);
	heap->printAllNode();
	return 0;
}