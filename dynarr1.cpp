#include <iostream> 
using namespace std; 

class DynamicArray{

	private: 
		int *  storage; 
		int size; 
		int capacity; 

	public:                
	int addElement(); 
        int  removeElement();
	void print(){}; 
	DynamicArray(int x=10){
        int storage = x; 
         int size = x;
        int  capacity =0; 
}




};



	int DynamicArray::addElement(int p){
		if(capacity==size){
			int * temp = new int[capacity + 5];
			for(i = 0; i  < capacity; i ++){
				temp[i] = storage[i]}
			} 	

			capacity = capacity + 5; 
			storage = temp;
		}
		storage [size]= p; 
		size = size + 1; 

	
	void DynamicArray::print(){
         cout <<"storage: " << storage << endl; 
	 cout <<"capacity: " << capacity << endl; 

}

int main(){
 DynamicArray obj1; 
 obj.print();
 obj.addElement(7);




















return 0; 
}
